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
#include "utilities.h"
#include "connect.h"

int sock; //socket file descriptor

int main(int argc, char *argv[]) {
	char test[255];
	sock = establishConnection();
	recv(sock, test, 255,0);
	printf("%s", test);
	return EXIT_SUCCESS;
}
