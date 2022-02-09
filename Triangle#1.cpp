#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int top;

	cout << "Please specify the length of triangle" << endl;
	cin >> top; // Recieve number
	while (top > 0) {//loop amount of times equal to number
		int print = 0;
		while (print < top) {//output stars
			cout << "*";
			print++;
		}
		cout << endl;
		top--;
	}
	system("pause");
	return 0;
}