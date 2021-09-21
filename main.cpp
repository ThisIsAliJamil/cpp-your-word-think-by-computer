//Created by Ali Jamil

#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	// variable declarion //
	int col,row=0,alphabet=26,calculation,i,j;
	// getting string length //
	cout<<"Number of characters should be less than 9. "<<endl<<endl;
	cout<<"Think any word and enter number of characters: ";
	cin>>col;
	// calculation of rows //
	calculation = alphabet / col;
	row = calculation;
	if(alphabet%col !=0)
	{
		row = row + 1;
	}
	else
	{
		row = calculation;
	}
	// array decalrion for getting line numbers //
	int GetFirstLines[col+1], GetSecondLines[col+1];
	// think characters with initilization //
	string monthNames[10];
	for(i=1;i<=col;i++)
	{
		if(i==1)
		{
			 monthNames[i] =  "first";
		}
		
		else if((i>1) && (i<col))
		{
			monthNames[i] = "next";
		}
		else if(i==col)
		{
			monthNames[i] = "last";
		}
	}
    // declartion and initializing array size //
    char gameArray[row+1][col+1];
     // declarion ASCII code varibale //
	 char character = 65;
	 // intializing array with alphabtes //
	 for(i=1;i<=row;i++)
 	{
 		for(j=1;j<=col;j++)
 		{
 			if(character>90)
 			{
 				gameArray[i][j] = 0;
			}
			else
			{
				gameArray[i][j] = character;
 			    character++;
			}
 			
		}
	 }
	 // number of lines output //
	 cout<<endl<<endl;
	 for(j=1;j<=col;j++)
 		{
 			cout<<j<<" ";
 		}		
	 // OUTPUT of first step //
	 cout<<endl<<endl;
	 for(i=1;i<=row;i++)
 	{
 		for(j=1;j<=col;j++)
 		{
 			cout<<gameArray[i][j]<<" ";
		}
		cout<<endl;
	 }
	 // getting line numbers //
	 cout<<endl<<endl;
	 cout<<"Now enter col number including your character.";
	 cout<<endl<<endl;
	 for(j=1;j<=col;j++)
 		{
 			cout<<"Enter "<<monthNames[j]<<" character: ";
 			cin>>GetFirstLines[j];
 		}
 	// number of lines output //
	 cout<<endl<<endl;
	 for(j=1;j<=row;j++)
 		{
 			cout<<j<<" ";
 		}	
 		// OUTPUT of second step //
 	cout<<endl<<endl;
 	for(i=1;i<=col;i++)
 	{
 		for(j=1;j<=row;j++)
 		{
 			cout<<gameArray[j][GetFirstLines[i]]<<" ";
		}
		cout<<endl;
	 }
	 // getting line numbers //
	 cout<<endl<<endl;
	 cout<<"Now enter col number including your character.";
	 cout<<endl<<endl;
	 for(j=1;j<=col;j++)
 		{
 			cout<<"Enter "<<monthNames[j]<<" character: ";
 			cin>>GetSecondLines[j];
 		}
	// Answer Displaying //
	 	cout<<endl<<endl;
    cout<<"You are thinking this word. ";
 	cout<<endl<<endl;
 	for(i=1;i<=col;i++)
 	{	
 		cout<<gameArray[GetSecondLines[i]][GetFirstLines[i]]<<" ";
	 }
	getch();
}
