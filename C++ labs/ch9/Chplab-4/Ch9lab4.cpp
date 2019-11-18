/*
Author: Rishit Patel
Date: May 22, 2019
Description: Chapter 9 lab - Exercise 4
*/

#include<iostream>
#include<string>
using namespace std;

class Job {
	friend ostream& operator<<(ostream&, Job);
	friend istream& operator>>(istream&, Job&);
private:
	int jobNumber, hours, rate;
public:
	Job();
	Job(int, int, int);
	int operator+(Job);
	int operator-(Job);
};
Job::Job() {
	jobNumber = 0;
	hours = 0;
	rate = 0;
}
Job::Job(int jobnum, int hour, int aRate) {
	jobNumber = jobnum;
	hours = hour;
	rate = aRate;
}

istream& operator>>(istream& in, Job& j) {
	cout << "Please enter job number: ";
	in >> j.jobNumber;
	cout << "Please enter job hours: ";
	in >> j.hours;
	cout << "Please enter job rate per hour: ";
	in >> j.rate;
	return in;
}

ostream& operator<<(ostream& out, Job j) {
	out << "Job Number: " << j.jobNumber << endl;
	out << "Job Hours: " << j.hours << endl;
	out << "Job Rate: " << j.rate << endl;
	return out;
}

int Job::operator+(Job j) {
	int totalTime;
	totalTime = this->hours + j.hours;
	return totalTime;
}

int Job::operator-(Job j) {
	int diffTime;
	diffTime = this->hours - j.hours;
	return diffTime;
}

int main() {
	Job a, b;
	cin >> a >> b;
	cout << a << b;
	cout << "Total: " << a + b << endl;
	cout << "Difference: " << a - b << endl;
	return 0;
}