#include <iostream>
#include <string>
using namespace std;

int main()
{

	int paychecks = 24;
	int percentage;
	int yearlySalary;
	int weeklyPay;
	int bonusCheck;
	int totalSavings;
	int checkSavings;

	cout << "How much did you make a week? ";
	cin >> weeklyPay;

	cout << "How much was your bonus check? ";
	cin >> bonusCheck;

	cout << "What percentage do you want to deposit? ";
	cin >> percentage;

	yearlySalary = weeklyPay * paychecks;



	system("pause");
	return 0;
}