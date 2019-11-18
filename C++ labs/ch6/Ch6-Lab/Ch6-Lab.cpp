/*
Author: Rishit Patel
Date: May 6, 2019
Description: Chapter 6 Lab
*/
#include<iostream>
using namespace std;

int main() {
	double rate;
	int hours;
	double weekly;
	double getRate();
	int getHours();

	rate = getRate();
	hours = getHours();

	weekly = rate * hours;
	cout << "Weekly pay is $" << weekly << endl;
	return 0;
}
double getRate() {
	double rate;
	cout << "Enter your hourly rate in dollars and cents: ";
	cin >> rate;
	return rate;
}

int getHours() {
	int time;
	cout << "Please enter the hours you worked: " << endl;
	cout << "You must enter a whole number: ";
	cin >> time;
	return time;
}