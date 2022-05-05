#include <iostream>
using namespace std;


void car(int bar, int ber);

int main()
{
    int num = 10;
    int food = 12;
    
    car(num, food);
}

void car(int bar, int ber)
{
    cout << "$" << bar*ber;
}