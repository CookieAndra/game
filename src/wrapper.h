/*
 * wrapper.h
 *
 *  Created on: 04.11.2014
 *      Author: oliverheidemanns
 */

#ifndef WRAPPER_H_
#define WRAPPER_H_

int Socket(int namespace, int style, int protocol);
int	Getaddrinfo(const char * __restrict a, const char * __restrict b, const struct addrinfo * __restrict c,struct addrinfo ** __restrict d);
int	Connect(int a, const struct sockaddr * b, socklen_t c);

#endif /* WRAPPER_H_ */
