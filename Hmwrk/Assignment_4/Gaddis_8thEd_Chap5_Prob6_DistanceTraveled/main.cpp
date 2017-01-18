/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 18, 2017, 12:56 PM
  Purpose:  Program that will calculate the distance traveled in each hour 
 * based on a speed and travel time provided by the user.
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
    float dist, speed;
    int time;
    
    //Input values
    cout<<"This program will display the distance traveled in each hour"<<endl;
    cout<<"Enter the speed of the vehicle"<<endl;
    cin>>speed;
    while (speed<0) {
        cout<<"Enter only nonnegative numbers for the speed"<<endl;
        cin>>speed;
    }
    cout<<"Enter the time spent traveling in hours"<<endl;
    cin>>time;
    while (time<1) {
        cout<<"The time must at least 1 hour"<<endl;
        cin>>time;
    }
    
    //Output values
    cout<<"Hour    Distance traveled"<<endl;
    cout<<"-------------------------"<<endl;
    for (int hour=1; hour<=time; hour++) {
        dist=hour*speed;
        cout<<hour<<"        "<<dist<<endl;
    }

    //Exit stage right!
    return 0;
}