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
