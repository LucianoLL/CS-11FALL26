#include <iostream>
#include <string>

/* Defining a basic Void Function */
void basicFcn() {
	std::cout << "Basic function basicFcn() has been summoned! \n";
}

/* Defining a void function with arguments */
void descFcn(int userNum) {
	std::cout << "In descFcn() function with input : " << userNum << '\n';
	for(int i = 0; i <= userNum; ++i) {
		std::cout << "For : " << i << '\n';
	}
}

int main() {
	// INPUT ###################################################################################################

	/* The following lines will only print the first word/string */
	std::string userStr;
	std::cout << "Type a string of words : ";
	std::cin >> userStr;

	std::cout << "Your input is stored as : " << userStr << '\n';
	
	std::getline(std::cin, userStr); // Without this line, our getline what's left over in the stream

	/* The follwoing will get the entire line of strings */
	std::string userLine;
	std::cout << "Type new text : ";
	std::getline(std::cin, userLine);
	std::cout << "The entire string : " << userLine << '\n';

	// Loops ###################################################################################################
	
	/* Defining and Initializing a few variable */
	int i = 0; // To define a variable is to wrtie a type followed by a variable name
	int len = 10; // To initialize is to give a defined variable an initial value ...
		      // ... both variable are defined as INT, with var i initialize to 0 and len to 10

	/* Basic While-Loop */
	while(i <= len) {
		std::cout << "While : " << i << '\n';
		++i;
	}

	/* Basic For-Loop */
	for(int num = 0; num <= len; ++num) {
		std::cout << "For : " << num << '\n';
	}

	/* Treating a For-Loop as a While-Loop */
	i = 0; // Setting a previous variable to 0, no need to redefine
	for( ; i <= len; ) {
		std::cout << "ForWhile : " << i << '\n';
		++i;
	}

	// Functions################################################################################################

	/* Basic Function use */
	basicFcn();
	
	/* Basic Function with an argument */
	descFcn(15);

	/* Using an established function with user input */
	int arg1;
	std::cout << "Type any numerical decimal digit : ";
	std::cin >> arg1;
	descFcn(arg1);

	// #########################################################################################################
	


	exit(EXIT_SUCCESS);
}
