#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double root1 = 0;
	double root2 = 0;
	double A = 0;
	double B = 0;
	double C = 0;
	cout << "Welcome to the qudratic solver\nTo use this solver the equation must be in standard form (ax^2 + bx + c = 0)\nPleas enter the a value:";
	cin >> A;
	cout << "Pleas enter the b value:";
	cin >> B;
	cout << "Pleas enter the c value:";
	cin >> C;
	root1 = (-B + sqrt(pow(B, 2.0) - 4 * A * C)) / (2 * A);
	root2 = (-B - sqrt(pow(B, 2.0) - 4 * A * C)) / (2 * A);
	if ((pow(B, 2.0) - 4 * A * C) < 0 && (pow(B, 2.0) - 4 * A * C) < 0){
	cout << "This quadratic has no roots. Please try different numbers";
	system("pause");
	return 0;
	} 
	else if ((pow(B, 2.0) - 4 * A * C) < 0 || (pow(B, 2.0) - 4 * A * C) < 0) {
		cout << "This quadratic has only one root\nThat root is:";
		if ((pow(B, 2.0) - 4 * A * C) < 0) {
			cout << root1;
			system("pause");
			return 0;
		}
		else {
			cout << root2;
			system("pause");
			return 0;
		}
	}
	cout << "The first root is " << root1 << " and the second root is " << root2 << endl;
	system("pause");
	return 0;
}