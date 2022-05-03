//Leroy Hing
//4/30/2022
//Assignment

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	
	float marriot = 0, hilton = 0, uprising = 0, naviti = 0, warwick = 0, vote = 0, sum = 0;
    float percent_marriot, percent_hilton, percent_uprising, percent_naviti, percent_warwick;
    const int SENTINEL = 6, HUNDRED = 100, ONE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5;
	
	//intro
	
    cout << "\t------------------------------------\n";
    cout << "\tFAVORITE FIJIAN HOTELS OPINION POLL\n";
    cout << "\t------------------------------------\n\n";
    cout << "\t1. Fiji Marriott Resort Momi Bay\n\t2. Hilton Fiji Beach Resort and Spa\n\t3. Uprising Beach Resort\n\t4. Naviti Resort\n\t5. Warwick Fiji\n\n\t6. Quit voting\n";
    cout << "\n\t------------------------------------";
    cout << "\n\tPlease vote for the best hotel!\n";
    cout << "\t------------------------------------\n\n";

    //Body | Code
    
    while(vote != SENTINEL)
    {	
        cout << "\tVote: ";
        cin >> vote;
        
        if (vote >= ONE && vote <= FIVE)
        {
            cout << "\tVote Successfully Cast.\n";
        
	        if (vote == ONE)
	        {
	        	marriot++;
	        }
	
	        else if (vote == TWO)
	        {
	        	hilton++;
	        }
	
	        else if (vote == THREE)
	        {
	        	uprising++;
	        }
	
	        else if (vote == FOUR)
	        {
	        	naviti++;
	        }
	
	        else if (vote == FIVE)
	        {
	        	warwick++;
	        }
		}
		
    }

    //Percentage | Calculations

    sum = marriot + hilton + uprising + naviti + warwick;

    percent_marriot = (marriot / sum) * HUNDRED;
    percent_hilton = (hilton / sum) * HUNDRED;
    percent_uprising = (uprising / sum) * HUNDRED;
    percent_naviti = (naviti / sum) * HUNDRED;
    percent_warwick= (warwick / sum) * HUNDRED;
        
    //Outro || Final

    cout << "\n\t------------------------------------\n\n";
    cout << "\t\tHotels:\t\t\t\t\tVotes:\t\t\tPercentage:\n";

    //Marriott
    cout << "\n\tFiji Marriott Resort Momi Bay \t\t\t" << marriot;
    cout << "\t\t\t" << setprecision(3) << percent_marriot<<"%";
    //Hilton
    cout << "\n\tHilton Fiji Beach Resort and Spa \t\t" << hilton;
    cout << "\t\t\t" << setprecision(3) << percent_hilton<<"%";
    //Uprising
    cout << "\n\tUprising Beach Resort \t\t\t\t" << uprising;
    cout << "\t\t\t" << setprecision(3) << percent_uprising<<"%";
    //Naviti
    cout << "\n\tNaviti Resort \t\t\t\t\t" << naviti;
    cout << "\t\t\t" << setprecision(3) << percent_naviti<<"%";
    //Warwick
    cout << "\n\tWarwick Fiji \t\t\t\t\t" << warwick;
    cout << "\t\t\t" << setprecision(3) << percent_warwick<<"%";

    cout << "\n\n\t------------------------------------\n";


    return 0;
}