#include <iostream>
#include <string>

void helloMsg() {
	std::cout << "void helloMsg function was called! \n";
}

void ifMsg(std::string userInput) {
	if (userInput == "hello") {
		std::cout << "The seceret hello messege.\n";
	} else {
		std::cout << "Basic text.\n";
	}
}

int main() {

	std::cout << "Calling a basic void function.\n";
	helloMsg();

	std::string txtInput;
	std::cout << "Type any text: ";
	std::cin >> txtInput;
	ifMsg(txtInput);

	exit(EXIT_SUCCESS);
}
