#include <iostream>
#include <string>

int main() {
	/* Basic While-Loop */
	int i = 0;
	int len = 10;
	while(i <= len) {
		std::cout << "While : " << i << '\n';
		++i;
	}

	/* Basic For-Loop */
	for(int num = 0; num <= len; ++num) {
		std::cout << "For : " << num << '\n';
	}

	exit(EXIT_SUCCESS);
}
