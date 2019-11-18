/*
Author: Rishit Patel
Date: May 7, 2019
Description: Chapter 7 Lab
*/

#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
using namespace std;

class Character {
	string name;
	int lives = 0;
	int age = 0;
	int eyes = 0;
	string color;
	int legs = 0;
public:
	void setAttributes(int, int, int, int);
	void setColor(string);
	void setName(string);
	void display();
};


void Character::setAttributes(int life, int ag, int eye, int leg) {
	lives = life;
	age = ag;
	eyes = eye;
	legs = leg;
}

void Character::setColor(string col) {
	this->color = col;
}

void Character::setName(string nm) {
	this->name = nm;
}

void Character::display() {
	cout << "Name: " << name << endl;
	cout << "Color: " << color << endl;
	cout << "Attributes:" << endl;
	cout << "life: " << lives << endl;
	cout << "age: " << age << endl;
	cout << "eyes: " << eyes << endl;
	cout << "legs: " << legs << endl;
}

int main() {
	Character a;
	string name, color;
	int i;
	int randLife;
	int randAge;
	int randLegs;
	int randEyes;

	for (i = 0; i < 2; i++) {
		srand((unsigned)time(NULL));
		randLife = rand() % 10 + 1;
		randAge = rand() % 100 + 1;
		randEyes = rand() % 10 + 1;
		randLegs = rand() % 12 + 1;
		cout << "Enter character name: ";
		cin >> name;
		cout << "Enter color: ";
		cin >> color;
		a.setAttributes(randLife, randAge, randEyes, randLegs);
		a.setName(name);
		a.setColor(color);
		a.display();
	}
}
