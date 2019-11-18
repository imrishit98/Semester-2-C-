/*
Author: Rishit Patel
Date: May 2, 2019
Description: Chapter 5 In Class - Understanding memory addresses
*/
#include<iostream>
using namespace std;
int main()
{
   int firstNum, secondNum;
   const int SIZE = 6;
   int nums[SIZE] = { 12,23,34,45,56,67 };
   int x;
   cout << "Enter first number: ";
   cin >> firstNum;
   cout << "Enter second number: ";
   cin >> secondNum;
   cout << "The numbers are " << firstNum << " and " << secondNum << endl;
   cout << "The addresses are " << &firstNum << " and " << &secondNum << endl;
   for (x = 0; x < SIZE; ++x)
	   cout << nums[x] << " ";
	   cout << endl;
   for (x = 0; x < SIZE; ++x)
	   cout << &nums[x] << " ";
	   cout << endl;
   return 0;
}