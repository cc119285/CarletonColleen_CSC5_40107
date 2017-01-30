/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 29, 2017, 4:40 PM
  Purpose: A game where the user inputs a number, and a pair of dice will be 
 * rolled that amount of times. If the two dice end up on the same number after
 * the last roll, then the user guesses what the number was. If they are 
 * correct, they gain a point. Getting 5 points or more in 50 tries wins the
 * game.
 */

//System Libraries
#include <iostream> //Input Output Library
#include <ctime>    //Time (for random dice rolls) Library
#include <cstdlib>  //Seed for random number generator
#include <iomanip>  //to set decimal points
#include <fstream>  //Input/Output to files library
#include <cmath>    //Math Library
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
    int value=0;          //checks the value of each dice roll
    short int ones=0, twos=0, threes=0, fours=0, fives=0, sixes=0; //stores amount of each value
    bool win=false;       //used to check for wins or losses
    int pts2win=5;        //number of points needed to win
    string usrName;       //User's name
    
    //File to store dice rolls
    ofstream outFile;
    outFile.open("NumbersRolled.txt"); //open file to store values of dice
    
    //Explanation of the game and getting the user's name and number of rolls for attempt 1
    cout<<"This is a game based on luck and guessing. Two dice will be rolled ";
    cout<<"the number of times you specify. If both dice have the same "<<endl;
    cout<<"value on the last roll, you will guess what number they landed on. If you ";
    cout<<"are correct, you will get a point. Getting five or more points will";
    cout<<" win the game. You will have 50 attempts."<<endl;
    cout<<"Enter your name."<<endl;
    getline(cin,usrName); //user's name
    cout<<"Enter the number of times you want to roll the dice for your first try"<<endl;
    cin>>numRoll; //first roll

    
    //do-while loop for the dice roll & guessing
    do {
        //First, roll the dice the specified number of times
        for (int rollDie=1; rollDie<=numRoll; rollDie++) {
           die1=rand()%6+1; //(1,6)
           die2=rand()%6+1; //(1,6)
           outFile<<die1<<" "<<die2<<endl; //output values to file
        }
        noTries++; //increment number of tries
        outFile<<endl; //a space between sets of values in file
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
    
    //Close file
    outFile.close();
    
    //Open file to read in values
    ifstream inFile;
    inFile.open("NumbersRolled.txt");
    
    //Take values from the file and determine how many times each appeared
    while (inFile>>value) {
        switch (value) {
            case 1: ones++; break; //increment ones if value is a 1
            case 2: twos++; break; //increment twos if value is a 2
            case 3: threes++; break; //increment threes if value is a 3
            case 4: fours++; break;  //increment fours if value is a 4
            case 5: fives++; break;  //increment fives if value is a 5
            case 6: sixes++; break;  //increment sixes if value is a 6
            default: cout<<"Failure at switch"<<endl; break; //default
        }
    }
    
    //Determine which value appeared most and output results
    if (sixes>fives && sixes>fours && sixes>threes && sixes>twos && sixes>ones) {
        cout<<"Six appeared most often."<<endl;
    } else if (fives>sixes && fives>fours &&fives>threes && fives>twos && fives>ones) {
        cout<<"Five appeared most often."<<endl;
    } else if (fours>sixes && fours>fives && fours>threes && fours>twos &&fives>ones) {
        cout<<"Four appeared most often."<<endl;
    } else if (threes>sixes && threes>fives &&threes>fours && threes>twos && threes>ones) {
        cout<<"Three appeared most often."<<endl;
    } else if (twos>sixes && twos>fives && twos>fours &&twos>threes && twos>ones) {
        cout<<"Two appeared most often."<<endl;
    } else {
        cout<<"One appeared most often."<<endl;
    }
    
    //Calculate percentage of points
    percent=(static_cast<float>(points)/50)*PERCNT;
    
    //Calculate win/loss
    if (isgreater(points,pts2win)) {
        win=true; //set bool to true if user won the game
    }
    
    //State results of the game
    if (win==true) {
        //if user won the game
        cout<<"Congratulations "<<usrName<<"! ";
        cout<<"You won the game!"<<endl;
        cout<<"You earned "<<points<<" points."<<endl; //output total points
    }
    if (win==false) {
        //if user lost the game
        cout<<"You did not win. Points earned: "<<points<<endl; //output total points
    }
    
    //Output percentage of points out of total points
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The percentage of points earned out of total attempts was "<<percent<<endl;
    
    //Close file
    inFile.close();
    
    //Exit
    return 0;
}