/*
Author: Rishit Patel
Date: May 1, 2019
Description: Chapter 4 Lab Looping Guessing Game
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	int ranNum, Guess, counter{ 0 };
	srand((unsigned)time(NULL));
	ranNum = rand() % 100 + 1;
	cout << "******************************************" << endl;
	cout << "******** ||Number Guessing Game|| ********" << endl;
	cout << "******************************************" << endl;
	cout << "\n------------------------------------------------------------------\n";
	cout << "Please guess any number between 1 to 100: ";
	cin >> Guess;
	if (Guess <= 1 || Guess >= 100) {
		cout << "Invalid number! Please guess any number between 1 to 100: ";
		cin >> Guess;
	}
		while (ranNum != Guess){
			if (Guess <= 1 || Guess >= 100) {
				cout << "Invalid number! Please guess any number between 1 to 100: ";
				cin >> Guess;
			}
			if (ranNum < Guess) {
				cout << "Your guess " << Guess << " is too high,";
			}
			else if (ranNum > Guess) {
				cout << "Your guess " << Guess << " is too low,";
			}
			cout << " Try again! Guess any number between 1 to 100: ";
			cin >> Guess;
			counter += 1;
		} 
		cout << "*************************************" << endl;
		cout << "***** Congratulations! You won! *****" << endl;
		cout << "*************************************" << endl;
		cout << "You took " << counter + 1 << " Guesses." << endl;
		
	return 0;

}