/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 13, 2017, 12:50 PM
  Purpose:  Program to determine whether a year is a leap year or not, and
 * display the number of days in a selected month.
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
    int month, year;
    
    //Input values
    cout<<"This program will display the number of days in a month, ";
    cout<<"including leap years"<<endl;
    cout<<"Enter a month in numeric form"<<endl;
    cin>>month;
    cout<<"Enter a four digit year"<<endl;
    cin>>year;
    
    //Process by mapping inputs to outputs
    
    //Output values
    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) {
        cout<<"There are 31 days in this month"<<endl;
    } else if (month==4 || month==6 || month==9 || month==11) {
        cout<<"There are 30 days in this month"<<endl;
    } else if (month==2) {
        if (((year%100)==0) && ((year%400)==0)) {
            cout<<"There are 29 days in this month! It is a leap year."<<endl;
        } else if (((year%100)==0) && ((year%400)!=0)) {
            cout<<"There are 28 days in this month"<<endl;
        } else if (((year%100)!=0) && ((year%4)==0)) {
            cout<<"There are 29 days in this month! It is a leap year."<<endl;
        } else {
            cout<<"There are 28 days in this month"<<endl;
        }
    } else {
        cout<<"The number entered for month is not a valid option. Please ";
        cout<<"select a number between 1 and 12"<<endl;
    }
    //Exit stage right!
    return 0;
}