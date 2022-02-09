#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
	double a;
	double b;
	double c;
	double d;
	double check;
	double factorresult;

	vector <double> adivs;
	vector <double> ddivs;
	vector <double> pq;
	double root1;
	double root2;
	double root3;
	double f, g, h, i, j, k;
	cout << "Welcome to the cubic solver.\nPlease enter the A value:";
	cin >> a;
	cout << "Please enter the B value:";
	cin >> b;
	cout << "Please enter the C value:";
	cin >> c;
	cout << "Please enter the D value:";
	cin >> d;

	for (int i = 1; i <= abs(a); i++) {// find divisors of a
		if (a % i == 0) {
			adivs.push_back(i);
			adivs.push_back(-i);
		}
	}
	for (int i = 1; i <= abs(d); i++) {// find divisors of d
		if (d % i == 0) {
			ddivs.push_back(i);
			ddivs.push_back(-i);
		}
	}
	for (int i = 0; i < adivs.size(); i++) {//find pqs
		for (int j = 0; j < ddivs.size(); j++) {
			pq.push_back(ddivs[j] / adivs[i]);
		}
	}
	for (int i = 0; i < pq.size(); i++) {//find first valid pq
		factorresult = (a * pow(pq[i], 3)) + (b * pow(pq[i], 2)) + (c * pq[i]) + d;
		cout << factorresult << " ";
		if (factorresult <= 1 && factorresult >= -1) {
			root1 = pq[i];
		}
	}

	f = a * root1; //synthetic divide
	i = b + f;
	g = i * root1;
	j = c + g;
	check = pow(i, 2) - 4 * a * j;

	//AIJ is new quadratic
	if (check < 0) {
		cout << "This cubic only has 1 root\nThat root is " << root1;
	}
	else if (check == 0) {
		root2 = (-i + sqrt(pow(i, 2) - 4 * a * j)) / (2 * a);
		cout << "This cubic has 2 roots\n Those are " << root1 << " and " << root2;
	}
	else {
		root2 = (-i + sqrt(pow(i, 2) - 4 * a * j)) / (2 * a);
		root3 = (-i - sqrt(pow(i, 2) - 4 * a * j)) / (2 * a);
		cout << "The roots are " << root1 << " " << root2 << " " << root3 << endl;
	}
	system("pause");
	return 0;
}