/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 11, 2017, 12:25 PM
 * Purpose:  This program calculates the paycheck, including overtime if
 * applicable.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float hours, rate, payChck;
    
    //Input or initialize values Here
    cout<<"This program calculates the paycheck, including overtime when applicable"<<endl;
    cout<<"Enter the total hours worked"<<endl;
    cin>>hours;
    cout<<"Enter the rate of pay in dollars per hour"<<endl;
    cin>>rate;
    
    //Process/Calculations Here
    if (hours>40){
        payChck=(40*rate)+((hours-40)*2*rate);
    } else {
        payChck=rate*hours;
    }
    
    //Output Located Here
    cout<<"The paycheck will be $"<<payChck<<endl;

    //Exit
    return 0;
}

