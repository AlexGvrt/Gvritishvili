all: task

task: main.o sorts.o work_array.o
	g++ main.o sorts.o work_array.o -o task

main.o: main.cpp
	g++ -c main.cpp

sorts.o: sorts.cpp sorts.h
	g++ -c sorts.cpp sorts.h

work_array.o: work_array.cpp work_array.h
	g++ -c work_array.cpp work_array.h