/*
Name: Rishit Patel
Date: April 30, 2019
Description: arithmatic opertations
*/

#include<iostream>

using namespace std;

int main() {
	int a = 2, b = 4, c = 10, intResult;
	double d = 2.0, e = 4.4, f = 12.8, doubleResult;
	float g = 2.0f, h = 4.4f, i = 12.8f, floatResult;
	intResult = a + b;
	cout << intResult << endl;

	intResult = a * b;
	cout << intResult << endl;

	intResult = c / a;
	cout << intResult << endl;

	intResult = c / b;
	cout << intResult << endl;

	cout << "Here are some floats" << endl;

	floatResult = g / a;
	cout << floatResult << endl;

	floatResult = h / g;
	cout << floatResult << endl;

	doubleResult = a * d;
	cout << doubleResult << endl;

	doubleResult = f / a;
	cout << doubleResult << endl;

	doubleResult = e + h;
	cout << doubleResult << endl;

	return 0;
}
