/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 6, 2017, 5:00 PM
  Purpose: Program to display all numbers in an array that are greater than 5, 
 * using a function.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void nCalc(int[], int, int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZEN=10; //Size of the array
    int arrayN[SIZEN];  //Array to store numbers
    int n=5;            //number that the function will look for values greater than
    int nCount=0;       //Loop Counter
    
    //Explain program
    cout<<"This program will fill an array with random integers, from 1 to 20, ";
    cout<<" and display all numbers in the array that are greater than 5."<<endl;
    
    //Fill Array
    for (nCount=0; nCount<SIZEN; nCount++) {
        arrayN[nCount]=rand()%20+1; //random number, 1-20
    }
    
    //Send to function
    nCalc(arrayN, SIZEN, n);
    
    
    //Exit
    return 0;
}

void nCalc(int arrayN[], int SIZEN, int n) {
    cout<<"The numbers greater than 5 are: "<<endl;
    for (int cntrN=0; cntrN<SIZEN; cntrN++) {
        if (arrayN[cntrN]>n) {
            cout<<arrayN[cntrN]<<" ";
        }
    }
    cout<<endl;
}