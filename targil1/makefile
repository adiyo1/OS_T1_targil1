CC = gcc
CFLAGS = -Wall -g

all: divideBy0 outOfStack undefinedMemory

divideBy0: divideBy0.o
	$(CC) $(CFLAGS) divideBy0.o -o divideBy0 $(LDFLAGS)

divideBy0.o: divideBy0.c
	$(CC) $(CFLAGS) -c divideBy0.c

outOfStack: outOfStack.o
	$(CC) $(CFLAGS) outOfStack.o -o outOfStack $(LDFLAGS)

outOfStack.o: outOfStack.c
	$(CC) $(CFLAGS) -c outOfStack.c

undefinedMemory: undefinedMemory.o
	$(CC) $(CFLAGS) undefinedMemory.o -o undefinedMemory $(LDFLAGS)

undefinedMemory.o: undefinedMemory.c
	$(CC) $(CFLAGS) -c undefinedMemory.c


clean:
	rm -f *.o divideBy0 outOfStack undefinedMemory
