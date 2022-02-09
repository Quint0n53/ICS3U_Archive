#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

int main() {
	cout << "Welcome to RPSSL \n1 = rock, 2 = paper, 3 = scissors\n";
	int human;
	for (;;) {//safety
		cin >> human;
		if (human <= 3) {
			break;
		}
	}
	srand(time(NULL));//comp rand
	int comp = rand() % 5 + 1;
	double result = human - comp;
	cout << "The computer played " << comp;
	if (result == 1 || result == -2) {//paper math combos
		cout << endl << "You WIN!!\n";
	}
	else if (result == 0) {//equal
		cout << endl << "Its a tie, play again\n";
	}
	else if (result == -1 || result == 2) {//paper math combos
		cout << endl << "You suck. You lost to a robot...\n";
	}
	else {
		cout << "You entered an invaild number. Dont try again.\n";
	}
	system("pause");
	return 0;
}