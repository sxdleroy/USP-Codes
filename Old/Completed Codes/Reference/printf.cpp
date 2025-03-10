#include <iostream>
using namespace std;

int main()
{
    string candy = "Sprite";
    string food = "Chop-Suey";
    int year = 2022;
    double price = 69.69999;
    char sex = 'T';

    printf("Just testing the string: %s", candy.c_str());
    printf("hmm testing the srting in printf: %s %s", "1st message", "2nd message");
    printf("hmm testing the string in printf: %s lmao %s", food.c_str(), candy.c_str());
    return 0;
}