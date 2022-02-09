#include <iostream>
#include <math.h>
#include <time.h>
#include <vector>

using namespace std;

int hit() { //new card function
	int card = rand() % 10 + 1;
	return card;
}
int main() {
	srand(time(NULL)); //setup
	vector <int> cards;
	vector <int> dealer;
	int total = 0;
	int dtotal = 0;
	int play = 1;
	cout << "Welcome to Black Jack\n"; // intro
	cards.push_back(hit()); //two first cards
	cards.push_back(hit());
	total = cards[0] + cards[1];
	dealer.push_back(hit());
	dealer.push_back(hit());
	dtotal = dealer[0] + dealer[1];
	cout << "Cards:" << cards[0] << " " << cards[1] << " Total:" << total << endl;//show first cards
	cout << "House: " << dealer[0] << endl << endl;//show first cards
	while (total <= 21) {
		total = 0;
		cout << "1 for hit, 2 for stay";
		cin >> play;
		if (play == 1) {//hit
			cards.push_back(hit());
			cout << "You:";
			for (int i = 0; i < cards.size(); i++) {
				cout << cards[i] << " ";
				total += cards[i];
			}
			cout << "Total:" << total << endl;
			cout << "House: " << dealer[0] << endl << endl;
		}
		else if (play == 2) {//stay and endgame
			break;
		}
	}
	total = 0;
	for(;;){
		if (dtotal < 17) { //dealer autoplay
			dealer.push_back(hit());
			for (int k = 0; k < dealer.size(); k++) {
				dtotal += dealer[k];
			}
		}
		else {
			break;
		}
	}
	for (int i = 0; i < cards.size(); i++) {
		total += cards[i];
	}
	cout << "The house had " << dtotal << " and you had " << total << endl;
	if (dtotal > 21) { 
		cout << "House busts, You win!";
	}
	else if (total > 21) {
		cout << "You bust, House wins!";
	}
	else if (total > dtotal && total <= 21) {
		cout << "You win!";		
	}
	else if (total == dtotal) {
		cout << "You tied but since the house always wins, you actually lost!";
	}
	else if (dtotal > total) {
		cout << "House wins!";
	}
	system("pause");
	return 0;
}