// Lab Project 02
// Steven McConnell
// COSCI 1030 Section 01 Fall 2018
// Lab 02 Section 10
// Sep 12, 2018

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int num;

	cout << "Please enter a number between 1 and 4: ";
		cin >> num;
	if (num == 1) {
		cout << "I eat peas with honey." << endl;
	}
	if (num == 2) {
		cout << "I've done it all my life." << endl;
	}
	if (num == 3) {
		cout << "It makes the peas taste funny." << endl;
	}
	if (num == 4) {
		cout << "But it keeps them on the knife." << endl;
	}
	if (num < 1) {
		cout << "error. " << endl;
	}
	if (num > 4) {
		cout << "error. " << endl;
	}
	system("pause");
	return 0;
}
