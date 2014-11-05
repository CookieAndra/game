/*
 * shm.c
 *
 *  Created on: 05.11.2014
 *      Author: oliverheidemanns
 */
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include "wrapper.h"

typedef struct player {
	int number;
	char name[255];
	unsigned int flag:1;
} player;
typedef struct gameInfo {
	char gameName[255];
	int numberOfPlayers;
	pid_t pid[2];
	player player[];
}gameInfo;

/*creates a shared memory segment and returns pointer to adress*/
char* createSharedMemory(size_t size) {
	int shmid;
	char* ptr;
	shmid = Shmget(IPC_PRIVATE, size, IPC_CREAT | 0666); //wrapper function
	ptr = Shmat(shmid, 0, 0);							//wrapper function
	shmctl(shmid, IPC_RMID, NULL);		//removes SHM after exiting program
	return ptr;
}
