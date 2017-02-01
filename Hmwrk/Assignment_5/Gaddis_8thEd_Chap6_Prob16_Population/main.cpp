/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on February 1, 2017, 1:00 PM
 * Purpose:  Program that calculates the size of a population after a selected
 * number of days.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void calcSiz(int, float, float, int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int stSize=0, yrs=0;  //initial population and number of years
    float bR=0.0, dR=0.0; //birth rate and death rate
    
    //Input or initialize values Here
    cout<<"This program will calculate the size of a population after a selected";
    cout<<" number of days."<<endl;
    cout<<"What is the population's starting size?"<<endl;
    cin>>stSize; //initial population
    while (stSize<2) {
        cout<<"Initial population must be tow or greater"<<endl; //validate input
        cin>>stSize;
    }
    cout<<"What is the annual birth rate?"<<endl;
    cin>>bR; //Birth rate
    while (bR<0) {
        cout<<"Birth rate cannot be negative."<<endl; //validate input
        cin>>bR;
    }
    bR/=100;
    cout<<"What is the annual death rate?"<<endl;
    cin>>dR; //Death rate
    while (dR<0) {
        cout<<"Death rate cannot be negative."<<endl; //validate input
        cin>>dR;
    }
    dR/=100;
    cout<<"Enter the number of years to display."<<endl;
    cin>>yrs; //number of years
    while (yrs<1) {
        cout<<"Years must be at least one."<<endl; //validate input
        cin>>yrs;
    }
    
    //Call function calcSize to determine population
    calcSiz(stSize, bR, dR, yrs);
    
    //Exit
    return 0;
}

void calcSiz(int stSize, float bR, float dR, int yrs) {
    float newPop=stSize;
    for (int count=1; count<=yrs; count++) {
        //Calculate population
        newPop=newPop+(bR*newPop)-(dR*newPop);
        
        //Output result
        cout<<bR<<endl;
        cout<<dR<<endl;
        cout<<"The population after "<<count<<" year(s) will be "<<newPop<<endl;
    }
}