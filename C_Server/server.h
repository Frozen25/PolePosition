#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H

/*
   gcc server.c -lpthread -o server
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>
#include <netinet/in.h>

int socket_desc , client_sock , c;
struct sockaddr_in server , client;
int clients_arr[4];

void init();
void run();
void *connection_handler(void *);
void send_to_all(char* message);


#endif //SERVER_SERVER_H