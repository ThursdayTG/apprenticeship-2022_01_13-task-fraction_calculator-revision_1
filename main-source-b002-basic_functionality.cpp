// inclusion of libraries
#include <iostream>

// inclusion of files
#include "main-header-b001-v1_0_0.hpp"

// using directives
using	std::cout;
using	std::cin;



// function prototyping
float	A(float, float, float, float);
float	B(float, float, float, float);
float	C(float, float, float, float);
float	D(float, float, float, float);

// main function
int main() {

	// used to determine whether do-while loop should be repeated manually
	bool	restartOperator;

	do {

		// local variable declaration
		bool	loop = true;
		char	inputChar1, inputChar2;
		int		inputNumerator1, inputDenominator1;
		int		inputNumerator2, inputDenominator2;

		float	output;


		// default output
		//lorem_ipsum


		while (loop == true) {

			loop = false;

			// user input
			cout	<< " \n input fraction 1 (numerator1 - charInput - denominator1) \n ";
			cin		>> inputNumerator1 >> inputChar1 >> inputDenominator1;

			cout	<< " \n input mathematical operator (A/B/C/D) \n ";
			cin		>> inputChar2;

			cout	<< " \n input fraction 2 (numerator2 - charInput - denominator2) \n ";
			cin		>> inputNumerator2 >> inputChar1 >> inputDenominator2;


			// primary function execution
			switch (inputChar2) {
				case '1': case '+': case 'a': case 'A':
					output = A(inputNumerator1, inputDenominator1, inputNumerator2, inputDenominator2);
				break;
				case '2': case '-': case 'b': case 'B':
					output = B(inputNumerator1, inputDenominator1, inputNumerator2, inputDenominator2);
				break;
				case '3': case '*': case 'c': case 'C':
					output = C(inputNumerator1, inputDenominator1, inputNumerator2, inputDenominator2);
				break;
				case '4': case '/': case 'd': case 'D':
					output = D(inputNumerator1, inputDenominator1, inputNumerator2, inputDenominator2);
				break;
				default:
					loop = true;
			}
		}


		// output
		cout	<< " \n result: "
				<< output
				<< " \n\n"
				<< " - - - - - ";


		// end block
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen

	}	while (restartOperator == true);

	return 0;
}



// functions / subroutines
float A(float inputNumerator1, float inputDenominator1, float inputNumerator2, float inputDenominator2) {

	float	fraction1 = inputNumerator1 / inputDenominator1;
	float	fraction2 = inputNumerator2 / inputDenominator2;
	float	result = fraction1 + fraction2;

	return result;
}

float B(float inputNumerator1, float inputDenominator1, float inputNumerator2, float inputDenominator2) {

	float	fraction1 = inputNumerator1 / inputDenominator1;
	float	fraction2 = inputNumerator2 / inputDenominator2;
	float	result = fraction1 - fraction2;

	return result;
}

float C(float inputNumerator1, float inputDenominator1, float inputNumerator2, float inputDenominator2) {

	float	fraction1 = inputNumerator1 / inputDenominator1;
	float	fraction2 = inputNumerator2 / inputDenominator2;
	float	result = fraction1 * fraction2;

	return result;
}

float D(float inputNumerator1, float inputDenominator1, float inputNumerator2, float inputDenominator2) {

	float	fraction1 = inputNumerator1 / inputDenominator1;
	float	fraction2 = inputNumerator2 / inputDenominator2;
	float	result = fraction1 / fraction2;

	return result;
}



/* compilation with GCC via console
g++ -Og main-source-b002-basic_functionality.cpp -o main-newest.debug && clear && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b002-basic_functionality.cpp -o main-newest.release && ./main-newest.release
	compile for debug and check for errors:
g++ -Og -Wall -Wextra -Wpedantic -Werror main-source-b002-basic_functionality.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b002-basic_functionality.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, check for errors, and run program:
g++ -Og main-source-b002-basic_functionality.cpp -o main-newest.debug && clear && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b002-basic_functionality.cpp -o main-newest.release && ./main-newest.release

	g++ -Og main-source-b002-basic_functionality.cpp -o main-newest.debug
 && clear
 && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b002-basic_functionality.cpp -o main-newest.release
 && ./main-newest.release
*/
