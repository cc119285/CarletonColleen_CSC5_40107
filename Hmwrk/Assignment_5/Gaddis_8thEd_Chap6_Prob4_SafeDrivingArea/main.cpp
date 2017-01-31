/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 31, 2017, 1:00 PM
 * Purpose:  Program that determines which of five areas is the safest driving
 * area based on number of accidents that occurred in each area.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int getNumA();
void findLow(string, string, string, string, string, int, int, int, int, int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string sect1, sect2, sect3, sect4, sect5; //The five different sections
    int acci1=0, acci2=0, acci3=0, acci4=0, acci5=0; //The number of accidents in each section
    
    //Input or initialize values Here (Function getNumA)
    cout<<"This program determines the safest driving area."<<endl;
    cout<<"Enter the first section (out of North, South, East, West, and Center)."<<endl;
    cin>>sect1; //section 1
    acci1=getNumA(); //number of accidents in section 1
    cout<<"Enter the second section (out of North, South, East, West, and Center)."<<endl;
    cin>>sect2; //section 2
    acci2=getNumA(); //number of accidents in section 2
    cout<<"Enter the third section (out of North, South, East, West, and Center)."<<endl;
    cin>>sect3; //section 3
    acci3=getNumA(); //number of accidents in section 3
    cout<<"Enter the fourth section (out of North, South, East, West, and Center)."<<endl;
    cin>>sect4; //section 4
    acci4=getNumA(); //number of accidents in section 4
    cout<<"Enter the fifth section (out of North, South, East, West, and Center)."<<endl;
    cin>>sect5; //section 5
    acci5=getNumA(); //number of accidents in section 5
    
    //Process/Calculations Here (Function findLow)
    findLow(sect1, sect2, sect3, sect4, sect5, acci1, acci2, acci3, acci4, acci5);

    //Exit
    return 0;
}

void findLow(string sect1, string sect2, string sect3, string sect4, string sect5, int acci1, int acci2, int acci3, int acci4, int acci5) {
    //Determine which area had the fewest accidents and output results
    if (acci1<acci2 && acci1<acci3 && acci1<acci4 && acci1<acci5) {
        cout<<sect1<<" was the safest driving area with "<<acci1<<" accidents."<<endl;
    } else if (acci2<acci1 && acci2<acci3 && acci2<acci4 && acci2<acci5) {
        cout<<sect2<<" was the safest driving area with "<<acci2<<" accidents."<<endl;
    } else if (acci3<acci1 && acci3<acci2 && acci3<acci4 && acci3<acci5) {
        cout<<sect3<<" was the safest driving area with "<<acci3<<" accidents."<<endl;
    } else if (acci4<acci1 && acci4<acci2 && acci4<acci3 && acci4<acci5) {
        cout<<sect4<<" was the safest driving area with "<<acci4<<" accidents."<<endl;
    } else if (acci5<acci1 && acci5<acci2 && acci5<acci3 && acci5<acci4) {
        cout<<sect5<<" was the safest driving area with "<<acci5<<" accidents."<<endl;
    } else {
        cout<<"There was not one area with the fewest accidents."<<endl;
    }
}

int getNumA() {
    int numAcci=0;
    //get number of accidents for the section
    cout<<"Enter the number of accidents in this section."<<endl;
    cin>>numAcci;
    //validate the input for number of accidents
    while (numAcci<0) {
        cout<<"The number of accidents cannot be a negative number"<<endl;
        cin>>numAcci;
    }
    return numAcci;
}