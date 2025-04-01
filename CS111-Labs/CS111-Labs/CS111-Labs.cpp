#include <iostream>
using namespace std;
int main()
{
	int norm_workinghours = 40;
	char category = 0;
	double hours_worked = 0, gross_pay = 0, net_pay = 0;

	//While Loop

	cout << "Enter Category: ";
	cin >> category;

	while (category != 'M' && category != 'm' && category != 'F' && category != 'f')
		{
			cout << "Incorrect. \nEnter M or F: ";
			cin >> category;
		}


	cout << "\nEnter hours worked: ";
	cin >> hours_worked;

	//If Statement

	if (category == 'M' || category == 'm')
		{
			const double management_hrate = 10.60, m_taxrate = 0.35;
			gross_pay = hours_worked * management_hrate;
			const double tax = gross_pay * m_taxrate;
			net_pay = gross_pay - tax;


			cout << "\nGross Pay : $" << gross_pay << endl;
			cout << "Tax: $" << tax << endl;
			cout << "Net Pay: $" << net_pay << endl;
		}

	if (category == 'F' || category == 'f')
		{
			const double floor_hrate = 8.30, f_taxrate = 0.20;
			gross_pay = hours_worked * floor_hrate;
			const double tax = gross_pay * f_taxrate;
			net_pay = gross_pay - tax;


			cout << "\nGross Pay: $" << gross_pay << endl;
			cout << "Tax: $" << tax << endl;
			cout << "Net Pay: $" << net_pay << endl;
		}


    return 0;
}