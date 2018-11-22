CC = gcc
CFLAGS = -Wall -Werror

all: main

main: zad14.o pole.o obwod.o point.h
	$(CC) $(CFLAGS) -o out zad14.o pole.o obwod.o -L ./point.h -lm

zad14.o: zad14.c
	$(CC) $(CFLAGS) -c zad14.c

pole.o: pole.c point.h
	$(CC) $(CFLAGS) -c pole.c

obwod.o: obwod.c
	$(CC) $(CFLAGS) -c obwod.c

clean:
	rm -rf *.o
	rm -rf *.gch

.PHONY: all clean
