#include <iostream>
#include <vector>

int main() {

	/*
	Making a 10x10 matrix
	*/
	/*
	int i = 0;
	while(i < 10) {
		int j = 0;
		while(j < 10) {
			std::cout << "[]";
			++j;
		}
		std::cout << '\n';
		++i;
	}
	*/

	/*
	Printing a table from 1 - 100
	*/
	// Making a 2D matrix by using vectors
	std::cout << "intMat : \n";
	std::vector<std::vector<int>> intMat; // this vector is of type std::vector<int>
	for(int i = 0; i < 10; ++i) {
		// Making a temporary vector to add to out parent vector
		std::vector<int> tmpVect;
		for (int j = 1; j <= 10; ++j) {
			/*
			A conditional to print a 0 with single digit values
			*/
			if( ((10 * i) + j) < 10 ) {
				std::cout << i;
			}

			std::cout << ((10*i) + j) << ' ';
			// Adding values to the temporary vecotr
			tmpVect.push_back((10*i) + j);
		}
		std::cout << '\n';
		// Adding the temporary vector to our parent vector
		intMat.push_back(tmpVect);
	}

	/*
	Create a 2D matrix using arrays
	*/
	// Going through the vectors of the parent vector
	/*
	for(std::vector<int> tmpVect : intMat) {
		// Going through the values of the child vectors
		for (int tmpNum : tmpVect) {
			std::cout << tmpNum << ' ';
		}
		std::cout << '\n';
	}
	*/

	/*
	Several ways to sum up the matrix
	*/
	// Method 1
	std::cout << "Method 1 \n";
	int numSum = 0;
	for(std::vector<int> tmpVect : intMat) {
		for(int tmpNum : tmpVect) {
			numSum += tmpNum;
			std::cout << numSum << ' ';
		}
		std::cout << '\n';
	}

	std::cout << "Total sum of intMat : " << numSum << '\n';

	// Method 2
	std::cout << "Method 2 \n";
	numSum = 0;
	for(std::vector<int> tmpVect : intMat){
		int vectSum = 0;
		for(int tmpInt : tmpVect) {
			vectSum += tmpInt;
		}
		std::cout << vectSum << '\n';
		numSum += vectSum;
	}

	std::cout << "Total sum of intMat : " << numSum << '\n';

	// Method 3
	std::cout << "Method 3 \n";
	numSum = ((intMat[0][0] + intMat[9][9]) * 50);
	std::cout << "Total sum of intMat : " << numSum << '\n';
	exit(EXIT_SUCCESS);
}
