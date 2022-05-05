#include <iostream>
using namespace std;

int main()
{
    int four = 4;

    //++++

    for(int i = four;i > 0;i--) 
    {
        for(int k = 0;i > k;k++) 
        {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}