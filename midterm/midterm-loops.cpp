#include <iostream>
#include <string>

int main() {
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

	/* Iterating through a user input with a Range-Based For-Loop */
	std::string strInput;
	std::cout << "Type an entire line of text : ";
	std::getline(std::cin, strInput);

	for(char tmp : strInput) {
		std::cout << "Range For : " << tmp << '\n';
	}

	/* Using a while to get continuos user input */
	std::string whileInput;
	std::string loopMsg = "Type any type of input : ";
	std::cout << loopMsg;
	while(std::getline(std::cin, whileInput)) {
		std::cout << "New Input : " << whileInput << '\n';
		std::cout << "To stop loop : Ctrl + d \n";
		std::cout << loopMsg;
	}


	exit(EXIT_SUCCESS);
}
