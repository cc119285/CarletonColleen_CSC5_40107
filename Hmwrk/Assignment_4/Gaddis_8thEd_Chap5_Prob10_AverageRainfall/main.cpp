/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 19, 2017, 1:20 PM
 * Purpose:  Program to determine the average rainfall over a period of years
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
    int yrs, months=1;
    float rainMon, totRain, numMon, avgRain, yrRain=0;
    
    //Input or initialize values Here
    cout<<"This program will determine the average rainfall. Enter the number ";
    cout<<"of years"<<endl;
    cin>>yrs;
    while (yrs<1) {
        cout<<"There must be at least 1 year"<<endl;
        cin>>yrs;
    }
    numMon=yrs*12;
    
    
    //Output Located Here
    for (int year=1; year<=yrs; year++) {
        months=1;
        while (months<=12) {
            cout<<"How much rainfall in inches was there in month "<<months<<endl;
            cin>>rainMon;
            while (rainMon<0) {
                cout<<"Rainfall cannot be a negative number"<<endl;
                cin>>rainMon;
            }
            months++;
            yrRain+=rainMon;
        }
        totRain+=yrRain;
    }
    avgRain=totRain/numMon;
    cout<<"The number of months total was "<<numMon<<endl;
    cout<<"The total inches of rain was "<<totRain<<endl;
    cout<<"The average rainfall for the period was "<<avgRain<<" inches"<<endl;
    

    //Exit
    return 0;
}

