#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

void order(string food, string drink)
{
    cout << "Your order is " << food << "and" << drink;
};

int main()
{
    string food;
    string drink;

    cout << "Please enter your favorite food: ";
    cin >> food;
    cout << "Please enter your favorite drink: ";
    cin >> drink;

    order(food, drink);

    return 0;
}