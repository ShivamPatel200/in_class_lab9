CC = g++
SOURCES = unit_test.cpp main.cpp

all: main unit_test

main: 
	$(CC) main.cpp -std=c++14 -o main

mainrun:
	rm -rf main unit_test
	$(CC) main.cpp -std=c++14 -o main
	./main

unit_test:
	$(CC) unit_test.cpp -std=c++14 -o unit_test

unitrun:
	rm -rf main unit_test
	$(CC) unit_test.cpp -std=c++14 -o unit_test
	./unit_test

clean: 
	rm -rf main mainrun unit_test unitrun