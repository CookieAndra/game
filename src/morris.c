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

#define GAMEKINDNAME 	"NMMorris"
#define PORTNUMBER 		1357
#define HOSTNAME 		"sysprak.priv.lab.nm.ifi.lmu.de"

int sock;

int main(int argc, char *argv[]) {
	sock = Socket(AF_INET, SOCK_STREAM, 0);
	return EXIT_SUCCESS;
}
