CPP = g++ -std=c++23
FLAGS = -Wall -Wextra

mid: midterm.o
	$(CPP) $(FLAGS) -o mid midterm.o

midterm.o: midterm.cpp
	$(CPP) $(FLAGS) -c midterm.cpp

clean:
	rm *.o a.out mid
