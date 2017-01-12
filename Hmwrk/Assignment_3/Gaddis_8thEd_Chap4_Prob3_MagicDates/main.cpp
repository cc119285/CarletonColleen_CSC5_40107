/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 12, 2017, 1:03 PM
 * Purpose:  This program will determine whether a chosen date is a Magic Date
 * by checking to see if the month (in numeric form) multiplied by the day is
 * equal to the two digit year.
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
    int month, day, year;
    
    //Input or initialize values Here
    cout<<"This program will determine whether a chosen date is a Magic Date"<<endl;
    cout<<"Enter the month in numeric form"<<endl;
    cin>>month;
    cout<<"Enter the day"<<endl;
    cin>>day;
    cout<<"Enter the two digit year"<<endl;
    cin>>year;
    
    //Process/Calculations Here
    
    //Output Located Here
    if (year==month*day) {
        cout<<"The day entered is a Magic Date!"<<endl;
    } else {
        cout<<"The day entered is not a Magic Date"<<endl;
    }

    //Exit
    return 0;
}

