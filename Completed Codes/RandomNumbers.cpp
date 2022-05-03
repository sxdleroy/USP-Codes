#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int b = 10;
    int a = 20;

    for(int num = 1; num < 10;num++)
    cout << rand()%(b - a + 1) + a <<endl;

    return 0;
}