/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on February 2, 2017, 11:45 AM
 * Purpose:  Program that simulates a game of Rock, Paper, Scissors.
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int cChoice(); //Function to get the computer's choice
int uChoice(); //Function to get the user's choice
int showWin(int, int, int); //Function to display the winner

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int compRPS=0, userRPS=0, tie=1; //stores computer's choice, user's choice, and number of ties
    
    //Explanation of game
    cout<<"This program simulates a game of Rock, Paper, Scissors."<<endl;
    
    //Call functions to play game
    do {
        tie--;
        compRPS=cChoice();
        userRPS=uChoice();
        tie=showWin(compRPS, userRPS, tie); 
    } while (tie>0); //Check for whether another round must take place
    
    //Exit
    return 0;
}

int cChoice() {
    //Get random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int compC;
    
    //Determine computer's choice
    compC=rand()%3+1; //(1, 3)
    
    //Return computer's choice
    return compC;
}

int uChoice() {
    //Declare variables
    int choice;
    
    //Get user's choice
    cout<<"Choose between Rock, Paper, and Scissors."<<endl;
    cout<<"1. Rock"<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. Scissors"<<endl;
    cin>>choice;
    //Validate input
    while (choice<1 || choice>3) {
        cout<<"Input must be between 1 and 3."<<endl;
    }
    
    //Return choice
    return choice;
}

int showWin(int compRPS, int userRPS, int tie) {
    //Determine computer's choice of Rock, Paper, or Scissors
    switch (compRPS) {
        case 1: cout<<"The computer chose Rock."<<endl; break;
        case 2: cout<<"The computer chose Paper."<<endl; break;
        case 3: cout<<"The computer chose Scissors."<<endl; break;
        default: break;
    }
    
    //Determine winner
    if (compRPS==1) {
        if (userRPS==1) {
            cout<<"Both chose Rock. A tie has occurred. Try again!"<<endl;
            tie++;
        } else if (userRPS==2) {
            cout<<"You won! Paper beats Rock."<<endl;
        } else if (userRPS==3) {
            cout<<"You lost. Rock beats Scissors."<<endl;
        } else {
            cout<<"Error"<<endl;
        }
    } else if (compRPS==2) {
        if (userRPS==1) {
            cout<<"You lost. Paper beats Rock."<<endl;
        } else if (userRPS==2) {
            cout<<"Both chose Paper. A tie has occurred. Try again!"<<endl;
            tie++;
        }  else if (userRPS==3) {
            cout<<"You won! Scissors beats Paper."<<endl;
        } else {
            cout<<"Error"<<endl;
        }
    } else if (compRPS==3) {
        if (userRPS==1) {
            cout<<"You won! Rock beats Scissors."<<endl;
        } else if (userRPS==2) {
            cout<<"You lost. Scissors beats Paper."<<endl;
        }  else if (userRPS==3) {
            cout<<"Both chose Scissors. A tie has occurred. Try again!"<<endl;
            tie++;
        } else {
            cout<<"Error"<<endl;
        }
    } else {
        cout<<"Error"<<endl;
    }
    //return tie
    return tie;
}