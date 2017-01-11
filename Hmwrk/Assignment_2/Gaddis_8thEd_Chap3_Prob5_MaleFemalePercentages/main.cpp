/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 11, 2017, 12:47 PM
 * Purpose:  Program to calculate the percentage of males and females in a class.
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
    int males, females; 
    float classn, perM, perF;
    
    //Input or initialize values Here
    cout<<"This program calculates the percentage of males and females in a class"<<endl;
    cout<<"Enter the number of males"<<endl;
    cin>>males;
    cout<<"Enter the number of females"<<endl;
    cin>>females;
    
    //Process/Calculations Here
    classn=males+females;
    perM=males/classn;
    perF=females/classn;
    
    //Output Located Here
    cout<<"The percentage of males is "<<perM*100<<" percent"<<endl;
    cout<<"The percentage of females is "<<perF*100<<" percent"<<endl;

    //Exit
    return 0;
}

