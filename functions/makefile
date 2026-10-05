CPP = g++
FLAGS = -Wall -Wextra -pedantic

voidFcn : voidFcn.o
	$(CPP) $(FLAGS) -o voidFcn voidFcn.o

voidFcn.o : voidFcn.cpp
	$(CPP) $(FLAGS) -c voidFcn.cpp

clean:
	rm *.o voidFcn
