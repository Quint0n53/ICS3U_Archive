#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int bottom;
	cout << "Please enter size of bottom:";
	cin >> bottom; //collect data

	for (int i = 0; i < bottom; i++) {
		for (int a = 0; a < bottom - i; a++) {
			cout << " "; //spaces across to balance
		}
		for (int b = 0; b <= i; b++) {
			cout << "* "; // stars with spaces for cool vibes
		}
		cout << endl;
	}
	system("pause");
	return 0;
}