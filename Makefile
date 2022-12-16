all:
	g++ -std=c++17 -pthread 1.cpp -o program.out

clean:
	rm program.out
