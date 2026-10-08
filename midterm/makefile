CPP = g++ -std=c++23
FLAGS = -Wall -Wextra

mid: midterm.o
	$(CPP) $(FLAGS) -o mid midterm.o

midterm.o: midterm.cpp
	$(CPP) $(FLAGS) -c midterm.cpp

input: midterm-input.o
	$(CPP) $(FLAGS) -o input midterm-input.o

midterm-input.o: midterm-input.cpp
	$(CPP) $(FLAGS) -c midterm-input.cpp

loops: midterm-loops.o
	$(CPP) $(FLAGS) -o loops midterm-loops.o

midterm-loops.o: midterm-loops.cpp
	$(CPP) $(FLAGS) -c midterm-loops.cpp

clean:
	rm *.o a.out mid input loops
