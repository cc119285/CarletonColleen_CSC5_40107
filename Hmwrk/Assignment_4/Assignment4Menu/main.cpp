/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 19, 2017, 8:00 PM
  Purpose:  Menu for Assignment 4
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1 (Sum of Numbers)"<<endl;
        cout<<"Type 2 for Problem 2 (Ocean Levels)"<<endl;
        cout<<"Type 3 for Problem 3 (Calories Burned)"<<endl;
        cout<<"Type 4 for Problem 4 (Distance Traveled)"<<endl;
        cout<<"Type 5 for Problem 5 (Pennies for Pay)"<<endl;
        cout<<"Type 6 for Problem 6 (Hotel Occupation)"<<endl;
        cout<<"Type 7 for Problem 7 (Average Rainfall)"<<endl;
        cout<<"Type 8 for Problem 8 (Population)"<<endl;
        cout<<"Type 9 for Problem 9 (Random Number Guessing Game)"<<endl;
        cout<<"Type 0 to exit the program"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                //Declare all Variables Here
                int minNum=1, maxNum, num, sum1=0;
    
                //Input or initialize values Here
                cout<<"Enter a number greater than zero, and this program will calculate ";
                cout<<"the sum of all integers up to and including that number"<<endl;
                cin>>maxNum;
                while (maxNum<0) {
                   cout<<"Enter only positive numbers"<<endl; //used to prevent negative input
                   cin>>maxNum;
                }
    
               //Process/Calculations Here
                for (num=maxNum; num>0; num--) {
                sum1+=num; //Accumulates the total sum
                }
    
               //Output Located Here
               cout<<"The sum of all integers up to "<<maxNum<<" is "<<sum1<<endl;
               break;
            }
            case '2':{
                //Declare Variables
                int years;
                float rate=1.5, total=0;
    
                //Output values
                cout<<"Years   Millimeters risen"<<endl;
                cout<<"-------------------------"<<endl;
                for (years=1; years<=25; years++) {
                    total+=rate;
                    cout<<years<<"        "<<total<<" millimeters"<<endl;
                }
                break;
            }
            case '3':{
            //Declare Variables
            float calories=3.6, totCal=0;
            int min;
    
            //Output values
            for (min=1; min<=30; min++) {
            totCal+=calories;
            if (min%5==0) {
                cout<<"After "<<min<<" minutes, "<<totCal<<" calories will have been burned"<<endl;
            }
            }
                break;
            }
            case '4': {
                //Declare Variables
                float dist, speed;
                int time;
    
                //Input values
                cout<<"This program will display the distance traveled in each hour"<<endl;
                cout<<"Enter the speed of the vehicle"<<endl;
                cin>>speed;
                while (speed<0) {
                    cout<<"Enter only nonnegative numbers for the speed"<<endl;
                    cin>>speed;
                }
                cout<<"Enter the time spent traveling in hours"<<endl;
                cin>>time;
                while (time<1) {
                    cout<<"The time must at least 1 hour"<<endl;
                    cin>>time;
                }
    
                //Output values
                cout<<"Hour    Distance traveled"<<endl;
                cout<<"-------------------------"<<endl;
                for (int hour=1; hour<=time; hour++) {
                    dist=hour*speed;
                    cout<<hour<<"        "<<dist<<endl;
                }
                break;
            }
            case '5': {
                //Declare Variables
                int days, counter;
                float penny=1, total=1;
    
                //Input values
                cout<<"This program will determine the salary of a person who earns one ";
                cout<<"penny the first day, two the second day, and so on"<<endl;
                cout<<"Enter the number of days worked"<<endl;
                cin>>days;
                while (days<1) {
                     cout<<"The number of days worked must be at least 1"<<endl;
                     cin>>days;
                }
    
                //Output values
                cout<<setprecision(2)<<fixed<<showpoint;
                cout<<"Days      Salary"<<endl;
                cout<<"----------------"<<endl;
                for (counter=1; counter<=days; counter++) {
                    if (counter==1) {
                        cout<<counter<<"          "<<(penny/100)<<endl;
                    } else {
                        total*=2;
                        cout<<counter<<"          "<<(total/100)<<endl;
                    }
                }
                cout<<"The total salary will be $"<<(total/100)<<endl;
                break;
            }
            case '6': {
                //Declare all Variables Here
                int floors, rooms, occupy, totRoom=0; 
                float totOcc=0, perOcc;
    
                //Input or initialize values Here
                cout<<"This program calculates a hotel's occupancy rate"<<endl;
                cout<<"Enter the number of floors in the hotel"<<endl;
                cin>>floors;
                while (floors<1) {
                    cout<<"There must be at least 1 floor"<<endl;
                    cin>>floors;
                }

                //Output Located Here
                for (int numFl=1; numFl<=floors; numFl++) {
                    if (numFl==13) {
                        continue;
                    }
        
                    cout<<"Enter the number of rooms on floor "<<numFl<<endl;
                    cin>>rooms;
                    while (rooms<10) {
                        cout<<"There must be at least 10 rooms per floor"<<endl;
                        cin>>rooms;
                    }
                    cout<<"How many of these rooms are occupied?"<<endl;
                    cin>>occupy;
                    while (occupy>rooms) {
                        cout<<"The number of occupied rooms must be less than or equal to the number of total rooms"<<endl;
                        cin>>occupy;
                    }
                    totRoom+=rooms;
                    totOcc+=occupy;
                }
                perOcc=(totOcc/totRoom)*100;
                cout<<"The number of rooms in the hotel is "<<totRoom<<endl;
                cout<<"The number of occupied rooms is "<<totOcc<<endl;
                cout<<setprecision(2)<<fixed<<showpoint;
                cout<<"The percentage of rooms that are occupied is "<<perOcc<<"%"<<endl;
                break;
            }
            case '7': {
                //Declare all Variables Here
                int yrs, months=1;
                float rainMon, totRain, numMon, avgRain, yrRain=0;
    
                //Input or initialize values Here
                cout<<"This program will determine the average rainfall. Enter the number ";
                cout<<"of years"<<endl;
                cin>>yrs;
                while (yrs<1) {
                    cout<<"There must be at least 1 year"<<endl;
                    cin>>yrs;
                }
                numMon=yrs*12;
    
    
                //Output Located Here
                for (int year=1; year<=yrs; year++) {
                    months=1;
                    while (months<=12) {
                        cout<<"How much rainfall in inches was there in month "<<months<<endl;
                        cin>>rainMon;
                        while (rainMon<0) {
                            cout<<"Rainfall cannot be a negative number"<<endl;
                            cin>>rainMon;
                        }
                        months++;
                        yrRain+=rainMon;
                    }
                    totRain+=yrRain;
                }
                avgRain=totRain/numMon;
                cout<<"The number of months total was "<<numMon<<endl;
                cout<<"The total inches of rain was "<<totRain<<endl;
                cout<<"The average rainfall for the period was "<<avgRain<<" inches"<<endl;
                break;
            }
            case '8': {
                //Declare all Variables Here
                int populat=0, inPop, avgInc, days, totPop=0;
    
                //Input or initialize values Here
                cout<<"Enter the starting size of the population"<<endl;
                cin>>inPop;
                while (inPop<2) {
                    cout<<"Initial population must be at least 2"<<endl;
                    cin>>inPop;
                }
                cout<<"Enter the percentage of the average daily population increase"<<endl;
                cin>>avgInc;
                while(avgInc<0) {
                    cout<<"Negative numbers are not valid"<<endl;
                    cin>>avgInc;
                }
                cout<<"Enter the number of days"<<endl;
                cin>>days;
                while (days<1) {
                    cout<<"The number of days cannot be less than 1"<<endl;
                    cin>>days;
                }
    
                //Output Located Here
                for (int numDays=1; numDays<=days; numDays++) {
                    populat=inPop+(avgInc*numDays);
                    totPop+=populat;
                    cout<<"On day "<<numDays<<" the population will be "<<totPop<<endl;
                }
                    break;
            }
            case '9': {
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
                break;
                }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}