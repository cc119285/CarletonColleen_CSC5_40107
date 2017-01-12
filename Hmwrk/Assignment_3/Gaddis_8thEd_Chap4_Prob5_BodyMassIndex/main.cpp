/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 12, 2017, 1:30 PM
 * Purpose:  Program to determine, using the body mass index,
 * whether a person is underweight, overweight, or an optimal weight.
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
    float weight, height, bmi;
    
    //Input or initialize values Here
    cout<<"This program will determine whether someone is underweight, overweight, or an optimal weight"<<endl;
    cout<<"Enter a weight in pounds"<<endl;
    cin>>weight;
    cout<<"Enter a height in inches"<<endl;
    cin>>height;
    
    //Process/Calculations Here
    bmi=(weight*703)/(height*height);
    
    //Output Located Here
    if (bmi>18.5&&bmi<25){
        cout<<"This is an optimal weight"<<endl;
    } else if (bmi<18.5) {
        cout<<"This person is underweight"<<endl;
    } else {
        cout<<"This person is overweight"<<endl;
    }

    //Exit
    return 0;
}

