#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nameString;

	int degreesF;
	int degreesC;
	
	cout << "Enter your temperature in fahrenheit >> ";
	cin >> degreesF;

	degreesC = (degreesF - 32) / 1.8;

	cout << "Your temperature in Celsius is: " << degreesC << " ";
	

	system("pause");
	return 0;

}