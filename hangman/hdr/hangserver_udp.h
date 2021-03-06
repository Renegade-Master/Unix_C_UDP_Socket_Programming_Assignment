/**
 * Author: Ciaran Bent [K00221230]
 * Date:    2020/03/09
 *
 * This is the Header file for the Server side of the UDP version of the
 * Networked Hangman game.
 *
 */

#ifndef HANGMAN_HANGSERVER_UDP_H
#define HANGMAN_HANGSERVER_UDP_H

#include "datatypes_all.h"
#include "datatypes_server.h"
#include "datatypes_udp.h"

void play_hangman(int sock, struct sockaddr_in* cli_addrs, socklen_t cli_len, const int* connected_clients);

void test_connection(int sock, struct sockaddr* cli_addr, socklen_t cli_len);

void setup_connections(int sock, struct sockaddr* cli_addr, socklen_t cli_len, const int* cli_count);

#endif //HANGMAN_HANGSERVER_UDP_H
