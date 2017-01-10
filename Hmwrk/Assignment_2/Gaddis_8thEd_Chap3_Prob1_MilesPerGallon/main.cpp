/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 10, 2017, 12:04 PM
 * Purpose:  Program that calculates the amount of miles a car can drive per gallon of gas.
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
    float miles, gallons, mipgal;
    
    //Input or initialize values Here
    cout<<"This program calculates the amount of miles a car can drive per gallon of gas."<<endl;
    cout<<"Enter the number of gallons of gas the car can hold."<<endl;
    cin>>gallons;
    cout<<"Enter the number of miles that can be driven on a full tank of gas"<<endl;
    cin>>miles;
    
    //Process/Calculations Here
    mipgal=miles/gallons;
            
    //Output Located Here
    cout<<mipgal<<" miles may be driven on one gallon of gas"<<endl;

    //Exit
    return 0;
}

