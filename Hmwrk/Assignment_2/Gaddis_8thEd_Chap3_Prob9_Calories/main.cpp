/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 11, 2017, 1:20 PM
 * Purpose:  Program to calculate the number of calories consumed after eating
 * a certain amount of cookies.
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
    int cookies, totCal;
    
    //Initial calculations
      //30/10=3 (number of cookies/number of servings; per bag)
      //1 serving = 300 calories, and 3 cookies, so 300/3=100 each cookie is 100 calories.
    
    //Input or initialize values Here
    cout<<"This program will calculate the number of calories consumed for the amount of cookies, out of 30, eaten"<<endl;
    cout<<"Enter the number of cookies eaten"<<endl;
    cin>>cookies;
    
    //Process/Calculations Here
    totCal=cookies*100;
    
    //Output Located Here
    cout<<"The total number of calories consumed after eating "<<cookies<<" cookies is "<<totCal<<endl;

    //Exit
    return 0;
}

