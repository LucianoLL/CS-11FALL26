CPP = g++
FLAGS = -Wall -Wextra -pedantic

voidFcn : voidFcn.o
	$(CPP) $(FLAGS) -o voidFcn voidFcn.o

voidFcn.o : voidFcn.cpp
	$(CPP) $(FLAGS) -c voidFcn.cpp

intFcn : intFcn.o
	$(CPP) $(FLAGS) -o intFcn intFcn.o

intFcn.o : intFcn.cpp
	$(CPP) $(FLAGS) -c intFcn.cpp

clean:
	rm *.o voidFcn intFcn
