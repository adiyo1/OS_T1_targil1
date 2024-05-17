CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g -O0 --coverage
LDFLAGS = -lm

.PHONY: all clean

all: dijkstra

dijkstra: main.o dijkstra.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

main.o: main.c dijkstra.h
	$(CC) $(CFLAGS) -c -o $@ $<

dijkstra.o: dijkstra.c dijkstra.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f dijkstra *.o *.gcov *.gcda *.gcno
