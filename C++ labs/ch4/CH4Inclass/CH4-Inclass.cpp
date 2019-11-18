/*
Name: Rishit Patel
Date: May 1, 2019
Description: Chapter 4 In Class
*/

#include<iostream>
using namespace std;

struct Client{
	int idNum;
	int numSessions;
	int firstSessionMonth;
	int firstSessionDay;
	int firstSessionYear;
};

int main() {
	Client aClient;
	int count;
	int nextSessionMonth;
	int nextSessionYear;
	const int LOW_NUM = 1000;
	const int HIGH_NUM = 9999;
	const int MAX_SESSIONS = 4;
	const int MONTHS_IN_YEAR = 12;

	cout << "Enter an ID number between " << LOW_NUM << " and " << HIGH_NUM << " inclusive: ";
	cin >> aClient.idNum;

	while (aClient.idNum < LOW_NUM || aClient.idNum > HIGH_NUM) {
		cout << "Invalid ID number!" << endl;
		cout << "Please enter a number from " << LOW_NUM << " through " << HIGH_NUM << ": ";
		cin >> aClient.idNum;
	}
	cout << "Thank you. Your valid ID is " << aClient.idNum << endl;
	cout << "Enter number of sessions client needs: ";
	cin >> aClient.numSessions;

	while (aClient.numSessions > MAX_SESSIONS) {
		cout << "We guarantee that no more than " << MAX_SESSIONS << " will be necessary." << endl;
		cout << "Please re-enter the number of sessions: ";
		cin >> aClient.numSessions;
	}

	cout << "Enter the month of the first session: ";
	cin >> aClient.firstSessionMonth;
	while (aClient.firstSessionMonth > MONTHS_IN_YEAR) {
		cout << "You must enter a valid month: ";
		cin >> aClient.firstSessionMonth;
	}
	cout << "Enter the day of the first session: ";
	cin >> aClient.firstSessionDay;
	cout << "Enter the year of the first session: ";
	cin >> aClient.firstSessionYear;
	cout << "Client #" << aClient.idNum << endl;
	cout << "First session is on the following day: " << 
		 aClient.firstSessionMonth << "/" << aClient.firstSessionDay << "/" << aClient.firstSessionYear << endl;

	for (count = 2, nextSessionMonth = aClient.firstSessionMonth,
		nextSessionYear = aClient.firstSessionYear;
		count <= aClient.numSessions; ++count) {
		nextSessionMonth += 1;
		if (nextSessionMonth > MONTHS_IN_YEAR) {
			nextSessionMonth -= MONTHS_IN_YEAR;
			++nextSessionYear;
		}
		cout << "Session #" << count << " is on: " << 
			 nextSessionMonth << "/" << aClient.firstSessionDay << "/" << nextSessionYear << endl;
	}
	return 0;
}