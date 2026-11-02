#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h> // std::rand()

int main() {
	/*
	I simple linear search of numbers in sequential order
	*/
	std::vector<int> numList;
	for(int i = 0; i <= 100; ++i) {
		numList.push_back(i);
	}

	int userNum = 0;
	std::cout << "Type any number between 0 and 100 : ";
	std::cin >> userNum;

	int i = 0;
	int listSize = numList.size();
	while((userNum != numList[i]) && (i < listSize)) {
		++i;
	}

	std::cout << "Took about " << i << " iterations" << '\n';

	/*
	Another form of a linear search, except using random numbers
	*/
	std::vector<int> randList;
	i = 0;
	while(i <= 100) {
		int randNum = std::rand() % 1000 + 1; // range of 1 - 1000
		randList.push_back(randNum);
		++i;
	}

	std::cout << "Type any number : ";
	std::cin >> userNum;
	i = 0;
	while((i != randList[i]) && (i < listSize)) {
		std::cout << "Current number : " << randList[i] << '\n';
		++i;
	}
	std::cout << "Took about " << i << " iterations" << '\n';

	exit(EXIT_SUCCESS);

}
