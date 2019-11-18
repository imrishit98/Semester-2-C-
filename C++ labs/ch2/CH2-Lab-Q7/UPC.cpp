/*
Name: Rishit Patel
Date: April 30, 2019
Description: UPC Lab Chapter 2
*/

#include<iostream>
using namespace std;
struct UPC {
	int manfCode;
	int productCode;
	int checkDigit;
	int sumManf;
	int sumPcode;
	int sumFirst;
	int sumManf2;
	int sumPcode2;
	int sumSecond;
};
int main() {
	UPC upc;
	cout << "Please enter manufacturer code: ";
	cin >> upc.manfCode;
	cout << "Please enter product code: ";
	cin >> upc.productCode;
	cout << "Please enter check digit: ";
	cin >> upc.checkDigit;
	//a.Sum the second and fourth numbers in the manufacturer code.
	upc.sumManf = ((upc.manfCode / 1000) % 10) + ((upc.manfCode / 10) % 10);
	//b.Sum the first, third, and fifth numbers in the product code.
	upc.sumPcode = ((upc.productCode / 10000) % 10) + ((upc.productCode / 100) % 10) + (upc.productCode % 10);
	//c.Sum the results of step a and step b, and multiply the total by 3.
	upc.sumFirst = (upc.sumManf + upc.sumPcode) * 3;
	//d.Sum the first, third, and fifth numbers in the manufacturer code.
	upc.sumManf2 = ((upc.manfCode / 10000) % 10) + ((upc.manfCode / 100) % 10) + (upc.manfCode % 10);
	//e.Sum the second and fourth digits in the product code.
	upc.sumPcode2 = ((upc.productCode / 1000) % 10) + ((upc.productCode / 10) % 10);
	//f.Sum the results of steps d and e and add to the result from step c.
	upc.sumSecond = (upc.sumManf2 + upc.sumPcode2) + upc.sumFirst;
	//g. Take the remainder when the result of step f is divided by 10.
	bool validCdigit = 10 - (upc.sumSecond % 10) == upc.checkDigit;
	cout << validCdigit << endl;
	
}