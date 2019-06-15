function: main.o function.o
	gcc -Wall -o main main.o function.o 

test:
	gcc -Wall -o ctest ctest.c
	
main.o: main.c
	gcc -Wall -c main.c 

function.o: function.c 
	gcc -Wall -c function.c 

.PHONY: clean

clean:
	rm -rf main ctest *.o