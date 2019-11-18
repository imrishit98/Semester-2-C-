/*
Name: Rishit Patel
Date: April 30, 2019
Description: increament - decreament 
*/

#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	double x, y, z;

	a = 13;
	b = 4;
	x = 3.3;
	y = 15.78;

	c = a + b;
	cout << "a + b is " << c << endl;

	z = x + y;
	cout << "x + y is " << z << endl;

	c = a / b;
	cout << "a / b is " << c << endl;

	c = a % b;
	cout << "a % b is " << c << endl;

	a = 2;
	b = a++;
	cout << "a is " << a << " and b is " << b << endl;
	c = ++a;
	cout << "a is " << a << " and c is " << c << endl;

	return 0;
}