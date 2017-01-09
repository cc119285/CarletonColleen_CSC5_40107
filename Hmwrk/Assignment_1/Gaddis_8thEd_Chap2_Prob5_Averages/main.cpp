/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 8, 2017, 10:30 AM
  Purpose:  Program to find the average of a set of numbers.
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
    int val1=28, val2=32, val3=37, val4=24, val5=33, sum, average;
    
    //Input values
    
    //Process by mapping inputs to outputs
    sum=val1+val2+val3+val4+val5;
    average=sum/5;
            
    //Output values
    cout<<"The average of "<<val1<<", "<<val2<<", "<<val3<<", "<<val4<<" and ";
    cout<<val5<<" is "<<average<<endl;
    
    //Exit stage right!
    return 0;
}