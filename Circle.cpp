#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int know = 0;
	double area = 0;
	double diam = 0;
	double radi = 0;
	cout << "Welcome to the circle calculator:\nPlease indicate which value you have 1 = Area, 2 = Diameter, 3 = Radius \n";
	cin >> know; //getting value
	if (know == 1) { // area to others
		cout << "Please input the value:";
		cin >> area;
		radi = sqrt(area / 3.1415926535);
		diam = radi * 2;
	} 
	else if (know == 2) { // diameter to others
		cout << "Please input the value:";
		cin >> diam;
		radi = diam / 2;
		area = pow(radi, 2) * 3.1415926535;
	} 
	else if (know == 3) { // radius to others
		cout << "Please input the value:";
		cin >> radi;
		diam = radi * 2;
		area = pow(radi, 2) * 3.1415926535;
	}
	else { //fail safe
		cout << "You entered a invalid known value. Please try again\n";
		system("pause"); //break
		return 0;
	}
	cout << "The area of your circle is " << area << ", the diameter of your circle is " << diam << " and the radius of your circle is " << radi << endl; //output
	system("pause");
	return 0;
}