#include<iostream>
#include<time.h>
#include<conio.h>
#include<Windows.h>
#include<cstdlib>
using namespace std;
int main() {
	std::cout << "  _   _                       _                           " << std::endl;
	std::cout << " | \\ | |                     | |                          " << std::endl;
	std::cout << " |  \\| |  _   _   _ __ ___   | |__     ___   _ __         " << std::endl;
	std::cout << " | . ` | | | | | | '_ ` _ \\  | '_ \\   / _ \\ | '__|        " << std::endl;
	std::cout << " | |\\  | | |_| | | | | | | | | |_) | |  __/ | |           " << std::endl;
	std::cout << " |_|_\\_|_ \\__,_| |_| |_| |_| |_.__/   \\___| |_|           " << std::endl;
	std::cout << "   / ____|                            (_)                 " << std::endl;
	std::cout << "  | |  __   _   _    ___   ___   ___   _   _ __     __ _  " << std::endl;
	std::cout << "  | | |_ | | | | |  / _ \\ / __| / __| | | | '_ \\   / _` | " << std::endl;
	std::cout << "  | |__| | | |_| | |  __/ \\__ \\ \\__ \\ | | | | | | | (_| | " << std::endl;
	std::cout << "   \\_____|  \\__,_|  \\___| |___/ |___/ |_| |_| |_|  \\__, | " << std::endl;
	std::cout << "   / ____|                                          __/ | " << std::endl;
	std::cout << "  | |  __    __ _   _ __ ___     ___               |___/  " << std::endl;
	std::cout << "  | | |_ |  / _` | | '_ ` _ \\   / _ \\                     " << std::endl;
	std::cout << "  | |__| | | (_| | | | | | | | |  __/                     " << std::endl;
	std::cout << "   \\_____|  \\__,_| |_| |_| |_|  \\___|                     " << std::endl;
	std::cout << "                                                           " << std::endl;
	std::cout << "                                                           " << std::endl;
	cout << "\n\n\t\t\tPress any key to continue...";
	_getch();
	srand(time(0));//srand function to seed or assign an initial value to generate unique random number each time according to the time of our PC.
	int max, min;
	char ch;
here:
	//greetings to the player and ask the player if the player want to play or not 
	//after that player have to enter an appropriate range (max-min) in which the player will make the guesses
	cout << "\n\n\t\tWELCOME TO OUR NUMBER GUESSING GAME!.." << endl;
	cout << "\n\n\t\tPLAY GAME (Y/N)..";
	cin >> ch;
	if (ch == 'Y' || ch == 'y') {
		cout << "\n\n\t\tEnter the maximum range of a number ";
		cin >> max;
		cout << "\n\n\t\tEnter the minimum range of a number ";
		cin >> min;
	}
	else if (ch == 'n' || ch == 'N') {
		cout << "\n\n\t\tBYE___BYE.. :) " << endl;
	}
	else {
		cout << "\n\n\t\tWrong Input Try Again" << endl;
		goto here;
	}
	//conditions to check:
	//1. number must not less than zero
	//2. maximum number must be greater than minimum number
	//3. maximum range and minimum range must be different from each other
	bool flag1 = true;
	while (flag1) {
		if ((max < 0) || (min < 0)) {
			cout << "\n\n\t\tYOU CANNOT ENTER NEGATIVE RANGES " << endl;
			cout << "\n\n\t\tEnter the maximum range of a number ";
			cin >> max;
			cout << "\n\n\t\tEnter the minimum range of a number ";
			cin >> min;
		}
		else if (max < min) {
			cout << "\n\n\t\tYOU ENTER MAXIMUM RANGE IS SMALLER THAN MINIMUM RANGE " << endl;
			cout << "\n\n\t\tEnter the maximum range of a number ";
			cin >> max;
		}
		else if (max == min) {
			cout << "\n\n\t\tYOU ENTERED SAME RANGES FOR MAXIMUN AND MINIMUM " << endl;
			cout << "\n\n\t\tEnter the maximum range of a number ";
			cin >> max;
			cout << "\n\n\t\tEnter the minimum range of a number ";
			cin >> min;
		}
		else
			flag1 = false;
	}
	int rand_Num = rand() % (max - min + 1) + min;//generate random number between maximum and minimum ranges
	//Now player will make guesses and the program will tell the player either the guess of the player is greater,less or eqaul to the random number
	bool flag = true;
	int guess,atmpts=0;
	while (flag) {
		cout << "\n\n\t\tMake a Guess ";
		cin >> guess;
		if (guess == rand_Num) {
			cout << "\n\n\t\tCONGRATULATIONS YOU NAILED IT:)." << endl;
			flag = false;
		}
		else if (guess > rand_Num)
			cout << "\n\n\t\tYOU GUESSED TOO HIGH COME DOWN! " << endl;
		else if (guess < rand_Num)
			cout << "\n\n\t\tYOU GUESSED TOO LOW COME UP! " << endl;
		else
			cout << "\n\n\t\tINVALID GUESSED___TRY AGAIN" << endl;
		atmpts++;
	}
	//tell the player in how many attempts player wins 
	cout << "\n\n\t\t\tPress any key to continue...";
	_getch();
	system("cls");
	cout << "\n\n\t\tYOU GUESSED THE RANDOM NUMBER "<<rand_Num<< " IN " << atmpts << " ATEMPTS" << endl;
	//Asking the users if they want to  play again 
	char choice;
	here2:
	cout << "\n\t\tWhat to Play Again (Y or N) ... ";
	cin >> choice;
	if (choice == 'y' || choice == 'Y') {
		main();
	}
	else if (choice == 'n' || choice == 'N') {
		cout << "\t\t\t\t\tSAYONARA" << endl;
		Sleep(2000);
		system("cls");
	}
	else {
		cout << "\n\t\tWrong Input..." << endl;
		goto here2;
	}
}