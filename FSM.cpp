#include <iostream>
#include <time.h>

using namespace std;
int health = 10;
int steps = 0;

int critical() {//dying prog 1
	int chance = rand() % 100 + 1;
	cout << "You have lost all HP's. Welcome to the recovery zone\n";
	cin.get();
	if (chance <= 30) {//dying and got lucky
		cout << "You have recovered. Congrats\n";
		health = 10;
		cout << "Your health is at " << health << " points\n";
		steps++;
		cin.get();
		return 4; //to forage
	}
	else {//life sucks you died
		cout << "Your game has come to an end.\nYou made it " << steps << " steps before dying.\n";
		cin.get();
		return 0;// dead
	}
}
int wander() { //prog 2
	int chance = rand() % 100 + 1;//find home??
	cout << "Will you find home?\n";
	cin.get();
	if (chance <= 55) {//no home sad ant
		cout << "Unfortunately you did not find home. You will continue searching\n";
		health--;
		cout << "Your health is at " << health << " points\n";
		steps++;
		cin.get();
		if (health == 0) {
			return 1;
		}
		return 2;//to wander
	}
	else {//found home
		cout << "Woohoo. You found your house. But now you are thirsty\n";
		cout << "Your health is at " << health << " points\n";
		steps++;
		cin.get();
		return 3; // to thirsty
	}
}
int thirsty() { //prog 3 
	int chance = rand() % 100 + 1;//find water??
	cout << "Will you find something while searching for water\n";
	cin.get();
	if (chance <= 40) {//found something
		cout << "You found something. Is it water or poison\n";
		cin.get();
		int chance1 = rand() % 100 + 1;
		if (chance1 <= 90) {//found water
			cout << "Congrats you found water!\n";
			if (health <= 8) {//adjust health
				health++;
				health++;
			}
			else if (health == 9) {//adjust health
				health++;
			}
			cout << "Your health is at " << health << " points\n";
			steps++;
			cin.get();
			return 4;//to forage
		}
		else {//found poison
			cout << "Welp. You found poison.\n";
			health = 0;
			cout << "Your health is at " << health << " points\n";
			steps++;
			cin.get();
			return 1; // to critical
		}
	}
	else {//found nothing while thirsty
		cout << "You found nothing. You will search again\n";
		health--;
		cout << "Your health is at " << health << " points\n";
		steps++;
		if (health == 0) {
			return 1;
		}
		cin.get();
		return 3; // to thirsty
	}
}
int forage() { //prog 4
	int chance = rand() % 100 + 1;//find something??
	cout << "You are foraging. Will you find something?\n";
	cin.get();
	if (chance <= 60) {//found!!
		chance = rand() % 100 + 1;//food or poison
		cout << "Congrats you found something. Is it poison or food. Continue to find out\n";
		cin.get();
		if (chance <= 90) {//found food!!
			cout << "Congrats you found food.\n";
			if (health <= 9) {//adjust health
				health++;
			}
			cout << "Your health is at " << health << " points\n";
			cin.get();
			steps++;
			return 2;//to wander
		}
		else {//poison lmao
			cout << "Unfortunately you found poison\n";
			health = 0;
			cout << "Your health is at " << health << " points\n";
			steps++;
			cin.get();
			return 1;//to critical
		}
	}
	else {//found nothing
		cout << "You found nothing. You will continue searching\n";
		health--;
		cout << "Your health is at " << health << " points\n";
		cin.get();
		if (health == 0) {
			return 1;
		}
		return 4;;//to forage
	}
}

int main() {
	srand(time(NULL));
	cout << "Welcome to the FSM. To play simply press the enter button until you DIE!";
	cin.get();
	int move = forage();
	for (;;) {
		if (move == 1) {//critical
			move = critical();
		}
		else if (move == 2) {//wander
			move = wander();
		}
		else if (move == 3) {//thirsty
			move = thirsty();
		}
		else if (move == 4) {//forage
			move = forage();
		}
	}
	system("pause");
	return 0;
}