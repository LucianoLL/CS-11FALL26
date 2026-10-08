#include <iostream>
#include <string>

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

	exit(EXIT_SUCCESS);
}
