CPP = g++ -std=c++23
FLAGS = -Wextra -Wall -pedantic

for : for.cpp
	$(CPP) $(FLAGS) -o for for.cpp
	./for

while : while.cpp
	$(CPP) $(FLAGS) -o while while.cpp
	./while

nested : nested.cpp
	$(CPP) $(FLAGS) -o nested nested.cpp
	./nested

clean:
	rm *.o for while nested
