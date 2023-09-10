#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
//Class to display interference of TicTacToe
class Interference {
protected:
	char Board[3][3] = { {'1','2','3'}, {'4','5','6'},{'7','8','9'} };
public:
	//function to display Board for TicTacToe
	void DisplayBoard() {
		system("cls");
		std::cout << "\t\t" << " _______   _____    _____            _______               _____            _______    ____    ______ " << std::endl;
		std::cout << "\t\t" << "|__   __| |_   _|  / ____|          |__   __|     /\\      / ____|          |__   __|  / __ \\  |  ____|" << std::endl;
		std::cout << "\t\t" << "   | |      | |   | |       ______     | |       /  \\    | |       ______     | |    | |  | | | |__   " << std::endl;
		std::cout << "\t\t" << "   | |      | |   | |      |______|    | |      / /\\ \\   | |      |______|    | |    | |  | | |  __|  " << std::endl;
		std::cout << "\t\t" << "   | |     _| |_  | |____              | |     / ____ \\  | |____              | |    | |__| | | |____ " << std::endl;
		std::cout << "\t\t" << "   |_|    |_____|  \\_____|             |_|    /_/    \\_\\  \\_____|             |_|     \\____/  |______|" << std::endl;
		cout << endl << endl;
		cout << "\t\t\t\t\t" << "    |    |    " << endl;
		cout << "\t\t\t\t\t" << Board[0][0] << "   | " << Board[0][1] << "  | " << Board[0][2] << endl;
		cout << "\t\t\t\t\t" << "____|____|____" << endl;
		cout << "\t\t\t\t\t" << "    |    |    " << endl;
		cout << "\t\t\t\t\t" << Board[1][0] << "   | " << Board[1][1] << "  | " << Board[1][2] << endl;
		cout << "\t\t\t\t\t" << "____|____|____" << endl;
		cout << "\t\t\t\t\t" << "    |    |    " << endl;
		cout << "\t\t\t\t\t" << Board[2][0] << "   | " << Board[2][1] << "  | " << Board[2][2] << endl;
		cout << "\t\t\t\t\t" << "____|____|____" << endl;
	}
};
//Class To Interact with the players of TicTacToe
class Player:public Interference {
protected:
	string *PlayerName;
	char MarkingSymbol[2];
	char ShuffleTheMove;
public:
	Player() {
		PlayerName = nullptr;
	}
	//function to display information which will be gathered from the players and give marking symbols of their on choice in which one player will select the marking symbol and the other symbol will be automatically assigned to second player 
	void players() {
		int choice;
		PlayerName = new string[2];
		cout << "\n\n\t\t\t\tHi! Players of Tic-Tac-Toe...Kindly Enter Your Player Names..." << endl;
		cout << "\n\t\t\t\tEnter Player 1 KIndly Enter Your Player Name: ";
		getline(cin, PlayerName[0]);
		cout << "\n\t\t\t\tEnter Player 2 KIndly Enter Your Player Name: ";
		getline(cin,PlayerName[1]);
		system("cls");
		cout << "\n\t\t\t\tWelcome " << PlayerName[0] << " and " << PlayerName[1] << " to our game:)" << endl;
		cout << "\n\t\t\t\tPress any key to proceed...";
		_getch();
		system("cls");
		cout << "\n\t\t\t\tNow " << PlayerName[0] << " and " << PlayerName[1] << " you both have to select your Board's marking Symbol...it can be 'X' or 'O' \n\n\t\t\t\t Press 1 to select 'X' as your Boarding marking Symbol \n\n\t\t\t\t Press 2 to select 'O' as your Boarding marking Symbol  ";
		cin >> choice;
		system("cls");
		if (choice == 1) {
			cout << "\n\t\t\t\t" << PlayerName[0] << " your marking Symbol is 'X' " << endl;
			MarkingSymbol[0] = 'X';
		}
		else if (choice == 2) {
			cout << "\n\t\t\t\t" << PlayerName[0] << " your marking Symbol is 'O' " << endl;
			MarkingSymbol[0] = 'O';
		}
		if (MarkingSymbol[0] == 'X') {
			cout << "\n\t\t\t\t" << PlayerName[1] << " your marking Symbol is 'O' " << endl;
			MarkingSymbol[1] = 'O';
		}
		else if (MarkingSymbol[0] == 'O') {
			cout << "\n\t\t\t\t" << PlayerName[1] << " your marking Symbol is 'X' " << endl;
			MarkingSymbol[1] = 'X';
		}
		cout << "\n\t\t\t\tPress any key to proceed...";
		_getch();
		system("cls");
		cout << "\n\t\t\t\tMr. " << PlayerName[0] << " your marking Symbol is " << MarkingSymbol[0] << endl;
		cout << "\n\t\t\t\tMr. " << PlayerName[1] << " your marking Symbol is " << MarkingSymbol[1] << endl;
		cout << "\n\t\t\t\tPress any key to proceed...";
		_getch();
		system("cls");
		cout << "\n\t\t\t\tWho want to go first? \n\t\t\t\t1. " << PlayerName[0] << "\n\t\t\t\t2. " << PlayerName[1] << " ";
		cin >> choice;
		if (choice == 1) {
			cout << "\n\t\t\t\t" << PlayerName[0] << " You go first and your board's marking Symbol is " << MarkingSymbol[0] << endl;
			ShuffleTheMove = MarkingSymbol[0];
		}
		else if (choice == 2) {
			cout << "\n\t\t\t\t" << PlayerName[1] << " You go first and your board's marking Symbol is " << MarkingSymbol[1] << endl;
			ShuffleTheMove = MarkingSymbol[1];
		}
		cout << "\n\t\t\t\tPress any key to proceed...";
		_getch();
	}
	//This will make moves on the board
	void MakeMove() {
		int choice, row, column;
	here:
		//Displaying the name of the players who is currently playing or going make move on the board and the players will make a move on board and the mark of the player will be marked on the board according to choice they will make
		if (ShuffleTheMove =='X' && MarkingSymbol[0] == 'X') {
			cout <<"\n\t\t\t\t" << PlayerName[0] << " its your turn and your marking Symbol is " << "X" << " ";
			cin >> choice;
		}
		else if (ShuffleTheMove == 'O' && MarkingSymbol[0] == 'O') {
			cout << "\n\t\t\t\t" << PlayerName[0] << " its your turn and your marking Symbol is " << "O" << " ";
			cin >> choice;
		}
		else if (ShuffleTheMove == 'X' && MarkingSymbol[1] == 'X') {
			cout << "\n\t\t\t\t" << PlayerName[1] << " its your turn and your marking Symbol is " << "X" << " ";
			cin >> choice;
		}
		else if (ShuffleTheMove == 'O' && MarkingSymbol[1] == 'O') {
			cout << "\n\t\t\t\t" << PlayerName[1] << " its your turn and your marking Symbol is " << "O" << " ";
			cin >> choice;
		}
		if (choice == 1) {
			row = 0, column = 0;
		}
		else if (choice == 2) {
			row = 0, column = 1;
		}
		else if (choice == 3) {
			row = 0, column = 2;
		}
		else if (choice == 4) {
			row = 1, column = 0;
		}
		else if (choice == 5) {
			row = 1, column = 1;
		}
		else if (choice == 6) {
			row = 1, column = 2;
		}
		else if (choice == 7) {
			row = 2, column = 0;
		}
		else if (choice == 8) {
			row = 2, column = 1;
		}
		else if (choice == 9) {
			row = 2, column = 2;
		}
		else {
			cout << "\n\t\t\t\tYou entered and invalid place location....Enter between (1-9) " << endl;
			goto here;
		}
		//It will switch turns between the players
		if (ShuffleTheMove == 'X' && Board[row][column] != 'X' && Board[row][column] != 'O') {
			Board[row][column] = 'X';
			ShuffleTheMove = 'O';
		}
		else if (ShuffleTheMove == 'O' && Board[row][column] != 'X' && Board[row][column] != 'O') {
			Board[row][column] = 'O';
			ShuffleTheMove = 'X';
		}
		else {
			cout << "\n\t\t\t\tThis Board location is already filled " << endl;
			MakeMove();
		}
		DisplayBoard();
	}
	//Destructor to delete or for freeing up the memory occupied due object creation and also delete the dynamic memory that is occupied due to the dynamic array named 'PlayerName' 
	 ~Player(){
		delete [] PlayerName;
	}
};
class TicTac : public Player{
public:
	//This function will checks the winning , draw and continuing conditions in the game and return true or false according to the conditions
	bool TicTacRules() {
		//checkingb winning condition in row and columns
		for (int i = 0; i < 3; i++) {
			if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2] || Board[0][i] == Board[1][i] && Board[0][i] == Board[2][i]) {
				return false;
			}
		}
		//checking winning condition in diagonals
		if (Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2] || Board[0][2] == Board[1][1] && Board[0][2] == Board[2][0]) {
			return false;
		}
		//checking the non-emptiness of the board
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if ((Board[i][j] != 'X') && (Board[i][j] != 'O')) {
					return true;
				}
			}
		}
		//display the game over message when game draw and board is filled when nobody wins the match
		cout << "\n\t\t\t\tGAME IS OVER .... GAME IS DRAW .... BOARD IS FILLED :) " << endl;
		return false;
	}
	//This function starts the whole game by calling functions of different classes 
	void Play() {
		players();
		while (TicTacRules()) {
			DisplayBoard();
			MakeMove();
		}
	}
	//Display the name of the winner
	int Winner() {
		if (!TicTacRules()) {
			for (int i = 0; i < 3; i++) {
				if ((Board[i][0] == MarkingSymbol[0] &&  Board[i][0] == MarkingSymbol[0] && Board[i][2]==MarkingSymbol[0]) || (Board[0][i] == MarkingSymbol[0] && Board[1][i] == MarkingSymbol[0] &&  Board[2][i]==MarkingSymbol[0])) {
					cout << "\n\t\t\t\tCongrats " << PlayerName[0] << " you won the game" << endl;
					return 0;
				}
				else if ((Board[i][0] == MarkingSymbol[0] && Board[i][1] == MarkingSymbol[0] && Board[i][0] == MarkingSymbol[0] && Board[i][2] == MarkingSymbol[0]) || (Board[0][i] == MarkingSymbol[0] && Board[1][i] == MarkingSymbol[0] && Board[0][i] == MarkingSymbol[0] && Board[2][i] == MarkingSymbol[0])) {
					cout << "\n\t\t\t\tCongrats " << PlayerName[1] << " you won the game" << endl;
					return 0;
				}
			}
			if ((Board[0][0] == MarkingSymbol[0] && Board[1][1] == MarkingSymbol[0] && Board[2][2]==MarkingSymbol[0]) || (Board[0][2] == MarkingSymbol[0] && Board[1][1]  == MarkingSymbol[0] && Board[2][0]==MarkingSymbol[0])) {
				cout << "\n\t\t\t\tCongrats " << PlayerName[0] << " you won the game" << endl;
			}
			else {
				cout << "\n\t\t\t\tCongrats " << PlayerName[1] << " you won the game" << endl;
			}
		}
	}
	~TicTac() {}
};
void Exit() {
	cout << "\t\t\t\t\tSAYONARA" << endl;
}
int main() {
	system("cls");
	char choice;
	std::cout<<"\t\t" << " _______   _____    _____            _______               _____            _______    ____    ______ " << endl;
	std::cout <<"\t\t" << "|__   __| |_   _|  / ____|          |__   __|     /\\      / ____|          |__   __|  / __ \\  |  ____|" << endl;
	std::cout <<"\t\t" << "   | |      | |   | |       ______     | |       /  \\    | |       ______     | |    | |  | | | |__   " << endl;
	std::cout <<"\t\t" << "   | |      | |   | |      |______|    | |      / /\\ \\   | |      |______|    | |    | |  | | |  __|  " << endl;
	std::cout <<"\t\t" << "   | |     _| |_  | |____              | |     / ____ \\  | |____              | |    | |__| | | |____ " << endl;
	std::cout <<"\t\t" << "   |_|    |_____|  \\_____|             |_|    /_/    \\_\\  \\_____|             |_|     \\____/  |______|"<<endl ;
	cout << "\n\t\t\t\tPress any key to proceed...";
	_getch();
	cout << endl << endl;
	//creating object of class TicTac
	TicTac *t=new TicTac;
	//calling function 'Play' with the reference of TicTac's object t
	t->Play(); 
	t->Winner();
	delete t;
}