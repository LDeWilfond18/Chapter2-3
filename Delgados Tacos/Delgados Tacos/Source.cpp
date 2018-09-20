#include <iostream>
#include <string>
using namespace std;

int menu() {
cout << "Number 1 Tacos 1.00$" << endl;
cout << "Number 2 Burritos 1.25$" << endl;
cout << "Number 3 Nachos 1.50$" << endl;
cout << "Number 4 Drinks 1.00$" << endl;
cout << "Number 5 Enchiladas 1.25$" << endl;
return 0;
}
int main()
{

	int taco= 0;
	int burrito= 0;
	int nachos = 0;
	int drink = 0;
	int enchilada = 0;
	double tacoCost ;
	double burritoCost;
	double nachosCost;
	double drinkCost;
	double enchiladaCost;
	double totalCost;
	int choice;
	menu();
	do {
		cout << "From the menu above, which item would you like to purchase? >> ";
		cin >> choice;
		if (choice == 1) {
			cout << "How many tacos would you like? ";
			cin >> taco;
		}
		else if (choice == 2) {
			cout << "How many burritos would you like? ";
			cin >> burrito;
		}
		else if (choice == 3) {
			cout << "How many nachos would you like? ";
			cin >> nachos;
		}
		else if (choice == 4) {
			cout << "How many drinks would you like? ";
			cin >> drink;
		}
		else if (choice == 5) {
			cout << "How many enchiladas would you like? ";
			cin >> enchilada;
		}
	} while (choice != 6);

	tacoCost = taco * 1.00;
	burritoCost = burrito * 1.25;
	nachosCost = nachos * 1.50;
	drinkCost = drink * 1.00;
	enchiladaCost = enchilada * 1.25;
	totalCost = tacoCost + burritoCost + nachosCost + drinkCost + enchiladaCost / 0.07;

	cout << "Your total is: " << totalCost << "\n";
	
	cout << "       _________________________ \n"
		"      /__    Delgados Tacos     |\n"
		"     / o |     |        |       |\n"
		"   _/__|_|     |________|       |\n"
		"  |                             |\n"
		"  |___(O)________________(O)____|\n";

	system("pause");
	return 0;

}