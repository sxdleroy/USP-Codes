#include <iostream>
using namespace std;

int main()
{
    int index = 1;
    switch (index)
    {
        case 0 : cout << "Zero "; break;
        case 1 : cout << "One ";
        default : cout << "Default ";
    }

    return 0;
}