/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 31, 2017, 7:40 PM
  Purpose: Program that determines the future value of money in a savings 
 * account.
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
float futureV(float, float, int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float initial=0.0, fv=0.0, intRate=0.0; //initial value, future value, and interest rate
    int months=0; //number of months
    
    //Input values
    cout<<"This program determines the future value of money in a savings account."<<endl;
    cout<<"Enter the starting value of the money in the account."<<endl;
    cin>>initial; //initial value
    while(initial<0) {
        cout<<"The amount cannot be negative."<<endl; //validate input
        cin>>initial;
    }
    cout<<"Enter the interest rate."<<endl;
    cin>>intRate; //Interest rate
    while (intRate<0) {
        cout<<"Interest rate cannot be negative."<<endl; //validate input
        cin>>intRate;
    }
    intRate/=100;
    cout<<"Enter the number of months."<<endl;
    cin>>months; //number of months
    while (months<1) {
        cout<<"number of months must be at least 1."<<endl; //validate input
        cin>>months;
    }
    
    //Call function futureV and output results
    fv=futureV(initial, intRate, months);
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The future value of the money after "<<months<<" months is $"<<fv<<endl;
    
    //Exit
    return 0;
}

float futureV(float initial, float intRate, int months) {
    //Declare variables
    float fValue=0.0;
    
    //Calculate future value
    fValue=initial*pow((1.0+intRate), months);
    
    //return future value
    return fValue;
}