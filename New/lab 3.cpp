#include <iostream>
using namespace std;

int main ()
{
    string fname = "Harry";
    string lname = "Morgan";
    string name = fname + lname;

    cout << name << endl;
    name = fname + " " + lname;
    cout << name << endl;

    return 0;
}
