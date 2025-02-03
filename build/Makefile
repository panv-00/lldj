CC=gcc
CFLAGS=-Wall -O3 -g

default:
	$(CC) -o ../lldj ../src/lldj.c \
		$(CFLAGS)
	
%.o: ../src/%.c ../scr/%.h
	$(CC) -c $< -o $*.o

