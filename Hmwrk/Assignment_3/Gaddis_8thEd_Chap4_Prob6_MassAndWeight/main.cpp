/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 13, 2017, 9:43 AM
  Purpose:  Program to calculate the weight of an object using its mass.
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
    float mass, weight;
    
    //Input values
    cout<<"This program will calculate the weight of an object using its mass"<<endl;
    cout<<"Enter the mass of the object"<<endl;
    cin>>mass;
    
    //Process by mapping inputs to outputs
    weight=mass*9.8;
    
    //Output values
    if (weight<10) {
        cout<<"The object is too light"<<endl;
    } else if (weight>1000) {
        cout<<"The object is too heavy"<<endl;
    } else {
        cout<<"The object weighs "<<weight<<" newtons"<<endl;
    }
    //Exit stage right!
    return 0;
}