/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 12, 2017, 12:55 PM
 * Purpose:  Program to determine which of two numbers is smaller and
 * which is larger.
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
    int num1, num2;
    
    //Input or initialize values Here
    cout<<"This program will determine which of two numbers is larger, and which is smaller"<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    
    //Process/Calculations Here
    
    //Output Located Here
    if (num1>num2) {
        cout<<num1<<" is larger"<<endl;
        cout<<num2<<" is smaller"<<endl;
    } else {
        cout<<num1<<" is smaller"<<endl;
        cout<<num2<<" is larger"<<endl;
    }

    //Exit
    return 0;
}

