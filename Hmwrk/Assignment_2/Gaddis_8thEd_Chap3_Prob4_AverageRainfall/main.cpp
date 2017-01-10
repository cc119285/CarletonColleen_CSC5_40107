/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 10, 2017, 1:30 PM
 * Purpose:  Program used to calculate the average rainfall in inches of three months
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string month1, month2, month3;
    float rain1, rain2, rain3, average;
    
    //Input or initialize values Here
    cout<<"This program calculates the average rainfall of three months"<<endl;
    cout<<"Enter the first month"<<endl;
    cin>>month1;
    cout<<"Enter the first month's rainfall"<<endl;
    cin>>rain1;
    cout<<"Enter the second month"<<endl;
    cin>>month2;
    cout<<"Enter the second month's rainfall"<<endl;
    cin>>rain2;
    cout<<"Enter the third month"<<endl;
    cin>>month3;
    cout<<"Enter the third month's rainfall"<<endl;
    cin>>rain3;
    
    //Process/Calculations Here
    average=(rain1+rain2+rain3)/3;
            
    //Output Located Here
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<" and "<<month3<<" is "<<average<<" inches"<<endl;

    //Exit
    return 0;
}

