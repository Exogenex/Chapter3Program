//Micah Pennington
//January 17 2022 ©
//Chapter 3 Program

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//define a variable appropriate to hold the population of the US 300,000,000+
	unsigned int USPop;
	//define a variable appropriate to hold the average family income in the US 51,321.43
	float avgFamIncome;
	//define a variable appropriate to hold the hourly wage of 1 family member  17.98
	float hourWage;
	//define a variable appropriate to hold the count of the total student attending SPC 30,609
	unsigned short totalStudents;
	//define a variable appropriate to hold the total GNP of Florida 754,256,198.95
	double FLGNP;
	//define a variable appropriate to hold a single character to represent person's gender
	char gender;


	// Get the population of the US
	cout << "Please enter the population of the US (Do not use commas):";
	cin >> USPop;

	// Get the average family income in the US
	cout << "Please enter the average family income in the US (Do not use commas):";
	cin >> avgFamIncome;

	// Get the hourly wage of 1 family member
	cout << "Please enter the hourly wage of 1 family member (Do not use commas):";
	cin >> hourWage;

	// Get the count of the total student attending SPC
	cout << "Please enter the count of the total student attending SPC (Do not use commas):";
	cin >> totalStudents;

	// Get the total GNP of Florida
	cout << "Please enter the total GNP of Florida (Do not use commas):";
	cin >> FLGNP;

	// Get the person's gender
	cout << "Please enter the person's gender (M or F):";
	cin >> gender;


	//Display the population of the US
	cout << "The population of the US is: " << USPop << "\n";

	//Display the average family income in the US
	cout << "The average family income in the US is: $" << setprecision(2) << fixed << avgFamIncome << "\n";

	//Display the hourly wage of 1 family member
	cout << "The hourly wage of 1 family member is: $" << setprecision(2) << fixed << hourWage << "\n";

	//Display the count of the total student attending SPC
	cout << "The count of the total student attending SPC is: " << totalStudents << "\n";

	//Display the total GNP of Florida
	cout << "The total GNP of Florida is: $" << setprecision(2) << fixed << FLGNP << "\n";

	//Display the person's gender
	cout << "The person's gender is: " << gender << "\n";


	//LOUD NOISES!!!
	cout << "\a\a\a\a\a";


	return 0;
}