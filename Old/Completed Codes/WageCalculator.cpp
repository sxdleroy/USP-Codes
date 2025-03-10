//Name: Leroy Hing
//Date: 4/21/2022
//LabTut: 5

#include <iostream>
using namespace std;

int main()
{
	// Variables

	char category;
	int hours_worked;

	cout << "*****************************************";
	cout << "\n* Wage calculator for shoe lace company *\n";
	cout << "*****************************************";
	cout << "\n Enter category 'M' for Management, 'F' for Floor Worker.\n";
	cout << " Answer [M/F]: ";
	cin >> category;

	cout << "\n Enter Hours Worked: ";
	cin >> hours_worked;

	// Management

	if (category == 'M')
	{
		const int N_WORKING_HOURS = 40;
		const double HOURLY_RATE = 10.60;
		const double TAX_RATE = 0.35;
		const double OVERTIME = 1.5;
		double wage = 0;

		if (hours_worked > 40)
		{
			int new_hours = hours_worked - N_WORKING_HOURS;
			double new_overtime = new_hours * HOURLY_RATE * OVERTIME;

			cout << "\n";
			cout << "Summary:\n";
			cout << "Staff Category: [M] Management\n";
			cout << "Hours Worked: " << hours_worked;
			cout << "\nNET WAGE: " << ((N_WORKING_HOURS * HOURLY_RATE) + new_overtime) * 0.65;
			cout << "\n";

		}

		else if (hours_worked <= 40)
		{

			cout << "\n";
			cout << "Summary:\n";
			cout << "Staff Category: [M] Management\n";
			cout << "Hours Worked: " << hours_worked;
			cout << "\nNET WAGE: " << (HOURLY_RATE * hours_worked) - ((HOURLY_RATE * hours_worked) * TAX_RATE);
			cout << "\n";
		}
	}

	// Floor Workers

	if (category == 'F')
	{
		const int N_WORKING_HOURS = 40;
		const double HOURLY_RATE = 8.30;
		const double TAX_RATE = 0.2;
		const double OVERTIME = 1.5;
		double wage = 0;

		if (hours_worked > 40)
		{
			int new_hours = hours_worked - N_WORKING_HOURS;
			double new_overtime = new_hours * HOURLY_RATE * OVERTIME;

			cout << "\n";
			cout << "Summary:\n";
			cout << "Staff Category: [F] Floor Workers\n";
			cout << "Hours Worked: " << hours_worked;
			cout << "\nNET WAGE: " << ((N_WORKING_HOURS * HOURLY_RATE) + new_overtime) * 0.65;
			cout << "\n";

		}

		else if (hours_worked <= 40)
		{
			cout << "\n";
			cout << "Summary:\n";
			cout << "Staff Category: [F] Floor Workers\n";
			cout << "Hours Worked: " << hours_worked;
			cout << "\nNET WAGE: " << (HOURLY_RATE * hours_worked) - ((HOURLY_RATE * hours_worked) * TAX_RATE);
			cout << "\n";
		}
	}

	return 0;

}