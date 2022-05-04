#include <iostream>
#include <string>
using namespace std;

int main()
{
    string answer;

    do
    {
        cout << "You are eating pizza\n";
        cout << "* munch\n";
        cout << "press p to quit\n";
        getline(cin, answer);
        cout << "\n***************************";
    } while (answer.at(0)!='p');

    cout << "quit";
    

    return 0;
}