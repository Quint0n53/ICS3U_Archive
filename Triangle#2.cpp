#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int bottom;
	cout << "Please enter size of bottom:";
	cin >> bottom;//recieve input

	for (int i = 0; i < bottom; i++) { //loop for amount of lines
		for (int b = 0; b <= i; b++) {//loop outputting the star
			cout << "* ";
		}
		cout << endl;//create new line
	}
	system("pause");
	return 0;
}