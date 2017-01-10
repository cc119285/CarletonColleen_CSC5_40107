/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 10, 2017, 1:00 PM
 * Purpose:  Program that calculates the averages of 5 tests
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
    float test1, test2, test3, test4, test5, sum, average;
    
    //Input or initialize values Here
    cout<<"This program calculates the average of five tests"<<endl;
    cout<<"Enter the score of Test 1"<<endl;
    cin>>test1;
    cout<<"Enter the score of Test 2"<<endl;
    cin>>test2;
    cout<<"Enter the score of Test 3"<<endl;
    cin>>test3;
    cout<<"Enter the score of Test 4"<<endl;
    cin>>test4;
    cout<<"Enter the score of Test 5"<<endl;
    cin>>test5;
    
    //Process/Calculations Here
    sum=test1+test2+test3+test4+test5;
    average=sum/5;
            
    //Output Located Here
    cout<<setprecision(1)<<fixed<<showpoint;
    cout<<"The average of the test scores is "<<average<<endl;

    //Exit
    return 0;
}

