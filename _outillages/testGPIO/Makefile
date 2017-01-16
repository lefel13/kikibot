#définition des cibles particulières
.PHONY: clean, all

#désactivation des règles implicites
.SUFFIXES:

#définition des variables
CC=gcc
CFLAGS=-Wall -Werror
LDFLAGS=-lwiringPi
RM=rm -rf
EXEC=testGPIO

all: $(EXEC)

testGPIO: testGPIO.o
	$(CC) $^ -o $(EXEC) $(LDFLAGS)
	
%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	$(RM) *.o

mrproper: clean
	$(RM) $(EXEC)
