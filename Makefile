CC=gcc
all: boxmsg.c
	$(CC) boxmsg.c -o box
clean:
	rm -f box
