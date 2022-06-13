#include <iostream>
using namespace std;

int main()
{
    const int CAPACITY = 100;
    double values[CAPACITY];
    int size = 0;
    double input;
    while (cin >> input)
    {
        if (size < CAPACITY)
        {
            values[size] = input;
            size++;
        }
    }

    cout << size;
    
    return 0;
}