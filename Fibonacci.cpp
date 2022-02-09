#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int limit;
	int total = 0;
	int num1 = 1;
	int num2 = 1;
	cout << "Please specify the value you would like" << endl;
	cin >> limit;
	cout << "1 1 ";
	for (;;) {
		int total = num1 + num2;
		if (total > limit) {
			break;
		}
		cout << total << " ";
		num1 = num2 + 0;
		num2 = total + 0;
	}
	cout << endl;
	system("pause");
	return 0;
}