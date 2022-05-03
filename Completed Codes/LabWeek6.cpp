//S11210431
//Leroy Hing
//4.27.2022

#include <iostream>
using namespace std;

int main()
{
    //Variables.

    const int SPEED_SIXTY = 60;
    const int SPEED_SIXTYFIVE = 65;
    const int SPEED_SEVENTY = 70;
    int speed = 0;
	char drunk;

    //Intro.

    cout << "What is the speed km/hr?\n";
    cin >> speed;

    cout << "is the driver drunk? [y/n]\n";
    cin >> drunk;

    //Body.

    if (drunk == 'y' || drunk == 'Y')
    {
        //Drunk = Yes

        if (speed > SPEED_SIXTY && speed < SPEED_SIXTYFIVE)
        {
            cout << "Warning, Take a shower!";
        }

        else if (speed == SPEED_SIXTYFIVE || speed <= SPEED_SEVENTY)
        {
            cout << "You are fined $7 for each km/hr over 60 km/hr and for godsake take a shower!";
        }

        else if (speed > SPEED_SEVENTY)
        {
            cout << "You are fined $7 for each hm/hr over 60 up to and including 70 km/hr\\n";
            cout << "$15 fine for each km/hr over 70km/hr and spend the rest of the day/night here.";
        }
    }

	if (drunk =='n' || drunk =='N')
    {
        //Drunk = No

    	if (speed > SPEED_SIXTY && speed < SPEED_SIXTYFIVE)
        {
            cout << "Warning!";
        }

        else if (speed == SPEED_SIXTYFIVE && speed <= SPEED_SEVENTY)
        {
            cout << "You are fined $5 for each km/hr over 60 km/hr";
        }

        else if (speed > SPEED_SEVENTY)
        {
            cout << "You are fined $5 for each km/hr up to 70 and including 70 km/hr";
        }
	}

    return 0;
}
