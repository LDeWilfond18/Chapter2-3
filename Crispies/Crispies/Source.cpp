#include <iostream>
#include <string>
using namespace std;

int main()
{

	double bagels;
	double donuts;
	double coffee;
	double total;

	cout << "How many bagels would you like? ";
	cin >> bagels;

	cout << "How many donuts would you like? ";
	cin >> donuts;

	cout << "How many cups of coffe would you like? ";
	cin >> coffee;

	total = bagels * .99 + donuts * .75 + coffee * 1.20;

	cout << "Your total is: " << total << " ";

	system("pause");
	return 0;

}