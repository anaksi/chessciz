CC = gcc
CFLAGS  = -Wall -Werror

.PHONY: clean

all: bin/chessviz


test: bin/chess-test
	bin/chess-test

bin/chessviz: build/main.o build/board.o build/board_print_plain.o bin
	$(CC) $(CFLAGS) build/main.o build/board_print_plain.o build/board.o -o bin/chessviz

build/main.o: src/main.c src/board.h src/board_print_plain.h build
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

build/board.o: src/board.c src/board.h build
	$(CC) $(CFLAGS) -c src/board.c -o build/board.o

build/board_print_plain.o: src/board_print_plain.c src/board_print_plain.h build
	$(CC) $(CFLAGS) -c src/board_print_plain.c -o build/board_print_plain.o

bin/chess-test: build/main_test.o build/board.o build/board_print_plain.o bin
	$(CC) $(CFLAGS) build/main_test.o build/board.o build/board_print_plain.o  -o bin/chess-test

build/main_test.o: test/main.c thirdparty/ctest.h src/board.h src/board_print_plain.h build
	$(CC) $(CFLAGS) -I thirdparty -I src -c test/main.c -o build/main_test.o


build:
	mkdir build

bin:
	mkdir bin

clean:
	rm -rf build bin
