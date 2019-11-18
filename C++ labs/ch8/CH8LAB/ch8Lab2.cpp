/*
Author: Rishit Patel
Date: May 8, 2019
Description: Chapter 8 lab
*/
#include<iostream>
#include<string>
using namespace std;
class Car {
private:
	static int count;
public:
	Car();
	~Car();
};

int Car::count = 0;

Car::Car() {
	count += 1;
	cout << count << "Car object exists" << endl;
}

Car::~Car() {
	count -= 1;
	cout << count << "Car object exists" << endl;
}

int main() {
	Car a[5];
	cout << "---" << endl;
	return 0;
}