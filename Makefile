CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I./simulate

all:
	$(CC) $(CFLAGS) main.c simulator/sim.c -o main

clean:
	rm -f main *.o
