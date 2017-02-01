/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 31, 2017, 7:50 PM
  Purpose: Program to calculate the distance traveled falling down due to 
 * gravity.
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
float falDist(float, int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int time=10; //time in seconds
    float gravity=9.8, dist=0.0; //gravity and distance traveled
    
    //Explain Program
    cout<<"This program will calculate the distance traveled falling down for ";
    cout<<"each second from 1 to 10."<<endl;
    
    //Call function falDist in a for loop to get each distance
    for (int count=1; count<=time; count++) {
        dist=falDist(gravity, count);
        cout<<"Distance traveled after "<<count<<" seconds is "<<dist<<endl;
    }
    
    //Exit stage right!
    return 0;
}

float falDist(float gravity, int count) {
    float distnce;
    distnce=(1/2.0)*gravity*(count*count);
    return distnce;
}