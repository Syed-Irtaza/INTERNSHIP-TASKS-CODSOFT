#include<Windows.h>
#include <iostream>
#include<conio.h>
using namespace std;
//structure to perform arithmatic action on our own type
struct Cal {
    double add, sub, mult, div;
};
//Prototypes of all functions
void Ops();
double Addition();
double Substraction();
double Multiply();
double Division();
//function which will drive or run the whole program
void Driver() {
    std::cout << "_________          .__                  .__            __                  " << std::endl;
    std::cout << "\\_   ___ \\ _____   |  |    ____   __ __ |  |  _____  _/  |_  ____ _______  " << std::endl;
    std::cout << " /    \\  \\/ \\__  \\  |  |  _/ ___\\ |  |  \\|  |  \\__  \\ \\   __\\/  _ \\\\ _  __ \\ " << std::endl;
    std::cout << " \\     \\____ / __ \\_|  |__\\  \\___ |  |  /|  |__ / __ \\_|  | (  <_> )|  | \\/ " << std::endl;
    std::cout << "  \\______  /(____  /|____/ \\___  >|____/ |____/(____  /|__|  \\____/ |__|    " << std::endl;
    std::cout << "         \\/      \\/            \\/                   \\/                      " << std::endl;
    cout << "\n\n\t\t\t\tPress any key to proceed to Main Menu of our Calculator...";
    _getch();
    Ops();
}
//This function will display the option of simple calculator which can be performed on Numbers
void Ops() {
    system("cls");
    int ch, atp = 1;
    bool F = true;
    cout << "\n\n\t\t\t\t\t||||||||||-----MAIN MENU-----|||||||||||" << endl;
    cout << "\n\t\t\t\t\t\t1. Addition.\n\t\t\t\t\t\t2. Substraction.\n\t\t\t\t\t\t3. Multiplication.\n\t\t\t\t\t\t4. Division" << endl;
    cout << "\n\n\t\t\t\t\tChoose Which Operation You Want To Perform.";
    while (F) {
        cin >> ch;
        if (ch == 1) {
            Addition();
            F = false;
        }
        else if (ch == 2) {
            Substraction();
            F = false;

        }
        else if (ch == 3) {
            Multiply();
            F = false;

        }
        else if (ch == 4) {
            Division();
            F = false;

        }
        else if (ch > 4 || ch < 0) {
            atp++;
            cout << "\n\n\t\t\t\t\tINVALID INPUT .. Enter (1-4)" << endl;
        }
        if (atp > 3)
        {
            cout << "\n\n\t\t\t\t\tYou ran out of your attempts----TRY AGAIN AFTER SOME TIME" << endl;
            Sleep(3000);
            system("cls");
            Ops();
        }
    }
}
//This Function will add the numbers
double Addition() {
    Cal a, b;
    cout << "\n\n\t\t\t\t\tEnter Number1: ";
    cin >> a.add;
    cout << "\n\n\t\t\t\t\tEnter Number2: ";
    cin >> b.add;
    cout << "\n\n\t\t\t\t\tSUM OF NUMBER#1 " << a.add << " and NUMBER#2 " << b.add << " is " << a.add + b.add << endl;
    cout << "\n\n\t\t\t\tPress any key to proceed...";
    _getch();
    system("cls");
    cout << "\n\n\t\t\t\t\tWANT TO ADD MORE NUMBERS (Y/N) or M to go Main Menu ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        Addition();
    else if (ch == 'n' || ch == 'N')
        cout << "\n\n\t\t\t\t\tTHANK YOU :) " << endl;
    else if (ch == 'm' || ch == 'M')
        Ops();
    return 1;
}
//This Function will substracts the number
double Substraction() {
    Cal a, b;
    cout << "\n\n\t\t\t\t\tEnter Number1: ";
    cin >> a.sub;
    cout << "\n\n\t\t\t\t\tEnter Number2: ";
    cin >> b.sub;
    cout << "\n\n\t\t\t\t\tSUBTRACTION OF NUMBER#1 " << a.sub << " and NUMBER#2 " << b.sub << " is " << a.sub - b.sub << endl;
    cout << "\n\n\t\t\t\tPress any key to proceed...";
    _getch();
    system("cls");
    cout << "\n\n\t\t\t\t\tWANT TO SUBTRACT MORE NUMBERS (Y/N) or M to go Main Menu ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        Substraction();
    else if (ch == 'n' || ch == 'N')
        cout << "\n\n\t\t\t\t\tTHANK YOU :) " << endl;
    else if (ch == 'm' || ch == 'M')
        Ops();
    return 1;

}
//This Function will multiply the numbers
double Multiply() {
    Cal a, b;
    cout << "\n\n\t\t\t\t\tEnter Number1: ";
    cin >> a.mult;
    cout << "\n\n\t\t\t\t\tEnter Number2: ";
    cin >> b.mult;
    cout << "\n\n\t\t\t\t\tMULTIPLICATION OF NUMBER#1 " << a.mult << " and NUMBER#2 " << b.mult << " is " << a.mult * b.mult << endl;
    cout << "\n\n\t\t\t\tPress any key to proceed...";
    _getch();
    system("cls");
    cout << "\n\n\t\t\t\t\tWANT TO MULTIPLY MORE NUMBERS (Y/N) or M to go Main Menu ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        Multiply();
    else if (ch == 'n' || ch == 'N')
        cout << "\n\n\t\t\t\t\tTHANK YOU :) " << endl;
    else if (ch == 'm' || ch == 'M')
        Ops();
    return 1;

}
//This Program will Divide the number
double Division() {
    Cal a, b;
    cout << "\n\n\t\t\t\t\tEnter Number1: ";
    cin >> a.div;
    cout << "\n\n\t\t\t\t\tEnter Number2: ";
    cin >> b.div;
    cout << "\n\n\t\t\t\t\tSUM OF NUMBER#1 " << a.div << " and NUMBER#2 " << b.div << " is " << a.div / b.div << endl;
    cout << "\n\n\t\t\t\tPress any key to proceed...";
    _getch();
    system("cls");
    cout << "\n\n\t\t\t\t\tWANT TO DIVIDE MORE NUMBERS (Y/N) or M to go Main Menu ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        Division();
    else if (ch == 'n' || ch == 'N')
        cout << "\n\n\t\t\t\t\tTHANK YOU :) " << endl;
    else if (ch == 'm' || ch == 'M')
        Ops();
    return 1;

}
//from here the program will starts to run
int main() {
    Driver();
}
