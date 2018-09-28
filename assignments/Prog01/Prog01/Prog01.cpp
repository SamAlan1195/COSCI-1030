// Prog01
// Steven McConnell
// COSC 1030 Section 01 Fall 2018
// Programming Assignment 01
// Sep 5,2018

#include <iostream>
using std::cout; using std::cin; using std::endl;

int main()
{
	int sum = 0, num = 0;
	cout << "Enter four integers to add:";
	do
	{
		cin >> num;
		sum += num;
	} while (num != 0);
	cout << "Sum of the integers:" << sum << endl;
	system("pause");
	return 0;
}