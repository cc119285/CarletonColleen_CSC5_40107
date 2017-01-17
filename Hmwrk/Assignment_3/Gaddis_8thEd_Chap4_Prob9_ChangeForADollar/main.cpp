/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 13, 2017, 10:11 AM
  Purpose:  Program that displays a game with the goal of entering an amount of
 * change that will equal a dollar in value.
 */

//System Libraries
#include <iostream>
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
    int pennies, nickles, dimes, quartrs, total;
    
    //Input values
    cout<<"This program is a game with the goal of entering an amount of change";
    cout<<" equivalent in value to that of a dollar"<<endl;
    cout<<"Enter a number of pennies, nickles, dimes, and quarters that will be ";
    cout<<"equivalent to a dollar in value"<<endl;
    cout<<"Pennies:"<<endl;
    cin>>pennies;
    cout<<"Nickles:"<<endl;
    cin>>nickles;
    cout<<"Dimes:"<<endl;
    cin>>dimes;
    cout<<"Quarters:"<<endl;
    cin>>quartrs;
    
    //Process by mapping inputs to outputs
    total=(pennies*1)+(nickles*5)+(dimes*10)+(quartrs*25);
    
    //Output values
    if (total==100) {
        cout<<"Congratulations! You won the game!"<<endl;
    } else if (total>100) {
        cout<<"The total you entered was greater than a dollar in value"<<endl;
    } else {
        cout<<"The total you entered was less than a dollar in value"<<endl;
    }
    
    //Exit stage right!
    return 0;
}