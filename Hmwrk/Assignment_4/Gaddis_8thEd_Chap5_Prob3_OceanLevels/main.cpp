/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 18, 2017, 12:33 PM
  Purpose:  Program to calculate how much the ocean level will have risen
 * after 25 years using the rate of 1.5 millimeters a year.
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
    int years;
    float rate=1.5, total=0;
    
    //Output values
    cout<<"Years   Millimeters risen"<<endl;
    cout<<"-------------------------"<<endl;
    for (years=1; years<=25; years++) {
        total+=rate;
        cout<<years<<"        "<<total<<" millimeters"<<endl;
    }

    //Exit
    return 0;
}