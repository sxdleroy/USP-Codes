#include <iostream>
using namespace std;

int main()
{
    char candy;
    int width, height;

    cout << "entry candy only: " << endl;
    cin >> candy;

    cout << "enter width: " << endl;
    cin >> width;

    cout << "enter height: " << endl;
    cin >> height;
    
    for(int k = 0; k < height;k++) {
        for (int i = 0; i < width;i++)
        {
            cout << candy;
        }
        cout << endl;
    }
    

    return 0;
}