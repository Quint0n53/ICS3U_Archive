#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
	int v = 1;
	int c = 0;
	int s = 0;
	char vowels[] = "AEIOUaeiou";
	string phrase;
	cout << "Please enter some letters or words:" << endl; //collect phrase
	getline(cin, phrase);
	for (int i = 0; i < phrase.size(); i++) {//check each letter
		for (int j = 0; j < 9; j++) {//check agasint vowels
			if (phrase[i] == vowels[j]) {
				v++;
				break;
			}
		} if (phrase[i] == ' ') {//check spaces
			s++;
		}
		else {
			c++;
		}
	}
	c -= v;//final math
	cout << "You have " << v << " vowels and " << c << " consonnants in that block of text" << endl;
	system("pause");
	return 0;
}