#include <iostream>
#include <string>
using namespace std;

int main()
{

	int paychecks = 24;
	int percentage;
	int yearlySalary;
	int weeklyPay;
	int bonusCheck = 100;
	int totalSavings;
	int checkSavings;

	cout << "How much did you make a week? ";
	cin >> weeklyPay;

	cout << "What percentage do you want to deposit? ";
	cin >> percentage;

	yearlySalary = weeklyPay * paychecks;
	checkSavings = percentage * yearlySalary;
	totalSavings = checkSavings + bonusCheck;

	cout << "Your savings balance is: " << totalSavings;


	system("pause");
	return 0;
}