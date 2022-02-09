#include <iostream>
#include <vector>

using namespace std;

int main() {
	int top, halfT;//initialize
	int bottom, halfB;
	int comDiv;
	vector <int> vtop;//vectors of divisors
	vector <int> vbottom;
	cout << "Welcome to the fraction simplifier\n";
	cout << "Enter the numerator:";//user input
	cin >> top;
	cout << "Enter the denominator:";
	cin >> bottom;
	for (int i = 1; i <= top; i++) {// find divisors of top
		if (top % i == 0) {
			vtop.push_back(i);
		}
	}
	for (int i = 1; i <= bottom; i++) {//find divisors of bottom
		if (bottom % i == 0) {
			vbottom.push_back(i);
		}
	}
	for (int i = vbottom.size(); i > 0; i--) {//compare both sets starting at high number
		for (int j = vtop.size(); j > 0 ; j--) {
			if (vtop[vtop.size() - j] == vbottom[vbottom.size() - i]) {
				comDiv = vtop[vtop.size() - j];//whichever matches first is taken and spit out
				break;
			}
		}
	}//endline
	cout << "The common factor is " << comDiv << " which leaves your fraction at " << top / comDiv << " / " << bottom / comDiv << endl;
	
	system("pause");
	return 0;
}