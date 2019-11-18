/*
Author: Rishit Patel
Date: May 22, 2019
Description: Chapter 11 YouDoIt
*/

#include<iostream>
#include<string>
using namespace std;
class Classroom {
	friend ostream& operator<<(ostream&, Classroom);
private:
	string teacher;
	int numStudents;
public:
	Classroom(string, int);
	Classroom operator+(int);
};

Classroom::Classroom(string teacherName, int students) {
	teacher = teacherName;
	numStudents = students;
}

Classroom Classroom::operator+(int num) {
	numStudents += num;
	return *this;
}

ostream& operator<<(ostream& out, Classroom c) {
	out << "Teacher: " << c.teacher << "\tNumber of students: " << c.numStudents << endl;
	return out;
}

template <class T>

T increase(T item, int num) {
	item = item + num;
	return item;
}

int main() {
	int i = 10;
	double d = 11.1;
	char c = 'a';
	Classroom e208("Jim", 7);

	cout << increase(i, 3) << endl;
	cout << increase(d, 3) << endl;
	cout << increase(c, 3) << endl;
	cout << increase(e208, 14) << endl;
	return 0;
}