/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 11, 2017, 1:38 PM
 * Purpose:  Program to convert US dollars into Japanese yen, and Euros.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float YEN_PER_DOLLAR=98.93;
const float EUROS_PER_DOLLAR=0.74;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float dollars, totYen, totEuro;
    
    //Input or initialize values Here
    cout<<"This program converts dollar amounts to yen and euros"<<endl;
    cout<<"Enter a dollar amount"<<endl;
    cin>>dollars;
    
    //Process/Calculations Here
    totYen=dollars*YEN_PER_DOLLAR;
    totEuro=dollars*EUROS_PER_DOLLAR;
    
    //Output Located Here
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<dollars<<" is equivalent to "<<totYen<<" yen and "<<totEuro<<" Euros"<<endl;

    //Exit
    return 0;
}

