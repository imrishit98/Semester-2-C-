/*
Author: Rishit Patel
Date: May 22, 2019
Description: Chapter 9 lab - Exercise 6
*/

#include<iostream>
#include<string>
using namespace std;

class PhoneCall {
	friend ostream& operator<<(ostream&, PhoneCall);
	friend istream& operator>>(istream&, PhoneCall&);
private:
	int phoneNum;
	double minutes, rate;
public:
	PhoneCall(int, double, double);
	bool operator==(PhoneCall);
};

PhoneCall::PhoneCall(int num = 0, double min = 0.0, double aRate = 0.0) {
	phoneNum = num;
	minutes = min;
	rate = aRate;
}

istream& operator>>(istream& in, PhoneCall& pc) {
	cout << "Please enter phone number: ";
	in >> pc.phoneNum;
	cout << "Please enter phone minutes: ";
	in >> pc.minutes;
	cout << "Please enter phone rate per minute: ";
	in >> pc.rate;
	return in;
}

ostream& operator<<(ostream& out, PhoneCall pc) {
	out << "Phone Number: " << pc.phoneNum << endl;
	out << "Minutes: " << pc.minutes << endl;
	out << "Rate: " << pc.rate << endl;
	return out;
}

bool PhoneCall::operator==(PhoneCall pc) {
		return this->phoneNum == pc.phoneNum;
}

int main() {
	PhoneCall P[10];
	int i;
	for (i = 0; i < 10; i++) {
		cout << "Please enter details for number " << i + 1 << ": " << endl;
		cin >> P[i];
		for (int j = 0; j < i; j++) {
			while (P[i] == P[j]) {
				cout << "Number already exists! Please enter different number: ";
				cin >> P[i];
			}
		}
	}
	return 0;
}