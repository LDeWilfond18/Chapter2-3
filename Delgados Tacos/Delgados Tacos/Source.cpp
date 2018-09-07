#include <iostream>
#include <string>
using namespace std;

int main()
{

	int taco;
	int burrito;
	int nachos;
	int drink;
	int enchilada;
	double tacoCost ;
	double burritoCost;
	double nachosCost;
	double drinkCost;
	double enchiladaCost;
	double totalCost;

	cout << "How many tacos would you like? ";
	cin >> taco;

	cout << "How many burritos would you like? ";
	cin >> burrito;

	cout << "How many nachos would you like? ";
	cin >> nachos;

	cout << "How many drinks would you like? ";
	cin >> drink;

	cout << "How many enchiladas would you like? ";
	cin >> enchilada;

	tacoCost = taco * 1.00;
	burritoCost = burrito * 1.25;
	nachosCost = nachos * 1.50;
	drinkCost = drink * 1.00;
	enchiladaCost = enchilada * 1.25;
	totalCost = tacoCost + burritoCost + nachosCost + drinkCost + enchiladaCost;

	cout << "Your total is: " << totalCost << "\n";
	
	cout << "       _________________________ \n"
		"      /__    Delgatos Tacos     |\n"
		"     / o |     |        |       |\n"
		"   _/__|_|     |________|       |\n"
		"  |                             |\n"
		"  |___(O)________________(O)____|\n";

	system("pause");
	return 0;

}