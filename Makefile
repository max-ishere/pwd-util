CXX = g++
CXXFLAGS = -Wall -g

main: main.o gen.o
	$(CXX) $(CXXFLAGS) -o main main.o gen.o

main.o: main.cpp gen.h
	$(CXX) $(CXXFLAGS) -c main.cpp

gen.o: gen.cpp
	$(CXX) $(CXXFLAGS) -c gen.cpp
