#include <iostream>
#include <string>
using namespace std;

int main()
{

	int eggsOrdered;
	int Dozen_Eggs = 12;
	int extraEggs;
	int CartonOfEggsOrdered;
	double pricePerDozen = 0.0;
	double pricePerExtraEgg = 0.0;
	double totalCost = 0.0;


	cout << "How many eggs would you like?";
	cin >> eggsOrdered;

	CartonOfEggsOrdered = eggsOrdered / Dozen_Eggs;
	extraEggs = eggsOrdered % Dozen_Eggs;
	pricePerDozen = CartonOfEggsOrdered * 2.00;
	pricePerExtraEgg = extraEggs * .25;
	totalCost = pricePerDozen + pricePerExtraEgg;

	cout << "You have " << CartonOfEggsOrdered << " dozen eggs and " << extraEggs << " extra eggs ";
	cout << "It costs you " << totalCost << " to buy " << eggsOrdered << " eggs ";

	system("pause");
	return 0;

}