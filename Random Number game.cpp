#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;



int main() {
	int guess;
	srand(time(NULL));
	int real = rand() % 100 + 1;
	cout << "Guess my lucky number between 1-100:";
	cin >> guess;

	for (int i = 0; i < 10; i++) {
		if (guess == real) {
			cout << "Congrats, You win!!" << endl;
			break;
		}
		else if (guess > real) {
			cout << "Sorry thats too high. Please try again:";
			cin >> guess;
		}
		else {
			cout << "Sorry thats too low. Please try again:";
			cin >> guess;
		}
	}
	if (guess != real){
		cout << "Sorry you've run out of guesses" << endl;
}
	system("pause");
	return 0;
}
