/************************************************************
*	Mrs. Kirby												*
*	March 3rd 2017											*
*															*
*	Purpose: outputting numbers 1 to user entered number 	*
*			 their squares.									*
*															*
*	Data Dictionary: userNum ..... user entered number										*
*					 i............ counter										*
*															*
*															*
*************************************************************/

// Bringing in files that are needed
#include<iostream>
//#include<math.h>
using namespace std;	

//Starting main program
main()
{
	//Declaring var
	int userNum, i;
	
	//Getting number from user
	cout<<"Enter the number you would like to go to->";
	cin>>userNum;
	
	// clears screen
	system("cls");
	
	//Output titles
	cout<<"Number\t|\tNumber Squared\n";
	cout<<"__________________________________________\n";
	
	//outputting the numbers and their squares
	for (i=1;i<=userNum;i++)
	{
		//outputting the calculations
		cout<<i<<"\t|\t"<<i*i<<"\n";
	}
}

