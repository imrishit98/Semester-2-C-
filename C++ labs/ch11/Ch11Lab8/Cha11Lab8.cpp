/*
Author: Rishit Patel
Date: May 23, 2019
Description: Chapter 11 lab - Exercise 8
*/

#include<iostream>
#include<string>
using namespace std;

template<class T>
class Array
{
private:
	T *data; // T is the type of the array
	int size;
public:
	Array(T *d, int s);
	void showList();
	void showFirst();
	void showLast();
	void showSpecific(int);
	void reverse();
};
template<class T>
Array<T>::Array(T *d, int s)
{
	data = d;
	size = s;
}
template<class T>
void Array<T>::showList()
{
	cout << "Entire list:" << endl;
	for (int x = 0; x < size; ++x)
		cout << data[x] << endl;
	cout << "-----------------------" << endl;
}
template<class T>
void Array<T>::showFirst()
{
	cout << "First element is ";
	cout << data[0] << endl;
}
template<class T>
void Array<T>::showLast()
{
	cout << "Last element is ";
	cout << data[size - 1] << endl;
}

template<class T>
void Array<T>::showSpecific(int a)
{
	cout << "Element No." << a <<  " is ";
	cout << data[a] << endl;
}

template<class T>
void Array<T>::reverse()
{
	cout << "Entire list reversed: " << endl;
	for (int z = size - 1; z >= 0; --z)
		cout << data[z] << endl;
	cout << "-----------------------" << endl;
}