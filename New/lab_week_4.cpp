#include <iostream>
using namespace std;

int main ()
{
    double m_pizza = 10.50;
    double total_price, cash, change;
    int quantity;

    cout << "\tChange Calculator Program for Yummy Pizza & Bakery Shop\n\n";
    cout << "\tYummy Pizza sells only medium-size pizza for $10.50 only\n";
    cout << "\t\t It's the best deal in town! So come along!!!\n\n";
    cout << "\t********************************************************\n\n";
    //Let the cashier enter the quantity of pizzas ordered by the customer.
    cout << "Enter the Quantity of pizza ordered: ";
    cin >> quantity;

    //Calculate and display the total purchase price.
    total_price = quantity * m_pizza;
    cout << "\n\nTotal purchase price is $" << total_price << endl;

    //Let the cashier input the amount of cash paid.
    cout << "Enter amount paid: $";
    cin >> cash;

    //Calculate and display the amount of change to be returned to the customer.
    change = cash - total_price;
    cout << "\n\nYour change is: $" << change << endl;

    return 0;
}
