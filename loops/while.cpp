#include <iostream>
#include <string>

int main() {

	/***
	int i = 0;
	while(i <= 10) {
		std::cout << "Current number : " << i << '\n';
		i++;
	}
	***/

	/***
	int i = 0;
	while(i <= 10) {
		int j = 0;
		while(j <= 10) {
			std::cout << "i = " << i << " j = " << j << '\n';
			j++;
		}
		i++;
	}
	***/

	/***
	std::string text01 = "loren ipsum";
	int i = 0;
	while(i < text01.length()) {
		std::cout << "index " << i << " = " << text01[i] << '\n';
		i++;
	}
	***/

	return(EXIT_SUCCESS);
}
