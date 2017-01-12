/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 11, 2017, 8:00 PM
  Purpose:  Program to serve as a math tutor for students. Will display a random
 * addition problem, and wait until the user presses enter to display the 
 * solution.
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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    srand(static_cast<int>(time(0)));
    int rannum1, rannum2, sum;
    char ch;
    
    //Getting random numbers, Calculations
    rannum1=rand()%600+1;
    rannum2=rand()%600+1;
    sum=rannum1+rannum2;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"Add the numbers together, then press enter to check the answer"<<endl;
    cout<<rannum1<<endl;
    cout<<"+ "<<rannum2<<endl;
    cout<<"________"<<endl;
    cin.get(ch);
    cout<<sum<<endl;

    //Exit stage right!
    return 0;
}