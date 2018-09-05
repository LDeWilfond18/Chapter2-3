#include <iostream>
#include <string>
using namespace std;

int main()
{

	double teleMinutes;
	double nightsStayed;
	double costPerNight = 100.00;
	double teleCharge = 0.25;
	double totalTele;
	double totalPerNight;
	double totalCharge;

	cout << "How many minutes? ";
	cin >> teleMinutes;

	cout << "How many nights? ";
	cin >> nightsStayed;

	totalPerNight = nightsStayed * costPerNight;
	totalTele = teleMinutes * teleCharge;
	totalCharge = totalTele + totalPerNight;

	cout << "Your total is: " << totalCharge << " ";

	system("pause");
	return 0;
}