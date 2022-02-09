#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double original = 0;
	double result = 0;
	double higher = 0;
	double i = 0;
	cout << "Welcome to the square root machine.\nPlease enter which value you want to have cracked:";
	cin >> original;
	while (higher < original) {
		i++;
		higher = i * i;
	}
	i -= 1;
	double lower = i * i;
	double diff = original - lower;
	double decimal = diff / (i * 2);
	result = i + decimal;
	cout << "The sqaure root of your number is " << result << endl;
	system("pause");
	return 0;
}