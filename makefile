main: main.o
	g++ -o main main.o

main.o: main.cpp MyVector.h MyVector.cxx

tests: tests.o
	g++ -o tests tests.o

tests.o: tests.cpp MyVector.h MyVector.cxx doctest.h

clean:
	rm -f *.o main 
