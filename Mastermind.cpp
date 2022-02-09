#include <iostream>
#include <math.h>
#include <time.h>
#include <array>

using namespace std;

int main() {
	int guess[4] = {};
	int code1, code2, code3, code4;
 	srand(time(NULL));
	do { //repeat if doubles
		code1 = rand() % 6 + 1;//digits of the code
		code2 = rand() % 6 + 1;
		code3 = rand() % 6 + 1;
		code4 = rand() % 6 + 1;
	} while (code1 == code2 || code1 == code3 || code1 == code4 || code2 == code3 || code2 == code4 || code3 == code4);
	int code[4] = {code1, code2, code3, code4 }; //combining the code into an array
	cout << "Welcome to mastermind\nThe code is a random set of 4 numbers ranging from 1-6 and no doubles\nInput your numbers with spaces in between:\n";
	
	for (int i = 0; i < 12; i++) { //12 tries
		int red = 0;// reset pin counts
		int white = 0;

		cout << "You have " << 12 - i << " guesses remaining:"; //guess numbers
		cin >> guess[0] >> guess[1] >> guess[2] >> guess[3]; //input the guess

		for (int j = 0; j < 4; j++) {
			if (guess[j] == code[j]) { red++; } // find red count
		}

		if (guess[0] == code[1]) { white++; } // find white count
		if (guess[0] == code[2]) { white++; }
		if (guess[0] == code[3]) { white++; }
		if (guess[1] == code[0]) { white++; } // find white count
		if (guess[1] == code[2]) { white++; }
		if (guess[1] == code[3]) { white++; }
		if (guess[2] == code[0]) { white++; } // find white count
		if (guess[2] == code[1]) { white++; }
		if (guess[2] == code[3]) { white++; }
		if (guess[3] == code[0]) { white++; } // find white count
		if (guess[3] == code[1]) { white++; }
		if (guess[3] == code[2]) { white++; }

		if (red == 4) { //winner 
			cout << "You win, Congrats\n";
			system("pause");
			return 0;
		}
		cout << "You have " << red << " red pins and " << white << " white pins."; //score and try again
		cout << "\nPlease try again\n";
	}
	cout << "ya ran out of gueses you fool" << endl;
	system("pause");
	return 0;
}