.PHONY: clean

all: function

function: main.o function.o
	gcc -Wall -Werror -o main main.o function.o -lm
	
main.o: main.c
	gcc -Wall -Werror -c main.c 

function.o: function.c 
	gcc -Wall -Werror -c function.c 

clean:
	rm -rf main ctest *.o
