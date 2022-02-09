#include <iostream>
#include <math.h>
#include <time.h>
#include <vector>

int intBoard[9] = { 1,2,3,4,5,6,7,8,9 };
int gameBoard[9] = {};
bool gameOver = false;
int depth;

using namespace std;

void win() {//check known combos for win
	if (gameBoard[0] == gameBoard[1] && gameBoard[1] == gameBoard[2] && gameBoard[0] != 0) {
		gameOver = true;
	}
	else if (gameBoard[3] == gameBoard[4] && gameBoard[4] == gameBoard[5] && gameBoard[3] != 0) {
		gameOver = true;
	}
	else if (gameBoard[6] == gameBoard[7] && gameBoard[7] == gameBoard[8] && gameBoard[6] != 0) {
		gameOver = true;
	}
	else if (gameBoard[0] == gameBoard[3] && gameBoard[3] == gameBoard[6] && gameBoard[0] != 0) {
		gameOver = true;
	}
	else if (gameBoard[1] == gameBoard[4] && gameBoard[4] == gameBoard[7] && gameBoard[1] != 0) {
		gameOver = true;
	}
	else if (gameBoard[2] == gameBoard[5] && gameBoard[5] == gameBoard[8] && gameBoard[2] != 0) {
		gameOver = true;
	}
	else if (gameBoard[0] == gameBoard[4] && gameBoard[4] == gameBoard[8] && gameBoard[0] != 0) {
		gameOver = true;
	}
	else if (gameBoard[2] == gameBoard[4] && gameBoard[4] == gameBoard[6] && gameBoard[2] != 0) {
		gameOver = true;
	}
	else {
		gameOver = false;
	}
}

void printboard() {
for (int i = 0; i < 3; i++) {//print board
	for (int j = 0; j < 3; j++) {
		if (gameBoard[i * 3 + j] == 0) {
			cout << "# ";
		}
		else if (gameBoard[i * 3 + j] == 1) {
			cout << "X ";
		}
		else if (gameBoard[i * 3 + j] == 2) {
			cout << "O ";
		}
	}
	cout << endl;
	}
}

int checkmove(int play) {
	if (gameBoard[play] == 0) {//valid
		return 1;
	}
	else if (gameBoard[play] == 1 || gameBoard[play] == 2) {//taken
		return 2;
	}
	else {//whattt
		return 0;
	}
}

void compmove2() {
	for (int i = 0; i < 9; i++) {//loop through the board
		if (gameBoard[i] == 0) {//dont try already taken
			gameBoard[i] = 1;//try w human X
			win();//does it win?
			if (gameOver) {//loss for comp
				break;
			}
			else {

			}
		}
	}
}

int compmove() {
	for (int i = 0; i < 9; i++) {//loop through the board
		if (gameBoard[i] == 0) {//dont try already taken
			gameBoard[i] = 2;
			win();
			if (gameOver) {//win for comp. Probably do move
				break;
			}
			else {
				
			}
		}
	}
}

int main() {
	int move;
	cout << "Welcome to Tic-Tac-Toe. You have no chance of winning. Good luck!\n";
	cout << "Octothorpes represent unused spaces\n";
	cout << "The board has coordinates of\n";
	for (int i = 0; i < 3; i++) {//print coordinates
		for (int j = 0; j < 3; j++) {
			cout << intBoard[i * 3 + j] << " ";
		}
		cout << endl;
	}
	cout << "The computer will go first\n";
	gameBoard[0] = 2;
	for (;;) {//loop till game over
		cout << "The computer is O's. It went\n";
		printboard();
		for (;;) {//valid move?
			cout << "You are X's, Please enter your move:";
			cin >> move;//human move
			if (checkmove(move - 1) == 1) {
				break;
			}
		}
		gameBoard[move - 1] = 1;
		printboard();

		win();//check for win	
		if (gameOver) {//endgame
			break;
		}
	}
	cout << "Game over haha\n";
	cout << endl;
	system("pause");
	return 0;
}