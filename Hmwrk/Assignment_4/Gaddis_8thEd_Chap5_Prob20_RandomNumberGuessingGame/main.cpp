/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 19, 2017, 1:57 PM
 * Purpose:  Program to display a random number guessing game
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

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Generate seed for random number
    srand(static_cast<int>(time(0)));
    
    //Declare all Variables Here
    int ranNum, guess;
    bool right=false;
    
    //Input or initialize values Here
    cout<<"This program will generate a random number."<<endl;
    ranNum=rand()%600+1;
    cout<<"Enter your guess"<<endl;
    cin>>guess;
    
    for (int numG=1; right==0; numG++) {
        while (guess>ranNum) {
            cout<<"Your guess was too high, try again"<<endl;
            cin>>guess;
        }
        while (guess<ranNum) {
            cout<<"Your guess was too low, try again"<<endl;
            cin>>guess;
        }
        if (guess==ranNum) {
            cout<<"Your guess is correct!"<<endl;
            right=true;
        }
    }

    //Exit
    return 0;
}

