/*
Name: Rishit Patel
Date: May 1, 2019
Description: Chapter 3 In Class
*/

#include<iostream>
using namespace std;

int main() {
	int hoursGone;
	const int MANY_HOURS = 6;
	char haveYard;
	int sizeOfYardInSqFeet;
	const int SMALL_YARD = 400;
	const int LARGE_YARD = 2500;

	cout << "On average, how many hours are you gone from home each day? ";
	cin >> hoursGone;
	if (hoursGone > MANY_HOURS)
		cout << "You should consider a cat" << endl;
	else{
		cout << "Do you have a fenced yard? Y or N ";
		cin >> haveYard;
		cout << "You can consider a dog, ";
		if (haveYard == 'N' || haveYard == 'n')
			cout << "but a very small breed, " << "such as a Chihuahua" << endl;
		else{
			cout << "but you can consider a larger breed" << endl;
			cout << "What is the size of your yard " << "in square feet? ";
			cin >> sizeOfYardInSqFeet;
			if (sizeOfYardInSqFeet <= SMALL_YARD)
				cout << "Consider a Schnauzer" << endl;
			else if (sizeOfYardInSqFeet <= LARGE_YARD)
					cout << "Consider a Golden or " << "Labrador Retriever" << endl;
				else
					cout << "You can consider a Great Dane" << endl;
		}
	}
	return 0;
}