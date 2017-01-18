/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 18, 2017, 1:10 PM
  Purpose:  Program that determines the salary of a person who earns 1 penny
 * the first day, 2 pennies the second day, and so on. Days worked is input
 * by the user.
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    int days, counter;
    float penny=1, total=1;
    
    //Input values
    cout<<"This program will determine the salary of a person who earns one ";
    cout<<"penny the first day, two the second day, and so on"<<endl;
    cout<<"Enter the number of days worked"<<endl;
    cin>>days;
    while (days<1) {
        cout<<"The number of days worked must be at least 1"<<endl;
        cin>>days;
    }
    
    //Output values
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Days      Salary"<<endl;
    cout<<"----------------"<<endl;
    for (counter=1; counter<=days; counter++) {
        if (counter==1) {
            cout<<counter<<"          "<<(penny/100)<<endl;
        } else {
            total*=2;
            cout<<counter<<"          "<<(total/100)<<endl;
        }
    }
    cout<<"The total salary will be $"<<(total/100)<<endl;

    //Exit
    return 0;
}