#include<iostream>
using namespace std;

char board[3][3] = {
	{'1' , '2' , '3'},
	{'4' , '5' , '6'},
	{'7' , '8' , '9'} };

int choice;
int row, col;
char turn = 'X';
bool draw = false;

void displayBoard() {
	cout << "\n\n\tTic-Tac-Toe Game\n\n";
	cout << "Player 1 (X) - Player 2 (O)\n\n";
	cout << "     |     |   \n";
	cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << " \n";
	cout << "-----|-----|-----\n";
	cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << " \n";
	cout << "-----|-----|-----\n";
	cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << " \n";
	cout << "     |     |     \n";
}

void playerturn() {
	if (turn == 'X')
		cout << "\nPlayer 1's (X) turn: ";
	else
		cout << "\nPlayer 2's (O) turn: ";
	cin >> choice;

	//Map the user input to the row and column
	switch (choice) {
	case 1: row = 0; col = 0;break;
	case 2: row = 0; col = 1;break;
	case 3: row = 0; col = 2;break;
	case 4: row = 1; col = 0;break;
	case 5: row = 1; col = 1;break;
	case 6: row = 1; col = 2;break;
	case 7: row = 2; col = 0;break;
	case 8: row = 2; col = 1;break;
	case 9: row = 2; col = 2;break;
	default:
		cout << "Invalid move! Try again.";
		playerturn();
		return;
	}
	if (board[row][col] != 'X' && board[row][col] != 'O') {
		board[row][col] = turn;
	}
	else {
		cout << "Box is already filled! Try again";
		playerturn();
	}
}

bool checkWin() {
	//Check row , columns , and diagonals for a win
	for (int i = 0; i < 3; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return true;
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
			return true;
	}
	
	//check diagonal
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return true;
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
		return true;

	return false;
}

bool checkDraw() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] != 'X' && board[i][j] != 'O')
				return false; //There are still moves left
		}
	}
	return true; //No moves left , it's a draw
}

int main()
{
	while (true) {
		displayBoard();
		playerturn();
		
		if (checkWin()) {
			cout << "\nPlayer " << turn << " wins!" << endl;
			break;
		}

		if (checkDraw()) {
			displayBoard();
			cout << "\nGame Over! Its's a draw!" << endl;
			break;
		}

		//Switch player turn
		turn = (turn == 'X') ? 'O' : 'X';
	}
	return 0;
}