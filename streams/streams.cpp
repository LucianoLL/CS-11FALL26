#include <iostream>
#include <fstream>
#include <string>

void addToFile() {
	std::ofstream userOut;

	// The std::ios::app is to append content to the file
	// Without that argument, the file gets clear everytime
	userOut.open("userOutput.txt");

	if(!userOut.is_open()) {
		std::cout << "File does not exist!\n";
		exit(EXIT_FAILURE);
	}

	std::string userText = "Hello Wolrd!";
	userOut << userText;

	std::cout << "Check the userOutput.txt file!\n";
	
	// Making sure to close the output file to prevent memory leaks
	userOut.close();
}

int main() {
	std::ifstream userIn;
	userIn.open("userInput.txt");

	if(!userIn.is_open()){
		exit(EXIT_FAILURE);
	}
	
	std::string strBuff = "";

	while(std::getline(userIn, strBuff)){
		std::cout << strBuff << '\n';
	}

	// This is to close the file and prevent memory leaks
	userIn.close();

	addToFile();

	exit(EXIT_SUCCESS);

}
