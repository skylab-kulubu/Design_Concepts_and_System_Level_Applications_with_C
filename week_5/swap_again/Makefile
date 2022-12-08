CC = gcc

all: swap.o 
	gcc swap.o main.c -o main
	rm -f swap.o

swap.o: swap.c swap.h
	$(CC) -c swap.c

clean:
	rm -f main

rebuild:
	make clean
	make all