/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 19, 2017, 1:35 PM
 * Purpose:  Program to determine the population of organisms after a certain 
 * number of days.
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
    int populat, inPop, avgInc, days, totPop;
    
    //Input or initialize values Here
    cout<<"Enter the starting size of the population"<<endl;
    cin>>inPop;
    while (inPop<2) {
        cout<<"Initial population must be at least 2"<<endl;
        cin>>inPop;
    }
    cout<<"Enter the percentage of the average daily population increase"<<endl;
    cin>>avgInc;
    while(avgInc<0) {
        cout<<"Negative numbers are not valid"<<endl;
        cin>>avgInc;
    }
    cout<<"Enter the number of days"<<endl;
    cin>>days;
    while (days<1) {
        cout<<"The number of days cannot be less than 1"<<endl;
        cin>>days;
    }
    
    //Output Located Here
    for (int numDays=1; numDays<=days; numDays++) {
        populat=inPop+(avgInc*numDays);
        totPop+=populat;
        cout<<"On day "<<numDays<<" the population will be "<<totPop<<endl;
    }
    

    //Exit
    return 0;
}

