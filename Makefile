CXXFLAGS = Wall –Wpedantic –O2

main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o



funcs.o: funcs.cpp funcs.h
	g++ $(CIXXFLAGS) -c funcs.cpp funcs.h

main.o: main.cpp funcs.h
	g++ $(CIXXFLAGS) -c main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h
	g++ $(CIXXFLAGS) -c tests.cpp doctest.h funcs.h

clean:
	rm -f main.o funcs.o tests.o doctest.h.gch funcs.h.gch
