/*
 * server.h
 *
 *  Created on: 23 авг. 2018 г.
 *      Author: ekibas29
 */

#ifndef SERVER_H_
#define SERVER_H_

#define BACKLOG 10
#define MAXDATASIZE 100
#define MSG_LEN 64
#define SERV_CNT 2

enum Commands {
	CREATE_O = 1, GET_GAMES_LIST = 2, CREATE_X = 3,
	SYNC_GAME = 5, CHANGE_SERVER = 7, STEP = 10,
	WIN = 20, LOSE = 30, DRAW = 40, NEXT = 50,
	CHAT = 50, EMPTY = 60, BUSY = 61, EXIT = 66,
	CONNECTION_ERR = 80, INVALID_NAME = 85, CHECK = 100
};

struct server_addr {
	char ip[16];
	char port[6];
	char chk_port[6];
};

struct args{
	int fd;
	int chk_fd;
	int id;
	char *ip;
	char *port;
};

#endif /* SERVER_H_ */
