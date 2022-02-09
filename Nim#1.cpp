#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main() {
	int sticks = 13;
	int play;
	cout << "Welcome to Nim, You may select 1,2 or 3 sticks to take away\n";
	for (int i = 0; i < sticks; i++) { //intro
		cout << "| ";
	}
	cout << endl;
	while (sticks > 0) { //loop till empty
		cout << "Please enter how mahy sticks you would like to take:";
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
			system("pause");
			return 0;
		}
	}
	system("pause");
	return 0;
}