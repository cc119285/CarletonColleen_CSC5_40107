/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 1, 2017, 5:40 PM
  Purpose: Program that determines the costs associated with a painting job.
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
void calc(float, int);
float numSqFt(int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float galPrc=0.0; //price of a gallon of paint
    int numRoom, wllSpac; //number of rooms and square feet of walls
    
    //Input values
    cout<<"This program determines the costs associated with a painting job."<<endl;
    cout<<"Enter the number of rooms to be painted."<<endl;
    cin>>numRoom; //get number of rooms
    while (numRoom<1) {
        cout<<"There must be at least 1 room."<<endl; //validate input
        cin>>numRoom;
    }
    //Use function numSqFt to gain the total number of square feet
    wllSpac=numSqFt(numRoom);
    cout<<"What is the price of a gallon of paint?"<<endl;
    cin>>galPrc; //price of a gallon of paint
    while (galPrc<10.00) {
        cout<<"Price must be at least $10.00"<<endl;
        cin>>galPrc;
    }
    
    //Process Calculations using function calc
    calc(galPrc, wllSpac);
    
    //Exit
    return 0;
}

void calc(float galPrc, int wllSpac) {
    //Declare Variables
    int hours; //number of hours to work
    float galReq, labor, totCost; //require gallons of paint, cost of labor, and total cost
    
    //Calculations
    hours=(wllSpac/110)*8;
    galReq=(wllSpac/110)*1;
    labor=hours*25.00;
    totCost=labor+(galReq*galPrc);
    
    //Display costs
    cout<<"The amount of gallons of pain required is "<<galReq<<" gallons."<<endl;
    cout<<"The amount of hours that will be worked is "<<hours<<" hours."<<endl;
    cout<<"The price of a gallon of paint is $"<<galPrc<<endl;
    cout<<"The cost of labor will be $"<<labor<<endl;
    cout<<"The total cost for this paint job will be $"<<totCost<<endl;
}

float numSqFt(int numRoom) {
    //Declare variables
    int totSqFt=0, sqft=0;
    
    //Get square feet per room and total
    for (int count=1; count<=numRoom; count++) {
        cout<<"Enter the number of square feet to be painted in room "<<count<<endl;
        cin>>sqft;
        while (sqft<0) {
            cout<<"Value cannot be negative."<<endl;
            cin>>sqft;
        }
        totSqFt+=sqft;
    }
    
    //Return total Square Feet
    return totSqFt;
}