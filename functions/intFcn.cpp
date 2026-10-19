#include <iostream>

int sumFcn(int num01, int num02){

	return (num01 + num02);
}

int main() {
	
	int var01;
	int var02;

	std::cout << "Type a numerical digit : ";
	std::cin >> var01;

	std::cout << "Type another numerical digit : ";
	std::cin >> var02;

	std::cout << "The sum of " << var01 << " and " 
		<< var02 << " = " << sumFcn(var01, var02)
		<< '\n';

	exit(EXIT_SUCCESS);
}
