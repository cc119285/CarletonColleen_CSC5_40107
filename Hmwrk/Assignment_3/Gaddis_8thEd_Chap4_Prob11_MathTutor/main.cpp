/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 13, 2017, 12:50 PM
  Purpose: Program that will display an addition problem for the user to solve. 
 * If they are correct, it will state that they were right. Otherwise, it will
 * display the correct answer.
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
    int rannum1, rannum2, sum, ans;
    char ch;
    
    //Input values
    rannum1=rand()%600+1;
    rannum2=rand()%600+1;
    sum=rannum1+rannum2;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"Add the numbers together, then input the result to check your answer"<<endl;
    cout<<rannum1<<endl;
    cout<<"+ "<<rannum2<<endl;
    cout<<"________"<<endl;
    cin>>ans;
    
    if (ans==sum) {
        cout<<"That answer is correct!"<<endl;
    } else {
        cout<<"That answer is incorrect. The correct answer is "<<sum<<endl;
    }
    
    //Exit stage right!
    return 0;
}