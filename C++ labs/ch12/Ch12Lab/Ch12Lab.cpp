/*
Author: Rishit Patel
Date: May 27, 2019
Description: Chapter 12 Lab
*/

#include<iostream>
#include<string>
using namespace std;

class OutOfRangeException : public out_of_range {
private:
	double value;
	double minval;
	double maxval;
public:
	OutOfRangeException(int);
	int getValue();
};

OutOfRangeException::OutOfRangeException(int val) : runtime_error("Out of range") {
	value = val;
}

int OutOfRangeException::getValue() {
	return value;
}

class Meal {
	friend ostream& operator<<(ostream&, Meal);
private:
	string name;
	double price;
public:
	void askUser();
	double getPrice();
};

void Meal::askUser() {
	const double MAXVAL = 29.99;
	const double MINVAL = 5.00;
	cout << "Please enter meal name: ";
	cin >> name;
	cout << "Please enter price: ";
	cin >> price;
	if (price < MINVAL || price > MAXVAL) {
		OutOfRangeException e(price);
		throw e;
	}
}

double Meal::getPrice() {
	return price;
}

ostream& operator<<(ostream& out, Meal m) {
	out << "Meal name: " << m.name << endl;
	out << "Meal price: " << m.price << endl;
}

class EntertainmentAct {
	friend ostream& operator<<(ostream&, EntertainmentAct);
private:
	string phoneNum;
	double fee;
public:
	void askVal();
	double getFee();
};

void EntertainmentAct::askVal() {
	const double MAX = 3000.00;
	const double MIN = 50.00;
	cout << "Please enter phone number: ";
	cin >> phoneNum;
	cout << "Please enter fee: ";
	cin >> fee;
	if (fee < MIN || fee > MAX) {
		OutOfRangeException e(fee);
		throw e;
	}
}

double EntertainmentAct::getFee() {
	return fee;
}

ostream& operator<<(ostream& out,  EntertainmentAct en) {
	out << "Phone number: " << en.phoneNum << endl;
	out << "Fee: " << en.fee << endl;
}

class Party : public Meal, EntertainmentAct {
	friend ostream& operator<<(ostream&, Party);
private:
	Meal meal;
	EntertainmentAct entertainment;
	int guests;
	double cost = 0;
public:
	Party();
	Party(Meal, EntertainmentAct, int, double);
	double prompt();
};
Party::Party() {
}

Party::Party(Meal aMeal, EntertainmentAct ent, int guest = 0, double aCost = 0) {
	meal = aMeal;
	entertainment = ent;
	guests = guest;
	cost = aCost;
}
double Party::prompt(){
	Meal aMeal;
	EntertainmentAct ent;
	const double THEMAX = 1000.00;
	const double THEMIN = 2.00;

	cout << "Please enter number of guests for the party: ";
	cin >> guests;
	if (guests < THEMIN || guests > THEMAX) {
		OutOfRangeException e(guests);
		throw e;
	}
	aMeal.askUser();
	ent.askVal();
	cost = (aMeal.getPrice * guests) + ent.getFee;
	cout << aMeal << endl;
	cout << ent << endl;
	return guests;
}

ostream& operator<<(ostream& out, Party party) {
	out << "Total no. of guests: " << party.guests << endl;
	out << "Total cost for the party: " << party.cost << endl;
}

int main() {
	const int COUNTER = 5;
	Party aParty;

	for()

}