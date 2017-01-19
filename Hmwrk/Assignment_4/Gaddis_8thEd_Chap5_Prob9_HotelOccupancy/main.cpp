/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 19, 2017, 11:55 AM
 * Purpose:  Program to determine the percentage of occupied rooms in a hotel.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
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
    

    //Exit
    return 0;
}

