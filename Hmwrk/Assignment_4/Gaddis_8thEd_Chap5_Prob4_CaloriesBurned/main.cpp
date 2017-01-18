/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 18, 2017, 12:45 PM
  Purpose:  Program that will calculate the number of calories burned every 5
 * minutes up to 30 minutes and output these values.
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
    float calories=3.6, totCal=0;
    int min;
    
    //Output values
    for (min=1; min<=30; min++) {
        totCal+=calories;
        if (min%5==0) {
            cout<<"After "<<min<<" minutes, "<<totCal<<" calories will have been burned"<<endl;
        }
    }

    //Exit
    return 0;
}