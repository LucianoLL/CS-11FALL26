CPP = g++
FLAGS = -Wextra -Wall -pedantic

for : for.o
	$(CPP) $(FLAGS) -o for for.o
	./for

for.o : for.cpp
	$(CPP) -c for.cpp

while : while.o
	$(CPP) $(FLAGS) -o while while.o
	./while

while.o : while.cpp
	$(CPP) -c while.cpp

clean:
	rm *.o for while
