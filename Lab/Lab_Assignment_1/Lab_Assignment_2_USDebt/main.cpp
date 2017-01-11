/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 10, 2017, 12:35 PM
 * Purpose:  Program used to calculate the debt per person in the United States
 * in 2016 and 2008
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float debt16, debt08, pop16, pop08, dpp16, dpp08;
    
    //Input or initialize values Here
    debt16=1.95e13;
    debt08=1.06e13;
    pop16=3.24e8;
    pop08=3.04e8;
    
    //Process/Calculations Here
    dpp16=debt16/pop16;
    dpp08=debt08/pop08;
    
    //Output Located Here
    cout<<"The debt per person of the United States in 2008 was "<<dpp08<<endl;
    cout<<"The debt per person of the United States in 2016 was "<<dpp16<<endl;

    //Exit
    return 0;
}

