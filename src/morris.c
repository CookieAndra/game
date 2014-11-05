/*
 ============================================================================
 Name        : morris.c
 Author      : Oliver Heidemanns
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <strings.h>
#include "utilities.h"
#include "connect.h" 	//establishConnection()
#include "shm.h"  //createSharedmemory()

/* Global Variables */
int sock; 	//socket file descriptor

int main(int argc, char *argv[]) {
	char *ptr = createSharedMemory(10);
	sock = establishConnection();

	return EXIT_SUCCESS;
}
