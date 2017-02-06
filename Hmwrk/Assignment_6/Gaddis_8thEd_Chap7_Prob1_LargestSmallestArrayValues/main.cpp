/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 4, 2017, 7:10 PM
  Purpose: Program to determine the largest and smallest values in an array
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes


//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int TOTVALS=10; //Number of values
    int values[TOTVALS];  //Array to hold values
    int count;            //Loop counter
    
    //Input values
    for (count=0; count<TOTVALS; count++) {
	cout<<"Enter the value to go in element "<<count<<endl;
	cin>>values[count];
    }
    
    //Determine the largest value in the array
    int highest; //Stores highest value
    highest=values[0]; //Set highest value to element 1's value
    for (count=1; count<TOTVALS; count++) {
	if (values[count]>highest) {
	highest=values[count];
	}
    }
    
    //Determine the smallest value in the array
    int smallst; //Stores smallest value
    smallst=values[0]; //Set smallest value to element 1's value
    for (count=1; count<TOTVALS; count++) {
	if (values[count]<smallst) {
	smallst=values[count];
	}
    }
    
    //Output results
    cout<<"The largest value input was "<<highest<<endl;
    cout<<"The smallest value input was "<<smallst<<endl;
    
    //Exit
    return 0;
}

