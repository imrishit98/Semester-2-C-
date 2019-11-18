/*
Author: Rishit Patel
Date: May 2, 2019
Description: Chapter 5 Lab
*/
#include<iostream>
using namespace std;

int main() {
	const int R = 21;
	const int C = 41;
	char seatChart[R][C];
	const int SENTINEL = 999;
	int row;
	int column;
	cout << "Enter Seat Row: ";
	cin >> row;
	cout << "Enter Seat Number: ";
	cin >> column;

	do {
		if (seatChart[row][column] == 'X') {
			cout << "seat is already taken\n\n";
		}
		else
			seatChart[row][column] = 'X';
	} while (row != SENTINEL || column != SENTINEL);
}