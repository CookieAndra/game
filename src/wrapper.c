/*
 * wrapper.c
 *
 *  Created on: 04.11.2014
 *      Author: oliverheidemanns
 */
#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/shm.h>

int	Shmget(key_t a, size_t b, int c) {
	int ret;
	if ((ret = shmget(a,b,c)) == -1) {
		perror("Error creating SHM segment\n");
		exit(EXIT_FAILURE);
	}
	printf("Created Shared Memory Segment\n");
	return ret;
}

void *Shmat (int a, const void *b, int c) {
	void *ptr;
	ptr = shmat(a,b,c);
	if (ptr==(char *)-1) {
		perror("Error attaching shm\n");
		exit(EXIT_FAILURE);
	}
	return ptr;
}

int Socket(int namespace, int type, int protocol) {
	int sock = socket(namespace, type, protocol);
	if (sock == -1) {
		perror("Error creating socket\n");
		exit(EXIT_FAILURE);
	}
	printf("Socket created\n");
	return sock;
}

int Getaddrinfo(const char * __restrict a, const char * __restrict b, const struct addrinfo * __restrict c, struct addrinfo ** __restrict d) {
	if (getaddrinfo(a,b,c,d) != 0) {
		perror("Error: Unable to resolve Host\n");
		exit(EXIT_FAILURE);
	}
	printf("Resolved host address\n");
	return 0;
}

int	Connect(int a, const struct sockaddr * b, socklen_t c) {
	int ret;
	if ( (ret = connect (a,b,c)) < 0) {
		perror("Error connecting\n");
		exit(EXIT_FAILURE);
	}
	printf("Connection established\n");
	return ret;
}
