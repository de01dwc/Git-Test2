CC = g++
CFlags = -g -Wall -Wextra

default: main

main: main.o
	$(CC) $(CFlags) -o main main.o

main.o: main.cpp
	$(CC) $(CFlags) -c main.cpp

clean:
	$(RM) main *.o *~
