/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 11, 2017, 1:30 PM
 * Purpose:  Program to convert temperatures in Celsius to Fahrenheit
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
    float celsius, fahren;
    
    //Input or initialize values Here
    cout<<"This program will convert temperatures in Celsius to Fahrenheit"<<endl;
    cout<<"Enter the temperature in degrees Celsius"<<endl;
    cin>>celsius;
    
    //Process/Calculations Here
    fahren=(9/5)*celsius+32;
    
    //Output Located Here
    cout<<celsius<<" degrees Celsius is equivalent to "<<fahren<<" degrees Fahrenheit"<<endl;

    //Exit
    return 0;
}

