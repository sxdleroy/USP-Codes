//Leroy Hing
//4/30/2022
//Assignment

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	
	float marriot = 5, hilton = 3, uprising = 3, naviti = 1, warwick = 3, vote = 0, sum = 0;
    float percent_marriot, percent_hilton, percent_uprising, percent_naviti, percent_warwick;
    const int SENTINEL = 6, HUNDRED = 100, ONE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5;
	
	//intro
	
    printf("%44s\n", "------------------------------------");
    printf("%43s\n", "FAVORITE FIJIAN HOTELS OPINION POLL");
    printf("%44s\n\n", "------------------------------------");
    printf("%40s\n%43s\n%32s\n%24s\n%23s\n\n%22s\n", "1. Fiji Marriott Resort Momi Bay", "2. Hilton Fiji Beach Resort and Spa", "3. Uprising Beach Resort", "4. Naviti Resort", "5. Warwick Fiji", "6. Quit voting");
    printf("\n%44s", "------------------------------------");
    printf("\n%39s\n", "Please vote for the best hotel!");
    printf("%44s\n\n", "------------------------------------");

    //Body | Code
    
    while(vote != SENTINEL)
    {	
        printf("%14s", "Vote: ");
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

    printf("\n%44s\n\n", "------------------------------------");
    printf("%25s%35s%29s\n", "Hotels:", "Votes:", "Percentage:");
    printf("\n\t%s%20.0f%27.1f%s", "Fiji Marriott Resort Momi Bay", marriot, percent_marriot,"%");
    printf("\n\t%s%17.0f%27.1f%s", "Hilton Fiji Beach Resort and Spa", hilton, percent_hilton,"%");
    printf("\n\t%s%28.0f%27.1f%s", "Uprising Beach Resort", uprising, percent_uprising,"%");
    printf("\n\t%s%36.0f%27.1f%s", "Naviti Resort", naviti, percent_naviti,"%");
    printf("\n\t%s%37.0f%27.1f%s", "Warwick Fiji", warwick, percent_warwick,"%");
    printf("\n\n%44s\t\n", "------------------------------------");

    system("pause");
    return 0;
}