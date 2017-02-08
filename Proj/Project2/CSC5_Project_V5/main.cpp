/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 7, 2017, 4:40 PM
  Purpose: A game where the user inputs a number, and a pair of dice will be 
 * rolled that amount of times. If the two dice end up on the same number after
 * the last roll, then the user guesses what the number was. If they are 
 * correct, they gain a point. Getting 5 points or more in 50 tries wins the
 * game. Alternatively, compete with other players to try to get the most 
 * points.
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
void mostOft(int, short int, short int, short int, short int, short int, short int); //Function that determines most common value
bool victory(bool, int, int); //Function that determines win/loss
void copy(int [],int [],int); //Copies array with points
void sortary(int[], int);   //Sorts array containing scores
int valsrch(int [], int, int); //Searches sorted array for point values in copy
//int fil2Ary(int[], int, int[][], int); //Function that fills 2D array

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
    int numPlrs=0;        //Number of players
    string usrName;       //User's name
    
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //File to store dice rolls
    ofstream outFile;
    outFile.open("NumbersRolled.txt"); //open file to store values of dice
    
    //Explanation of the game
    cout<<"This is a game based on luck and guessing. Two dice will be rolled ";
    cout<<"the number of times you specify. If both dice have the same "<<endl;
    cout<<"value on the last roll, you will guess what number they landed on. If you ";
    cout<<"are correct, you will get a point. Getting five or more points will";
    cout<<" win the game. You will have 50 attempts."<<endl;
    
    //Get number of players for the game
    cout<<"This game can be played by oneself or as a competition to see who can ";
    cout<<"earn the most points. Enter the number of players."<<endl;
    cin>>numPlrs;
    while (numPlrs<1) {
        cout<<"Number of players must be at least one."<<endl;
        cin>>numPlrs;
    }
    
    //Array to store points (multi-player)
    const int POINTSZ=numPlrs; //Size of array- equal to number of players
    int ptsarry[POINTSZ]={0}; //Array to store points
    string usrarry[POINTSZ]; //Array to store usernames
    
    //For each player
    for (int plyrs=1; plyrs<=numPlrs; plyrs++) {
    points=0; //re-initialize to 0 for each player
    noTries=0; //re-initialize to 0 for each player
    cin.ignore();
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
    
    //Calculate percentage of points
    percent=(static_cast<float>(points)/50)*PERCNT;
    
    if (numPlrs>1) {
        usrarry[plyrs-1]=usrName;
        ptsarry[plyrs-1]=points;
    }
    
    }
    
    //Create 2D array to connect players' names with their scores
    const int PLYRNUM=2;
    int ptsclc[POINTSZ][PLYRNUM];
    
    //Call function to fill array
    //fil2Ary(ptsarry, POINTSZ, ptsclc, PLYRNUM);
    
    //State results of the game
    //For single player
    if (numPlrs==1) {
        //Call function to display what value appeared most often
        mostOft(value, ones, twos, threes, fours, fives, sixes);
    
        //Calculate percentage of points
        percent=(static_cast<float>(points)/50)*PERCNT;
        
        //Calculate win/loss
        //Call function victory
        victory(win, points, pts2win);
    
        //Output results of the game
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
    
    }
    
    //For multiple players
    if (numPlrs>1) {
        //Create copy of array to sort
        int ptscopy[POINTSZ];
        //Copy ptsarry to ptscopy
        copy(ptsarry, ptscopy, POINTSZ);
        
        //Sort scores from highest to lowest
        sortary(ptsarry, POINTSZ);
        //Search sorted array for values in copy
        int val; //Value searched for in swapped array
        int usrval; //Stores location of value in swapped array
        string usrcopy[POINTSZ]; //array to hold swapped usernames
        for (int valsch=0; valsch<POINTSZ; valsch++) {
            val=ptscopy[valsch]; //location in original
            usrval=valsrch(ptsarry, POINTSZ, val); //location in swapped
            usrcopy[usrval]=usrarry[valsch];
        }
        
        //Display scores
        cout<<"The scores are:"<<endl;
        for (int scorcnt=0; scorcnt<POINTSZ; scorcnt++) {
            cout<<setw(8)<<usrcopy[scorcnt]<<setw(5)<<ptsarry[scorcnt]<<endl;
        }
    }
    
    
    //Exit
    return 0;
}

int valsrch(int ptsarry[], int POINTSZ, int val) {
    //Declare
    int beg=0,middle,end=POINTSZ-1;
    //Loop until found
    do{
        middle=(beg+end)/2;
        if(ptsarry[middle]==val)return middle;
        if(ptsarry[middle]<val){
            beg=middle+1;
        }else{
            end=middle-1;
        } 
    }while(beg<=end);
    return -1;
}

void copy(int ptsarry[], int ptscopy[], int POINTSZ) {
    for(int i=0;i<POINTSZ;i++){
        ptscopy[i]=ptsarry[i];
    }
}

void sortary(int ptsarry[], int POINTSZ) {
    bool swap;
    int temp;
    do {
        swap=false;
        for (int count=0; count<(POINTSZ-1); count++) {
            if (ptsarry[count]<ptsarry[count+1]) {
                temp=ptsarry[count];
                ptsarry[count]=ptsarry[count+1];
                ptsarry[count+1]=temp;
                swap=true;
            }
        }
    } while (swap);
}

/*
int fil2Ary(int ptsarry[], int POINTSZ, int ptsclc[][], int PLYRNUM) {
    for (int filcnt=0; filcnt<POINTSZ; filcnt++) {
        ptsclc[filcnt][0]=ptsarry[filcnt];
        ptsclc[filcnt][1]=filcnt+1;
        cout<<ptsclc[filcnt][0]<<" "<<ptsclc[filcnt][1]<<" ";
    }
}
*/

bool victory(bool win, int points, int pts2win) {
    win=false;
    if (isgreater(points,pts2win)) {
        win=true; //set bool to true if user won the game
    }
    return win;
}

void mostOft(int value, short int ones, short int twos, short int threes, short int fours, short int fives, short int sixes) {
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
    
    //Close file
    inFile.close();
}