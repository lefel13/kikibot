#définition des cibles particulières
.PHONY: clean, all

#désactivation des règles implicites
.SUFFIXES:

#définition des variables
CC=gcc
CFLAGS=-Wall -Werror
LDFLAGS=-lwiringPi -lpthread
RM=rm -rf
EXEC=testlib
LIBDIR="/home/pi/dev/MotorsDriving"
LIB=motorsDriving

all: lib test

test: testMotorsDriving.o
	$(CC) -L$(LIBDIR) -Wl,-rpath=$(LIBDIR) $^ -o $(EXEC) -l$(LIB)

lib: motorsDriving.o
	$(CC) -shared -o libmotorsDriving.so motorsDriving.o $(LDFLAGS)

motorsDriving.o: motorsDriving.c	
	$(CC) -c $(CFLAGS) -fpic $<

testMotorsDriving.o: testMotorsDriving.c
	$(CC) -c $(CFLAGS) $< -o $@ 

clean:
	$(RM) *.o
	$(RM) *.so
	$(RM) $(EXEC)
