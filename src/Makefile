.PHONY: all clean

all: bin/function

bin/function: build/src/main.o build/src/function.o
	gcc -Wall -Werror build/src/main.o build/src/function.o -o bin/function -lm
	
build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

function.o: function.c 
	gcc -Wall -Werror -c src/function.c -o build/src/fuction.o

clean:
	rm -rf main ctest *.o
