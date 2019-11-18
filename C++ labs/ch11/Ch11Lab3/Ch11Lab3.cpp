/*
Author: Rishit Patel
Date: May 22, 2019
Description: Chapter 11 lab - Exercise 3
*/

#include<iostream>
#include<string>
using namespace std;
class Homework {
	friend ostream& operator<<(ostream&, Homework);
private:
	string name, assignment;
	int minutes;
public:
	Homework();
	Homework(string, string, int);
	void setValues(string, string, int);
	void display();
	Homework operator+(Homework);
};

Homework::Homework() {
	name = "one";
	assignment = "ONE";
	minutes = 5;
}

Homework::Homework(string nm, string asn, int mins) {
	name = nm;
	assignment = asn;
	minutes = mins;
}
void Homework::setValues(string nm, string asn, int mins) {
	name = nm;
	assignment = asn;
	minutes = mins;
}

void Homework::display() {
	cout << "Class name: " << name << endl;
	cout << "Assignment: " << assignment << endl;
	cout << "Minutes predicted: " << minutes << endl;
}

ostream& operator<<(ostream& out, Homework hw) {
	out << "Class name: " << hw.name << endl;
	out << "Assignment: " << hw.assignment << endl;
	out << "Minutes predicted: " << hw.minutes << endl;
	return out;
}

Homework Homework::operator+(Homework hw) {
	Homework sum("Summary", "Summary" , this->minutes + hw.minutes);
	return sum;
}

template <class T>
T adding(T val1, T val2) {
	T sum;
	sum = val1 + val2;
	return sum;
}

int main() {
	Homework a("One", "first 1", 6);
	Homework b("Two", "second", 10);
	cout << "ints: " << adding<int>(5, 6) << endl;
	cout << "double: " << adding <double> (52.2, 61.2) << endl;
	cout << "adding class: " << endl;
	cout << adding<Homework>(a, b);
	return 0;
}