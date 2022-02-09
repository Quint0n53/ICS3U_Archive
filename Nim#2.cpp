#include <iostream>
#include <math.h>
#include <time.h>
#include <vector>

using namespace std;

int main() {
	srand(time(NULL));
	int total = 0;
	int stacks = rand() % 5 + 3; //randomize stack number
	int youStack, youPlay, compStack, compPlay;
	vector <int> sticks; //stores all stacks
	for (int i = 0; i <= stacks; i++){
		sticks.push_back(rand() % 7 + 3);
		total += sticks[i];
	}
	cout << "Welcome to Nim, You may select 1, 2 or 3 sticks to take away\n";
	do {
		for (int i = 0; i <= stacks; i++) {
			cout << sticks[i] << " ";
			for (int j = 0; j < sticks[i]; j++) {//print board
				cout << "| ";
			}
			cout << endl;
		}
		do { //which stack the human wants. loop if invalid value
			cout << "Which stack would you like to pull from?";
			cin >> youStack;
			youStack -= 1;
		} while (youStack > sticks.size() || sticks[youStack] == 0);

		cout << "That stack contains " << sticks[youStack] << " sticks\n";//Pull stack from vector
		for (int i = 0; i < sticks[youStack]; i++) {
			cout << "| "; //output individual stack
		}
		do {
			cout << "\nHow many would you like to remove from that stack?";
			cin >> youPlay; //remove from stack
		} while (youPlay >= 4 || youPlay > sticks[youStack]);//redo if try to take too many sticks

		sticks[youStack] -= youPlay;//change value of sticks
		for (int i = 0; i < stacks; i++) {//total addition
			total += sticks[i];
		}

		//computer move random
		do {
			compStack = rand() % stacks + 1;
		} while (sticks[compStack] < 0);
		do {
			compPlay = rand() % 3 + 1;
		} while (compPlay > sticks[compStack]);

		sticks[compStack - 1] -= compPlay;
		cout << "The computer took " << compPlay << " sticks from the " << compStack << "th stack\n";
		for (int i = 0; i < stacks; i++) {//total addition
			total += sticks[i];
		}
	} while (total > 0);
	cout << "Someone lost. IDK who did tho";
	system("pause");
	return 0;
}