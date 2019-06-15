.PHONY: all clean

all: function

function: main.o function.o
	gcc -Wall -Werror main.o function.o -lm
	
main.o: smain.c
	gcc -Wall -Werror -c main.c -lm

function.o: function.c 
	gcc -Wall -Werror -c function.c -lm

clean:
	rm -rf main ctest *.o

