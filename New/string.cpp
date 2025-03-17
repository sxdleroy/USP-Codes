#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    string greeting = "Flash Gordon";
    string sub = greeting.substr(9,3);
    
    cout << sub << endl;
    
    return 0;
}
