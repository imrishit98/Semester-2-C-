/*
Author: Rishit Patel
Date: May 27, 2019
Description: Chapter 12 You Do It
*/

#include<iostream>
#include<string>
using namespace std;

class NonIntegerException : public runtime_error {
private:
	string nonIntegerData;
public:
	NonIntegerException(string);
	string getNonIntegerData();
};

NonIntegerException::NonIntegerException(string s) : runtime_error("Non-integer data") {
	nonIntegerData = s;
}

string NonIntegerException::getNonIntegerData() {
	return nonIntegerData;
}

class OutOfRangeException : public runtime_error {
private:
	int value;
public:
	OutOfRangeException(int);
	int getValue();
};

OutOfRangeException::OutOfRangeException(int val) : runtime_error("Out of range") {
	value = val;
}
int OutOfRangeException::getValue() {
	return value;
}

int getDoubleDigitInt(string prompt)
{
	int integer;
	string badData;
	const int HIGH = 99;
	const int LOW = 10;
	cout << prompt;
	if (!(cin >> integer))
	{
		cin.clear();
		cin >> badData;
		NonIntegerException e(badData);
		throw e;
	}
	if (integer < LOW || integer > HIGH)
	{
		OutOfRangeException e(integer);
		throw e;
	}
	return integer;
}

int main() {
	int age;
	const int MAX_AGE = 120;
	try {
		age = getDoubleDigitInt("Enter your age ");
	}
	catch (NonIntegerException e) {
		cout << e.what() << endl;
		cout << "The entered value was " << e.getNonIntegerData() << endl;
		cout << "Age is being set to 0" << endl;
		age = 0;
	}
	catch (OutOfRangeException e) {
		int val = e.getValue();
		cout << e.what() << endl;
		cout << "Entered value is " << e.getValue() << endl;
		if (val <= MAX_AGE)
		{
			cout << "Entered value is being used" << endl;
			age = val;
		}
		else
		{
			cout << "Age is being set to " << MAX_AGE << endl;
			age = MAX_AGE;
		}
	}
	cout << "Age is " << age << endl;
	return 0;
}