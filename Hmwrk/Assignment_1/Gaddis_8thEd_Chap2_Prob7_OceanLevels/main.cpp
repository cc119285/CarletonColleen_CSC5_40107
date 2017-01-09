/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 8, 2017, 10:30 AM
  Purpose:  Program designed to calculate the increase in the ocean level after
 * 5, 7, and 10 years.
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
    float rising=1.5, year5, year7, year10;
    
    //Input values
    
    //Process by mapping inputs to outputs
    year5=rising*5;
    year7=rising*7;
    year10=rising*10;
    
    //Output values
    cout<<"In 5 years, the ocean's level will be "<<year5<<" millimeters higher"<<endl;
    cout<<"In 7 years, the ocean's level will be "<<year7<<" millimeters higher"<<endl;
    cout<<"In 10 years, the ocean's level will be "<<year10<<" millimeters higher"<<endl;
    
    //Exit stage right!
    return 0;
}