/*
 * wrapper.h
 *
 *  Created on: 04.11.2014
 *      Author: oliverheidemanns
 *
 *      Wrapper functions
 */

#ifndef WRAPPER_H_
#define WRAPPER_H_
#include <netdb.h>

int Socket(int a, int b, int c);

int	Getaddrinfo(const char * __restrict a, const char * __restrict b, const struct addrinfo * __restrict c,struct addrinfo ** __restrict d);

int	Connect(int a, const struct sockaddr * b, socklen_t c);

int	Shmget(key_t a, size_t b, int c);

void	*Shmat (int a, const void *b, int c);
#endif /* WRAPPER_H_ */
