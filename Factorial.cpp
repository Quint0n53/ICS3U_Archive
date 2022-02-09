#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int doMath(int num) {
	int result = 1;
	for (int i = 0; i < num; i++) {
		result = (num - i) * result;
	};
	return result;
}

int main() {

	int factorial;
	cin >> factorial;
	cout << doMath(factorial);
	system("pause");


	return 0;
}
