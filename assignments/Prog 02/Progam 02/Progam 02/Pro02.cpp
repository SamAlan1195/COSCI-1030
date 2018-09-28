// Prog02
// Steven McConnell
// COSCI 1030 Section 01 Fall 2018
// Programming Assignment 02
// Sep 12, 2018

#include<iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
	int x = 0;
	int y = 0;
	int productx = 0;
	int producty = 0;
	cout << "Please input the first integer: ";
	cin >> x;
	productx *= (x * (x + 1)*(x + 2)*(x + 3)*(x + 4));
	cout << "PLease enter the second integer: ";
	cin >> y;
	producty *= (y * (y - 1)*(y - 2)*(y - 3)*(y - 4));
	cout << "The Product of the integers " << x << ", " << y << " ( " << productx << " * " << producty << " ) " << "is " << productx * producty << endl;
	system("pause");
	return 0;
}