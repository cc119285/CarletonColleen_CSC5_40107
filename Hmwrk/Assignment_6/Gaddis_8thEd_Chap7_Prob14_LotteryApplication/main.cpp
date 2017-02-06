/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 5, 2017, 7:30 PM
  Purpose: Program designed to simulate a lottery, where a random number is 
 * chosen and the player attempts to enter the same number to win
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
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int LOTSIZE=5; //Size of lottery array
    int lottery[LOTSIZE]; //Array to hold lottery numbers
    int user[LOTSIZE];     //Array to hold user's lottery numbers
    int lotnmct;                   //Loop counter
    int lotsame=0;	  //Increment counter for same value
    int lotnsm=0;	  //Increment counter for different values

    //Input values
    //Get random lottery number
    for (lotnmct=0; lotnmct<LOTSIZE; lotnmct++) {
	lottery[lotnmct]=rand()%9; //value from 0-9
    }
    //User inputs their numbers
    cout<<"You will enter a five digit number for your lottery number, one digit at a time."<<endl;
    for (lotnmct=0; lotnmct<LOTSIZE; lotnmct++) {
	cout<<"Enter a value from 0 to 9."<<endl;
	cin>>user[lotnmct];
    }
    
    //Process Calculations
    //Find how many numbers were the same
    for (lotnmct=0; lotnmct<LOTSIZE; lotnmct++) {
	if (lottery[lotnmct]==user[lotnmct]) {
		lotsame++;
	} else {
		lotnsm++;
	}
    }
    
    //Output the lottery number
    for (lotnmct=0; lotnmct<LOTSIZE; lotnmct++) {
	cout<<lottery[lotnmct]<<" ";
    }
    cout<<endl; //End line after lottery number
    //Output number of same values, and whether they were correct
    cout<<"Of the five values, "<<lotsame<<" of your values matched the lottery number."<<endl;
    if (lotsame==5) {
	cout<<"You are the Grand Prize Winner!"<<endl;
    }
    
    //Exit
    return 0;
}

