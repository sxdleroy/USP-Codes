#include <iostream>
#include <string>

using namespace std;

int main()
{
    string car;

    while (car.empty())
    {
        cout << "Please Enter your name: ";
        getline(cin, car);
    }
    
    cout << "Welcome " << car;


    return 0;

}