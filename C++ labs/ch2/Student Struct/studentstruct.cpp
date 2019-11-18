/*
Name: Rishit Patel
Date: April 30, 2019
Description: Student Struct
*/

#include<iostream>
using namespace std;

struct Student {
	int creditHours;
	double gradePointAverage;
};

int main() {
	Student oneSophomore;
	const int HOURS_REQUIRED_TO_GRADUATE = 120;
	int hoursRemaining;
	cout << "Please enter a student's credit hours ";
	cin >> oneSophomore.creditHours;
	cout << "Please enter the student's grade point average ";
	cin >> oneSophomore.gradePointAverage;
	cout << "The number of credit hours is " << oneSophomore.creditHours << endl;
	cout << "The grade point average is " << oneSophomore.gradePointAverage << endl;
	hoursRemaining = HOURS_REQUIRED_TO_GRADUATE - oneSophomore.creditHours;
	cout << "This student needs " << hoursRemaining << " more credit hours to graduate" << endl;

	return 0;
}