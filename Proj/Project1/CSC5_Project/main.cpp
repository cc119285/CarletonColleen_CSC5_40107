/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 27, 2017, 12:50 PM
  Purpose: A game where the user inputs a number, and a pair of dice will be 
 * rolled that amount of times. If the two dice end up on the same number after
 * the last roll, then the user guesses what the number was. If they are 
 * correct, they gain a point. Getting 10 points or more in 50 tries wins the
 * game.
 */

//System Libraries
#include <iostream> //Input Output Library
#include <ctime>    //Time (for random dice rolls) Library
#include <cstdlib>  //Seed for random number generator
#include <iomanip>  //to set decimal points
#include <fstream>  //Input/Output to files library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const int PERCNT=100; //Global constant for percent

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    unsigned int numRoll; //number of times to roll dice
    char die1=0, die2=0;  //dice
    int noTries=0;        //number of tries (out of 50)
    int guess=0;          //guess (for when dice rolled are equal)
    int points=0;         //number of points the user has
    float percent=0.0;    //Percentage of points out of attempts
    
    //Explanation of the game and getting the number of rolls for attempt 1
    cout<<"This is a game based on luck and guessing. Two dice will be rolled ";
    cout<<"the number of times you specify. If both dice have the same "<<endl;
    cout<<"value on the last roll, you will guess what number they landed on. If you ";
    cout<<"are correct, you will get a point. Getting ten or more points will";
    cout<<" win the game. You will have 50 attempts."<<endl;
    cout<<"Enter the number of times you want to roll the dice for your first try"<<endl;
    cin>>numRoll;
    
    //do-while loop for the dice roll & guessing
    do {
        //First, roll the dice the specified number of times
        for (int rollDie=1; rollDie<=numRoll; rollDie++) {
           die1=rand()%6+1; //(1,6)
           die2=rand()%6+1; //(1,6)
        }
        noTries++; //increment number of tries
        //Now, check to see if the dice have equal values
        if (die1==die2) {
            //if dice have same value
            cout<<"The dice were the same number. Guess what number it was."<<endl;
            cin>>guess; //input the user's guess
            //Validate user's guess
            while (guess<0 || guess>6) {
                cout<<"Guess is invalid. It must be between 1 and 6"<<endl;
                cin>>guess;
            }
            //Check guess to see if it was correct
            if (guess==die1) {
                cout<<"You are correct! You have gained a point."<<endl; //correct guess
                points++; //increment points
            } else {
                cout<<"Your guess was incorrect."<<endl; //incorrect guess
            }
        } else if (die1!=die2) {
            cout<<"The value of the dice was not the same."<<endl; //if dice do not have same value
        }
        //ask for next number of dice rolls
        cout<<"Input the number of times you want to roll the dice"<<endl;
        cin>>numRoll; //input number of rolls
    } while (noTries<=50);
    
    //Calculate percentage of points
    percent=(static_cast<float>(points)/50)*PERCNT;
    
    //State results of the game
    if (points>=10) {
        //if user won the game
        cout<<"You won the game!"<<endl;
        cout<<"You earned "<<points<<" points."<<endl; //output total points
    }
    if (points<10) {
        //if user lost the game
        cout<<"You did not win. Points earned: "<<points<<endl; //output total points
    }
    
    //Output percentage of points out of total points
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The percentage of points earned out of total attempts was "<<percent<<endl;
    
    //Exit
    return 0;
}