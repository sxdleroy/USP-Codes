#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "what is your age?: ";
    cin >> age;

    string* pAge = new string[age];
    //Pointer.

    for(int i = 0;i < age;i++) {
        cout << "Age " << i+1 << ":";
        cin >> pAge[i];
    }

    cout << "\nThis is your age!\n";

    for(int i = 0;i < age;i++) {
        cout << "Age Number = " << i+1 << " " << pAge[i];
    }

    return 0;
}