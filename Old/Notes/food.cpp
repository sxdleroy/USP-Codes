#include <iostream>
using namespace std;

class Human {
    public:
    string name;
    int age;
    double weight;

    void eat() {
        cout << "This person is eating" << endl;
    }
    void drink() {
        cout << "This person is sleeping" << endl;
    }
};

int main()
{
    Human human1;

    human1.name = "Lerpy";
    human1.age = 23;

    cout << human1.name << "\n";
    cout << human1.age << "\n";

    return 0;
}