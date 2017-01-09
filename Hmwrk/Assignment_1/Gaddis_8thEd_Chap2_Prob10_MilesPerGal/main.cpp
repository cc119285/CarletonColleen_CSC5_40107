/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 8, 2017, 10:00 AM
  Purpose:  Program to find the miles per gallon rate of a car
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
    int gallons=15, miles=375, mipgal;
    
    //Input values
    
    //Process by mapping inputs to outputs
    mipgal=miles/gallons;
    
    //Output values
    cout<<"If a car can travel "<<miles<<" miles on "<<gallons<<" gallons of gas,";
    cout<<" the miles per gallon rate of the car is "<<mipgal<<" miles per gallon"<<endl;
    
    //Exit stage right!
    return 0;
}