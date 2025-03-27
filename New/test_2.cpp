#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double liter = 1.12345;

    cout << fixed << setprecision(3) << liter << endl;
    return 0;
}
