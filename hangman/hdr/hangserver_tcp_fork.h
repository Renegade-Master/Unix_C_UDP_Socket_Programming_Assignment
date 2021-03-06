/**
 * Author:  Rory Ryan [K00218864]
 * Date:    2020/03/09
 *
 * This is the Source file for the Client side of the TCP version of the
 * Networked Hangman game.
 *
 */

#ifndef HANGMAN_HANGSERVER_TCP_FORK_H
#define HANGMAN_HANGSERVER_TCP_FORK_H


#include <sys/wait.h>
#include "datatypes_all.h"
#include "datatypes_server.h"
#include "datatypes_tcp.h"

void reaper();
int passivesock(int service,const char *transport,int qlen);
int passiveTCP(int , int);

//extern int errno;
typedef unsigned short u_short;

int errexit(const char *format, ...);

#endif //HANGMAN_HANGSERVER_TCP_FORK_H
