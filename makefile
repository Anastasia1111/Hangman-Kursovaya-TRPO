CC=g++
CFLAGS= -c -Wall -Werror
Bibl= -I libs

all: mkdir Hangman.exe

mkdir:
	mkdir -p bin build
Hangman.exe: build/visel.o build/pic.o build/glav.o build/dig.o
	$(CC) build/visel.o build/pic.o build/glav.o build/dig.o -o bin/Hangman

build/visel.o:src/visel.cpp
	$(CC) $(Bibl) -c src/visel.cpp -o build/visel.o
	
build/pic.o:
	$(CC) $(Bibl) -c src/pic.cpp -o build/pic.o

build/glav.o:
	$(CC) $(Bibl) -c src/glav.cpp -o build/glav.o

build/dig.o:
	$(CC) $(Bibl) -c src/dig.cpp -o build/dig.o
	
.PHONY: clean

clean:
	rm -rf bin/ build/ 
