#include <iostream>
#include <time.h>
using namespace std;
bool fivekind;//allows to be everywhere
bool fourkind;
bool fullhouse;
bool threekind;
bool twopairs;
bool onepair;
bool straight;

void wins(int unos, int dos, int tres, int quat, int cinq, int six) {//combos oh my god its big
	fivekind = false;//reset
	fourkind = false;
	fullhouse = false;
	threekind = false;
	twopairs = false;
	onepair = false;
	straight = false;
	if (unos == 5) { cout << "You have a 5 of a kind\n";  fivekind = true; }//fivekinds
	if (dos == 5) { cout << "You have a 5 of a kind\n";  fivekind = true;}
	if (tres == 5) { cout << "You have a 5 of a kind\n";  fivekind = true;}
	if (quat == 5) { cout << "You have a 5 of a kind\n";  fivekind = true;}
	if (cinq == 5) { cout << "You have a 5 of a kind\n";  fivekind = true;}
	if (six == 5) { cout << "You have a 5 of a kind\n";  fivekind = true;}

	if (unos == 4) { cout << "You have a 4 of a kind\n";  fourkind = true;}//fourkinds
	if (dos == 4) { cout << "You have a 4 of a kind\n";  fourkind = true;}
	if (tres == 4) { cout << "You have a 4 of a kind\n";  fourkind = true;}
	if (quat == 4) { cout << "You have a 4 of a kind\n";  fourkind = true;}
	if (cinq == 4) { cout << "You have a 4 of a kind\n";  fourkind = true;}
	if (six == 4) { cout << "You have a 4 of a kind\n";  fourkind = true;}

	if (unos == 3) { //2 choices
		if (dos == 2) { cout << "You have a full house\n"; fullhouse = true; }//fullhouse
		if (tres == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (quat == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (cinq == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (six == 2) { cout << "You have a full house\n"; fullhouse = true;}
		else { cout << "You have a 3 of a kind\n"; }//threekind
	}
	if (dos == 3) {
		if (unos == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (tres == 2) { cout << "You have a full house\n"; fullhouse = true; }
		if (quat == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (cinq == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (six == 2) { cout << "You have a full house\n"; fullhouse = true;}
		else { cout << "You have a 3 of a kind\n"; threekind = true;}
	}
	if (tres == 3) {
		if (unos == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (dos == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (quat == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (cinq == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (six == 2) { cout << "You have a full house\n"; fullhouse = true;}
		else { cout << "You have a 3 of a kind\n"; threekind = true;}
	}
	if (quat == 3) {
		if (unos == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (dos == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (tres == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (cinq == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (six == 2) { cout << "You have a full house\n"; fullhouse = true;}
		else { cout << "You have a 3 of a kind\n"; threekind = true;}
	}
	if (cinq == 3) {
		if (unos == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (dos == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (tres == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (quat == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (six == 2) { cout << "You have a full house\n"; fullhouse = true;}
		else { cout << "You have 3 of a kind\n"; threekind = true;}
	}
	if (six == 3) {
		if (unos == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (dos == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (tres == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (quat == 2) { cout << "You have a full house\n"; fullhouse = true;}
		if (cinq == 2) { cout << "You have a full house\n"; fullhouse = true; }
		else { cout << "You have 3 of a kind\n"; threekind = true;}
	}

	if (unos == 2) {//2 choices
		if (dos == 2) { cout << "You have 2 pairs\n";  twopairs = true;}//twopair
		if (tres == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		if (quat == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		if (cinq == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		if (six == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		else { cout << "You have a pair\n";  onepair = true;}//pair
	}
	if (dos == 2) {
		if (tres == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		if (quat == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		if (cinq == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		if (six == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		else { cout << "You have a pair\n";  onepair = true;}
	}
	if (tres == 2) {
		if (quat == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		if (cinq == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		if (six == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		else { cout << "You have a pair\n";  onepair = true;}
	}
	if (quat == 2) {
		if (cinq == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		if (six == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		else { cout << "You have a pair\n";  onepair = true;}
	}
	if (cinq == 2) {
		if (six == 2) { cout << "You have 2 pairs\n";  twopairs = true;}
		else { cout << "You have a pair\n";  onepair = true;}
	}
	if (six == 2) {
		cout << "You have a pair\n";  onepair = true;}

	if (unos == 1 && dos == 1 && tres == 1 && quat == 1 && cinq == 1) { cout << "You have a straight\n"; }//straights
	if (dos == 1 && tres == 1 && quat == 1 && cinq == 1 && six == 1) { cout << "You have a straight\n"; }
}

int main() {//main
	srand(time(NULL));
	int die[5] = { 0 };//setup
	int hold[5] = {1,1,1,1,1};
	int move = 0;
	int points;
	int ones = 0;
	int twos = 0;
	int threes = 0;
	int fours = 0;
	int fives = 0;
	int sixes = 0;
	bool legal = false;
	cout << "Welcome to Dice Poker\n";
	for (int j = 0; j < 3; j++) {//loop three times for game
		ones = 0;
		twos = 0;
		threes = 0;
		fours = 0;
		fives = 0;
		sixes = 0;
		if (j == 0) {//different sayings each time
			cout << "These are your first die\n";
		}else if (j == 1) {
			cout << "These are your second die\n";
		}else if(j == 2) {
			cout << "These are your final die\n";
		}
		for (int i = 0; i < 5; i++) {//roll/reroll dice
			if (hold[i] == 1) {
				die[i] = rand() % 6 + 1;
			}
			cout << die[i] << " ";
			if (die[i] == 1) {//count each
				ones++;
			}
			else if (die[i] == 2) {
				twos++;
			}
			else if (die[i] == 3) {
				threes++;
			}
			else if (die[i] == 4) {
				fours++;
			}
			else if (die[i] == 5) {
				fives++;
			}
			else if (die[i] == 6) {
				sixes++;
			}
		}
		cout << endl;
		wins(ones, twos, threes, fours, fives, sixes);//check combos
		for(;;) {
			if (fivekind == true) { cout << "Press 1 to end this round with a 5 of a kind\n"; }//output action
			if (fourkind == true) { cout << "Press 2 to end this round with a 4 of a kind\n"; }
			if (fullhouse == true) { cout << "Press 3 to end this round with a fullhouse\n"; }
			if (threekind == true) { cout << "Press 4 to end this round with a 3 of a kind\n"; }
			if (twopairs == true) { cout << "Press 5 to end this round with 2 pairs\n"; }
			if (onepair == true) { cout << "Press 6 to end this round with a pair\n"; }
			if (straight == true) { cout << "Press 7 to end this round with a straight\n"; }
			if (j < 2) {
				cout << "To roll again enter a 0\n";//reroll
			}
			cin >> move;//pick your move end or go
			if (move == 0) {
				break;
			}if (move == 1 && fivekind == true) {
				break;
			}if (move == 2 && fourkind == true) {
				break;
			}if (move == 3 && fullhouse == true) {
				break;
			}if (move == 4 && threekind == true) {
				break;
			}if (move == 5 && twopairs == true) {
				break;
			}if (move == 6 && onepair == true) {
				break;
			}if (move == 7 && straight == true) {
				break;
			}
		}
		if (move == 0 && j < 2) {//go again
			cout << "Separated by spaces. To hold a die enter a 0 in its position to reroll put a 1 in its position. (1 0 1 1 0)\n";
			cin >> hold[0] >> hold[1] >> hold[2] >> hold[3] >> hold[4];
		}
		else {//endgame
			break;
		}
	}
	if (move == 1) {//5kind
		points = 50;
		cout << "You have " << points << " points for this round\n";
	}
	else if (move == 2) {//4kind
		points = ones * 1 + twos * 2 + threes * 3 + fours * 4 + fives * 5 + sixes * 6 + 10;
		cout << "You have " << points << " points for this round\n";
	}else if (move == 3){//fullhouse
		points = 25;
		cout << "You have " << points << " points for this round\n";
	}else if (move == 4) {//threekind
		points = ones * 1 + twos * 2 + threes * 3 + fours * 4 + fives * 5 + sixes * 6;
		cout << "You have " << points << " points for this round\n";
	}else if (move == 5) {//twopairs
		points = 15;
		cout << "You have " << points << " points for this round\n";
	}else if (move == 6) {//pair
		points = 10;
		cout << "You have " << points << " points for this round\n";
	}
	else if (move == 7) {//threekind
		points = 40;
		cout << "You have " << points << " points for this round\n";
	}
	system("pause");
	return 0;
}