/*
 * utilities.c
 *
 *  Created on: 04.11.2014
 *      Author: oliverheidemanns
 */

#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

int Socket(int namespace, int type, int protocol) {
	int sock = socket(namespace, type, protocol);
	if (sock == -1) {
		perror("Error creating socket\n");
		exit(EXIT_FAILURE);
	}
	return sock;
}
