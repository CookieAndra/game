/*
 * connect.c
 *
 *  Created on: 04.11.2014
 *      Author: oliverheidemanns
 *	This File is used to establish connection to a server and return the socket file descriptor
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>
#include "wrapper.h"

//Connection Settings
#define GAMEKINDNAME 	"NMMorris"
#define PORTNUMBER 		"1357"
#define HOSTNAME 		"sysprak.priv.lab.nm.ifi.lmu.de"

/*
 * Establishes connection to server and returns filedescriptor of socket
 */
int establishConnection() {
	char hostName[240] = HOSTNAME;
	char portNumber[10] = PORTNUMBER;
	struct addrinfo hints, *serverInfo;
	serverInfo = malloc(sizeof(struct addrinfo));
	memset(&hints, 0, sizeof(struct addrinfo));

	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;

	printf("Trying to establish Connection to [%s:%s] \n", hostName, portNumber);

	int sock = Socket(AF_INET, SOCK_STREAM, 0); //Wrapper function
	Getaddrinfo(HOSTNAME, PORTNUMBER, &hints, &serverInfo); //Wrapper function
	Connect(sock,serverInfo->ai_addr, serverInfo->ai_addrlen); //Wrapper function
	return sock; // returns socket filedescriptor
	}
