/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 18, 2017, 12:20 PM
 * Purpose:  Program that calculates the sum of all integers up to a number
 * selected by the user.
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
    int minNum=1, maxNum, num, sum;
    
    //Input or initialize values Here
    cout<<"Enter a number greater than zero, and this program will calculate ";
    cout<<"the sum of all integers up to and including that number"<<endl;
    cin>>maxNum;
    while (maxNum<0) {
        cout<<"Enter only positive numbers"<<endl; //used to prevent negative input
        cin>>maxNum;
    }
    
    //Process/Calculations Here
    for (num=maxNum; num>0; num--) {
        sum+=num; //Accumulates the total sum
    }
    
    //Output Located Here
    cout<<"The sum of all integers up to "<<maxNum<<" is "<<sum<<endl;
    

    //Exit
    return 0;
}

