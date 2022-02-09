#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double root1 = 0;
	double root2 = 0;
	double A = 0;
	double B = 0;
	double C = 0;
	double H = 0;
	double K = 0;
	cout << "Welcome to the qudratic solver\nTo use this solver the equation must be in vertex form (f(x)=a(x-h)^2+k)\nPleas enter the a value:";
	cin >> A;
	cout << "Pleas enter the h value:";
	cin >> H;
	cout << "Pleas enter the k value:";
	cin >> K;
	B = - H * 2 * A;
	C = A * (pow(H, 2)) + K;
	root1 = (-B + sqrt(pow(B, 2.0) - 4 * A * C)) / (2 * A);
	root2 = (-B - sqrt(pow(B, 2.0) - 4 * A * C)) / (2 * A);
	if ((pow(B, 2.0) - 4 * A * C) < 0 && (pow(B, 2.0) - 4 * A * C) < 0) {
		cout << "This quadratic has no roots. Please try different numbers";
		system("pause");
		return 0;
	}
	else if ((pow(B, 2) - 4 * A * C) == 0 || (pow(B, 2) - 4 * A * C) == 0 || root1 == root2) {
		cout << "This quadratic has only one root\nThat root is:";
		if ((pow(B, 2) - 4 * A * C) == 0 || root1 == root2) {
			cout << root1 << endl;
			system("pause");
			return 0;
		}
		else {
			cout << root2;
			system("pause");
			return 0;
		}
	}
	else {
		cout << "The first root is " << root1 << " and the second root is " << root2 << endl;
	}
	system("pause");
	return 0;
}