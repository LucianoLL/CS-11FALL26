#include <iostream>
#include <vector>
#include <string>

int main() {
	
	std::vector<std::string> vectString;
	
	std::cout << "Type the number of inputs : ";
	int inputNum;
	std::cin >> inputNum;

	int i = 0;
	while(i < inputNum) {
		std::string tmpString;
		std::cin >> tmpString;
		vectString.push_back(tmpString);
		++i;
	}


	std::cout << "The contents in std::vector<std::string> : \n";
	for(std::string tmp: vectString) {
		std::cout << tmp << '\n';
	}

	exit(EXIT_SUCCESS);

}
