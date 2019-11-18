/*
Author: Rishit Patel
Date: May 21, 2019
Description: Chapter 9 You do it
*/
#include<iostream>
#include<string>
using namespace std;

class SalesOffice {
	friend ostream& operator<<(ostream&, SalesOffice);
private:
	string officeName;
	double sales;
public:
	SalesOffice(string, double);
	double operator/(SalesOffice);
};

SalesOffice::SalesOffice(string office, double salesAmt) {
	officeName = office;
	sales = salesAmt;
}

double SalesOffice::operator/(SalesOffice office) {
	double ratio;
	ratio = sales / office.sales;
	return ratio;
}

ostream& operator<<(ostream& out, SalesOffice office) {
	out << "Office name: " << office.officeName << "\nSales: $" << office.sales << endl;
	return out;
}

void main() {
	SalesOffice north("North", 2454.88);
	SalesOffice south("South", 2830.92);
	double ratio;
	ratio = north / south;
	cout << "The North Office has " << (ratio * 100) << "% of the sales of South Office" << endl;
	cout << north << south;
}