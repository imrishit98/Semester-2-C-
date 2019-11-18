/*
Author: Rishit Patel
Date: May 15, 2019
Description: Chapter 10 Lab
*/

#include<iostream>
#include<string>
using namespace std;

class Painting {
protected:
	string title, artistName;
	int value;
public:
	Painting();
	Painting(string aTitle, string aName, int aVal);
	void display();
};

Painting::Painting() {

}

Painting::Painting(string aTitle, string aName, int aVal = 400) {
	title = aTitle;
	artistName = aName;
	value = aVal;
}


void Painting::display() {
	cout << "Title: " << title << endl;
	cout << "NAME: " << artistName << endl;
	cout << "Value: " << value << "$" << endl;
}

class FamousPaintings : public Painting {
public:
	FamousPaintings(string aTitle, string aName) : Painting(aTitle, aName) {
		value = 25000;
	}
};

int main() {
	int i;
	FamousPaintings a[10];
}
