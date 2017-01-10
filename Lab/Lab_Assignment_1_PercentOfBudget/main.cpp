/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 10, 2017, 12:15 PM
 * Purpose:  Program to calculate the percentage of the Federal Budget allocated to
 * the Military and NASA
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
    float milBudg, nasaBud, totBudg, milPer, nasaPer;
    
    //Input or initialize values Here
    milBudg=6.09e11;
    nasaBud=1.9e10;
    totBudg=3.54e12;
    
    //Process/Calculations Here
    milPer=milBudg/totBudg;
    nasaPer=nasaBud/totBudg;
    
    //Output Located Here
    cout<<"The percent of the total Federal budget allocated to the Military is "<<milPer*100<<" percent"<<endl;
    cout<<"The percent of the total Federal budget allocated to NASA is "<<nasaPer*100<<" percent"<<endl;

    //Exit
    return 0;
}

