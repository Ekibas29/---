all:
	gcc -Wall -g3 server.c llist.c glist.c -o server -lpthread
	gcc -Wall -g3 client.c -o client `pkg-config --cflags gtk+-2.0 --libs gtk+-2.0`

