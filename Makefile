CC=gcc
all: boxmsg.c
	rm -f box
	$(CC) boxmsg.c -o box
mini: boxmsg-mini.c
	rm -f box
	$(CC) boxmsg.c -o box
clean:
	rm -f box
