//Name: Leroy Hing
//Date: 4/14/2022
//Description: Change Calculator

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "\t\tChange Calculator Program for Yummy Pizza\n\n";
	cout << "\tYummy Pizza only sells medium-sized pizzas for $10.50 only!\n";
	cout << "\t\tIts the best deal in town so come along!\n";
	cout << "\t************************************************************\n\n";

	const double PIZZA = 10.50;
	int pizza_order = 0;
	double total_price = 0.0;
	double amount_paid = 0.0;


	cout << "Enter quantity of pizza ordered: ";
	cin >> pizza_order;

	cout << "Total purchase price is $" << PIZZA * pizza_order << endl;

	cout << "Enter amount paid: $";
	cin >> amount_paid;

	double change;
	change = amount_paid - (PIZZA * pizza_order);

	cout << "\n\nYour change is $" << change << ", made up of" << endl;

	// Convert change into cent.

	const int five_cents = 5, ten_cents = 10, twenty_cents = 20, fifty_cents = 50, one_dollar = 100, two_dollar = 200, five_dollar = 500, ten_dollar = 1000;
	int change_due = change * 100 + 0.5;


	cout << "Cents: " << change_due << endl;

	cout << "\n\t" << change_due / ten_dollar << " $10 bills " << endl;
	change_due = change_due - (change_due / ten_dollar * ten_dollar);
	cout << "\t" << change_due / five_dollar << " $5 bills " << endl;
	change_due = change_due - (change_due / five_dollar * five_dollar);
	cout << "\t" << change_due / two_dollar << " $2 coin " << endl;
	change_due = change_due - (change_due / two_dollar * two_dollar);
	cout << "\t" << change_due / one_dollar << " $1 coin " << endl;
	change_due = change_due - (change_due / one_dollar * one_dollar);
	cout << "\t" << change_due / fifty_cents << " 50c cents " << endl;
	change_due = change_due - (change_due / fifty_cents * fifty_cents);
	cout << "\t" << change_due / twenty_cents << " 20c cents " << endl;
	change_due = change_due - (change_due / twenty_cents * twenty_cents);
	cout << "\t" << change_due / ten_cents << " 10c cents " << endl;
	change_due = change_due - (change_due / ten_cents * ten_cents);
	cout << "\t" << change_due / five_cents << " 5c cents \n" << endl;



	system("pause");
	return 0;
}
