/*
Name: Rishit Patel
Date: April 30, 2019
Description: PhoneCall Lab Chapter 2
*/

#include<iostream>
using namespace std;

struct PhoneCall {
	double numOfmins;
};

int main() {
	PhoneCall myCallToGrandmaOnSunday;
	cout << "Please enter minutes: ";
	cin >> myCallToGrandmaOnSunday.numOfmins;
	cout << "The cost is: " << myCallToGrandmaOnSunday.numOfmins * 0.10 << "$" << endl;
}