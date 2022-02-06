/* TEILAUFGABE 1

Legen Sie 4 Funktionen an mit einem Übergabe- und einem Rückgabeparameter vom Typ "int".
Die Namen der FUnktionen:
 - A
 - B
 - C
 - D

Die 4 Funktionen sollen über eine Eingabe und switch-case aufgerufen werden.
Momentan erfüllen die Funktionen erst Mal keine Aufgabe.
Bei switch-case default nicht vergessen.
*/



// inclusion of libraries
#include <iostream>

// inclusion of files
#include "main-header-b001-v1_0_0.hpp"

// using directives
using	std::cout;
using	std::cin;



// function prototyping
int	A(int);
int	B(int);
int	C(int);
int	D(int);

// main function
int main() {

	// used to determine whether do-while loop should be repeated manually
	bool	restartOperator;

	do {

		// local variable declaration
		bool	loop = true;
		char	userInput;
		int		intOutput;


		// default output
		//lorem_ipsum


		while (loop == true) {

			loop = false;

			// user input
			cout	<< " \n input (A/B/C/D): ";
			cin		>> userInput;


			// primary function execution & output
			switch (userInput) {
				case 'a':
				case 'A':
					intOutput = A(0);
					cout	<< " intOutput: "
							<< intOutput;
				break;
				case 'b':
				case 'B':
					intOutput = B(0);
					cout	<< " intOutput: "
							<< intOutput;
				break;
				case 'c':
				case 'C':
					intOutput = C(0);
					cout	<< " intOutput: "
							<< intOutput;
				break;
				case 'd':
				case 'D':
					intOutput = D(0);
					cout	<< " intOutput: "
							<< intOutput;
				break;
				default:
					loop = true
			}
		}


		// end block
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen

	}	while (restartOperator == true);

	return 0;
}



// functions / subroutines
int A(int alpha) {

	return 1;
}

int B(int bravo) {

	return 2;
}

int C(int charlie) {

	return 3;
}

int D(int delta) {

	return 4;
}



/* compilation with GCC via console
g++ -Og main-source-b001-starting_point.cpp -o main-newest.debug && clear && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b001-starting_point.cpp -o main-newest.release && ./main-newest.release
	compile for debug and check for errors:
g++ -Og -Wall -Wextra -Wpedantic -Werror main-source-b001-starting_point.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b001-starting_point.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, check for errors, and run program:
g++ -Og main-source-b001-starting_point.cpp -o main-newest.debug && clear && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b001-starting_point.cpp -o main-newest.release && ./main-newest.release

	g++ -Og main-source-b001-starting_point.cpp -o main-newest.debug
 && clear
 && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b001-starting_point.cpp -o main-newest.release
 && ./main-newest.release
*/
