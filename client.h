/*
 * client.h
 *
 *  Created on: 23 авг. 2018 г.
 *      Author: ekibas29
 */

#ifndef CLIENT_H_
#define CLIENT_H_

#include <gtk/gtk.h>

#define NAME_LEN 21
#define MSG_LEN 64
#define SERVER_COUNT 3

enum Commands {
	CREATE_O = 1, GET_GAMES_LIST = 2, CREATE_X = 3,
	SYNC_GAME = 5, CHANGE_SERVER = 7, STEP = 10,
	WIN = 20, LOSE = 30, DRAW = 40, NEXT = 50,
	CHAT = 50, EMPTY = 60, BUSY = 61, EXIT = 66,
	CONNECTION_ERR = 80, INVALID_NAME = 85, CHECK = 100
};

struct my_rows{
	char name[20];
};

struct server_addr {
	char ip[16];
	char port[6];
	char chk_port[6];
};

typedef struct
{
	GtkWidget *entry, *textview;
} Widgets;

void insert_entry_text (GtkButton*, Widgets*);
GtkWidget *xpm_label_box(GtkWidget *parent, gchar *xpm_filename);
void callback_join_game (GtkWidget *widget, gpointer data);
void callback_my_crs (GtkWidget * widget, gpointer data);
void crt_field();
void crt_end_menu(int command);
void crt_main_menu();
void callback_empty (GtkWidget * widget, gpointer data);
int connect_to_server();
int connect_to_check_port();
gint delete_event (GtkWidget *widget, GdkEvent *event, gpointer data);
gboolean his_crs(gpointer data);

#endif /* CLIENT_H_ */
