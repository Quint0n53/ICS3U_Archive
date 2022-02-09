#include <iostream>
#include <time.h>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int hit() { //new card function
	int card = rand() % 10 + 1;
	return card;
}
int blackJack(float bet) {
	vector <int> cards;
	vector <int> dealer;
	int total = 0;
	int dtotal = 0;
	int play = 1;
	cout << "Welcome to Black Jack\n"; // intro
	cards.push_back(hit()); //two first cards
	cards.push_back(hit());
	total = cards[0] + cards[1];
	dealer.push_back(hit());
	dealer.push_back(hit());
	dtotal = dealer[0] + dealer[1];
	cout << "Cards:" << cards[0] << " " << cards[1] << " Total:" << total << endl;//show first cards
	cout << "House: " << dealer[0] << endl << endl;//show first cards
	while (total <= 21) {
		total = 0;
		cout << "1 for hit, 2 for stay";
		cin >> play;
		if (play == 1) {//hit
			cards.push_back(hit());
			cout << "You:";
			for (int i = 0; i < cards.size(); i++) {
				cout << cards[i] << " ";
				total += cards[i];
			}
			cout << "Total:" << total << endl;
			cout << "House: " << dealer[0] << endl << endl;
		}
		else if (play == 2) {//stay and endgame
			break;
		}
	}
	total = 0;
	for (;;) {
		if (dtotal < 17) { //dealer autoplay
			dealer.push_back(hit());
			for (int k = 0; k < dealer.size(); k++) {
				dtotal += dealer[k];
			}
		}
		else {
			break;
		}
	}
	for (int i = 0; i < cards.size(); i++) {
		total += cards[i];
	}
	cout << "The house had " << dtotal << " and you had " << total << endl;
	if (dtotal > 21) {
		cout << "House busts, You win!";
	}
	else if (total > 21) {
		cout << "You bust, House wins!";
		bet -= 2 * bet;
	}
	else if (total > dtotal && total <= 21) {
		cout << "You win!";
	}
	else if (total == dtotal) {
		cout << "You tied but since the house always wins, you actually lost!";
		bet -= 2 * bet;
	}
	else if (dtotal > total) {
		cout << "House wins!";
		bet -= 2 * bet;
	}
	return bet;
}
int masterMind(float bet) {
	int guess[4] = {};
	int code1, code2, code3, code4;
	do { //repeat if doubles
		code1 = rand() % 6 + 1;//digits of the code
		code2 = rand() % 6 + 1;
		code3 = rand() % 6 + 1;
		code4 = rand() % 6 + 1;
	} while (code1 == code2 || code1 == code3 || code1 == code4 || code2 == code3 || code2 == code4 || code3 == code4);
	int code[4] = { code1, code2, code3, code4 }; //combining the code into an array
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
			int guess[4] = {};
			int code1, code2, code3, code4;
			srand(time(NULL));
			do { //repeat if doubles
				code1 = rand() % 6 + 1;//digits of the code
				code2 = rand() % 6 + 1;
				code3 = rand() % 6 + 1;
				code4 = rand() % 6 + 1;
			} while (code1 == code2 || code1 == code3 || code1 == code4 || code2 == code3 || code2 == code4 || code3 == code4);
			int code[4] = { code1, code2, code3, code4 }; //combining the code into an array
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
					bet += bet;
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
		cout << "You have " << red << " red pins and " << white << " white pins."; //score and try again
		cout << "\nPlease try again\n";
	}
	cout << "ya ran out of gueses you fool" << endl;
	bet -= 2 * bet;
	return bet;
}
int nim(float bet) {
	int sticks = 13;
	int play;
	cout << "Welcome to Nim, You may select 1,2 or 3 sticks to take away\n";
	for (int i = 0; i < sticks; i++) { //intro
		cout << "| ";
	}
	cout << endl;
	while (sticks > 0) { //loop till empty
		cout << "Please enter how many sticks you would like to take:";
		cin >> play; //human play
		sticks -= play;
		cout << "You took " << play << " stick" << endl;
		for (int i = 0; i < sticks; i++) {//output after human play
			cout << "| ";
		}
		cout << endl; //computer calculation
		int comp = 4 - play;
		sticks -= comp;

		cout << "The computer took away " << comp << " stick" << endl;
		for (int j = 0; j < sticks; j++) { //output after computer play
			cout << "| ";
		}
		cout << endl;
		if (sticks == 1) { //end game. The computer will always win
			cout << "\nYou are forced to pull the final stick. Therefore you lose" << endl;
			bet -= 2 * bet;
			return bet;
		}
	}
	return bet;
}

int main() {
	srand(time(NULL));
	int funds = 5000;
	int play;
	float bet;
	bool choice = true;
	cout << "Welcome to the Casino!\n";
	do {
		for (;;) {
			cout << "Please select the game you would like to play\n1 = BlackJack\n2 = Mastermind\n3 = Nim\n4 = Quit\n";
			cin >> play;
			if (play <= 4) {
				break;
			}
		}
		if (play == 1) {
			do {
				cout << "You have " << funds << " dollars. How much money would you like to bet:\n";
				cin >> bet;
			} while (bet > funds);
			bet = blackJack(bet);
		}
		else if (play == 2) {
			do {
				cout << "You have " << funds << " dollars. How much money would you like to bet:\n";
				cin >> bet;
			} while (bet > funds);
			bet = masterMind(bet);
		}
		else if (play == 3) {
			do {
				cout << "You have " << funds << " dollars. How much money would you like to bet:\n";
				cin >> bet;
			} while (bet > funds);
			bet = nim(bet);
		}
		else if (play == 4) {
			return 0;
		}
		funds += bet;
		cout << "\nYou now have " << funds << " dollars\n";
	} while (funds > 0);
	system("pause");
	return 0;
}