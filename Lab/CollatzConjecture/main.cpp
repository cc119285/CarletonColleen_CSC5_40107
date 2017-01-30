/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 30, 2016, 12:25 PM
 * Purpose:  Collatz Conjecture program with and without arrays
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
    int number=0, start=0, elemnts=1;
    
    //Input or initialize values Here
    cout<<"Enter the first number"<<endl;
    cin>>start;
    number = start;
    
    //Process/Calculations Here
    cout<<number<<" ";
    do {
        if (number%2==0) {
            number/=2;
            cout<<number<<" ";
            elemnts++;
        } else {
            number=3*number+1;
            cout<<number<<" ";
            elemnts++;
        }
    } while (number>1);
    cout<<endl;
    number = start;   
    
    //Output Located Here
    cout<<"Number of elements is "<<elemnts<<endl;
    
    //Array version
    int array [elemnts];
    elemnts=1;
    do {
        array[elemnts-1] = number;
        if (number%2==0) {
            number/=2;
            elemnts++;
        } else {
            number=3*number+1;
            elemnts++;
        }
    } while (number>1);
    
    //Output array values
    for (int i = 0; i < elemnts; i++)
        cout<<array[i]<<" ";
    
    
    //Exit
    return 0;
}

