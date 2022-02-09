#include <iostream>
#include <math.h>

using namespace std;

int convert(double amt, char cur1, char cur2) {
	double CADdolls;
	if (cur1 == 'G') {
		CADdolls = amt / 0.57;
	}
	else if (cur1 == 'E') {
		CADdolls = amt / 0.67;
	}
	else if (cur1 == 'C') {
		CADdolls = amt / 1;
	}
	else if (cur1 == 'U') {
		CADdolls = amt / 0.79;
	}
	else if (cur1 == 'B') {
		CADdolls = amt / 0.000016;
	}
	else{
		CADdolls = amt * 0;
	}
	double total;
	if (cur2 == 'G') {
		total = CADdolls * 0.57;
	}
	else if (cur2 == 'E') {
		total = CADdolls * 0.67;
	}
	else if (cur2 == 'C') {
		total = CADdolls * 1;
	}
	else if (cur2 == 'U') {
		total = CADdolls * 0.79;
	}
	else if (cur2 == 'B') {
		total = CADdolls * 0.000016;
	}
	else {
		total = CADdolls * 0;
	}
	return total;
}
int main() {
	char oCur;
	int oAmount;
	char nCur;
	cout << "G = GBP, E = EUR, C = CAD, U = USD, B = Bitcoin" << endl;
	cout << "Please enter the currency you have:";
	cin >> oCur;
	cout << "Please enter how many you have:";
	cin >> oAmount;
	cout << "Please enter which currency you would like to convert to:";
	cin >> nCur;
	cout << "You have " << convert(oAmount, oCur, nCur) << " in the new currrency" << endl;

	system("pause");
	return 0;
}