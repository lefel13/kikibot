#définition des cibles particulières
.PHONY: clean, all

#désactivation des règles implicites
.SUFFIXES:

#définition des variables
CC=gcc
CFLAGS=-Wall -Werror
RM=rm -rf
EXEC=testlib
LIBDIR="/home/pi/kikibot/Motors Driving"
LIB=motorsDriving

all: test lib

test: testMotorsDriving.o
	$(CC) -L$(LIBDIR) -Wl,-rpath=$(LIBDIR) $^ -o $(EXEC) -l$(LIB) -lwiringPi

lib: motorsDriving.o
	$(CC) -shared -o libmotorsDriving.so motorsDriving.o

motorsDriving.o: motorsDriving.c	
	$(CC) -c $(CFLAGS) -fpic $<

testMotorsDriving.o: testMotorsDriving.c
	$(CC) -c $(CFLAGS) $< -o $@ 

clean:
	$(RM) *.o
	$(RM) *.so
	