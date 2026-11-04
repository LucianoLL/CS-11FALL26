CPP = g++ -Wall -Wextra -pedantic

vectTypes : vectTypes.o
	$(CPP) -o vectTypes  vectTypes.o

vectTypes.o : vectTypes.cpp
	$(CPP) -c vectTypes.cpp

clean:
	rm *.o vectTypes
