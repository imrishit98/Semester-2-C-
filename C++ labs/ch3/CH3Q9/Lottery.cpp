/*
Name: Rishit Patel
Date: May 1, 2019
Description: Chapter 3 Lab Lottery App
*/

#include<iostream>
#include<ctime>
using namespace std;

int main() {
	const int DIVISOR = 10;
	int userInput1;
	int userInput2;
	int userInput3;
	int result1;
	int result2;
	int result3;
	int counter{ 0 };
	srand((unsigned)time(NULL));
		result1 = rand() % DIVISOR;
		result2 = rand() % DIVISOR;
		result3 = rand() % DIVISOR;
	cout << "*******************************************" << endl;
	cout << "****************Lottery App****************" << endl;
	cout << "*******************************************" << endl;
	cout << "Guess any random number between 0 to 9(1): ";
	cin >> userInput1;
	cout << "Guess any random number between 0 to 9(2): ";
	cin >> userInput2;
	cout << "Guess any random number between 0 to 9(3): ";
	cin >> userInput3;

	if (result1 == userInput1 || result1 == userInput2 || result1 == userInput3) {
		counter += 1;
	}
	if (result2 == userInput1 || result2 == userInput2 || result2 == userInput3) {
		counter += 1;
	}
	if (result3 == userInput1 || result3 == userInput2 || result3 == userInput3) {
		counter += 1;
	}
	cout << "*******************************************" << endl;
	cout << counter << " Number matches!" << endl;
	cout << "*******************************************" << endl;
	cout << "Winning Numbers: ";
	cout << result1 << " ";
	cout << result2 << " ";
	cout << result3 << " " << endl;
	cout << "*******************************************" << endl;
	cout << "Your Numbers: ";
	cout << userInput1 << " ";
	cout << userInput2 << " ";
	cout << userInput3 << " " << endl;
	cout << "*******************************************" << endl;

	if (result1 == userInput1 && result2 == userInput2 && result3 == userInput3) {
		cout << "You Won $1,000,000!" << endl;
	}
	else if(counter == 1){
		cout << "You Won $10!" << endl;
	}
	else if (counter == 2) {
		cout << "You Won $100!" << endl;
	}
	else if (counter == 3) {
		cout << "You Won $1000!" << endl;
	}
	else {
		cout << "You Won $0, better luck next time!" << endl;
	}
	

	return 0;
}