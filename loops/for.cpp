#include <iostream>
#include <string>

int main() {

	/*
	 * A simple for loop with a range of 10.
	 */
	for(int i = 0; i <= 10; i++) {
		std::cout << "Current number: " << i << '\n';
	}

	/*
	 * You can nest for loops,
	 * essentially putting a for loop within another.
	 */
	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= 10; j++){
			std::cout << "i = " << i << " j = " << j << '\n';
		}
	}

	/* Using the length of a string, you can
	 * iterate through a string via indexing.
	 */
	std::string text01 = "loren ipsum";
	for(int i = 0; i < text01.length(); i++) {
		std::cout << "index " << i << " = " << text01[i] << '\n';
	}



	exit(EXIT_SUCCESS);
}
