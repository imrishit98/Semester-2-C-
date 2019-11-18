/*
Author: Rishit Patel
Date: May 29, 2019
Description: Chapter 13 lab
*/

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

ostream& val(ostream& out) {
	out << setprecision(2) << fixed;
	out.width(8);
	return out;
}

class Test {
public:
	double score;
	double outOf = 50;
};


int main() {
	Test test;
	double num = 0.123;
	cout << "Output: " << val << num * 100 << "%" << endl;
	int count;
	const char* FILENAME = "Scores.txt";
	ofstream writingFile(FILENAME);
	ifstream readingFile;
	if (!writingFile.good()) {
		cout << "File could not be opened for writing" << endl;
	}
	else {
		cout << "Enter a score or end-of-file to quit ";
		while (cin >> test.score) {
			cout << "What was the test out of? ";
			cin >> test.outOf;
			writingFile << test.score << " " << test.outOf << endl;
			cout << "Enter a score or end-of-file to quit ";
		}
	}
	writingFile.close();
	readingFile.open(FILENAME);
	count = 0;
	if (!readingFile.good())
		cout << "File could not be opened for reading" << endl;
	else {
		while (readingFile >> test.score >> test.outOf) {
			++count;
			cout << "Score #" << count << " " << test.score  << "/" << test.outOf << " = "<< val << 100.00 * (test.score / test.outOf) << "%" << endl;
		}
		cout << endl << "Total number of scores is " << count << endl;
	}
	readingFile.close();
	return 0;
}