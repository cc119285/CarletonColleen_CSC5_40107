/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 4, 2017, 7:30 PM
  Purpose: 
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
    const int NUMMON=12;    //Total number of months, size of array
    float rainFal[NUMMON];  //Array to hold rainfall
    int rCount;             //Loop counter
    
    //Input values
    //Input rainfall
    for (rCount=0; rCount<NUMMON; rCount++) {
	cout<<"Enter the rainfall in inches for month  "<<(rCount+1)<<endl;
	cin>>rainFal[rCount];
	while (rainFal[rCount]<0) {
            cout<<"Amount of rainfall cannot be negative."<<endl;
            cin>>rainFal[rCount];
	}
    }
    
    //Process Calculations
    //Calculate total rainfall for year
    int totRain=0; //Counter for total rain
    for (int rCount=0; rCount<NUMMON; rCount++) {
	totRain+=rainFal[rCount];
    }
    
    //Calculate average rainfall
    float avrgRn=0; //Stores average
    avrgRn=totRain/NUMMON;
    
    //Find highest rainfall
    int hiRain; //Stores highest value
    hiRain=rainFal[0]; //Set highest value to element 1's value
    for (rCount=1; rCount<NUMMON; rCount++) {
	if (rainFal[rCount]>hiRain) {
            hiRain=rainFal[rCount];
	}
    }
    
    //Find lowest rainfall
    int lowRain; //Stores smallest value
    lowRain=rainFal[0]; //Set lowest value to element 1's value
    for (rCount=1; rCount<NUMMON; rCount++) {
	if (rainFal[rCount]<lowRain) {
            lowRain=rainFal[rCount];
	}
    }
    
    //Output Results
    cout<<"The total rainfall for the year was "<<totRain<<" inches."<<endl;
    cout<<"The average rainfall was "<<avrgRn<<endl;
    cout<<"The highest amount of rainfall in one month was "<<hiRain<<" inches."<<endl;
    cout<<"The lowest amount of rainfall in one month was "<<lowRain<<" inches."<<endl;
    
    //Exit
    return 0;
}

