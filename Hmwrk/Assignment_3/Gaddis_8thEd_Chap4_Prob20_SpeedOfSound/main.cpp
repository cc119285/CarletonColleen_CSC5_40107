/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 13, 2017, 1:45 PM
  Purpose: Program that will calculate the time it will take for sound to
 * travel through the selected medium. Mediums available are air, water, and 
 * steel.
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    int choice;
    float dist, time;
    
    //Input values
    cout<<"This program will calculate the time it will take sound to travel ";
    cout<<"through various mediums"<<endl;
    cout<<"Select a medium from the list"<<endl;
    cout<<"1. Air"<<endl;
    cout<<"2. Water"<<endl;
    cout<<"3. Steel"<<endl;
    cin>>choice;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<setprecision(4)<<fixed<<showpoint;
    if (choice==1) {
        cout<<"Enter the distance traveled through"<<endl;
        cin>>dist;
        if (dist>0) {
            time=dist/1100;
            cout<<"The time it will take the sound to travel through the medium ";
            cout<<"is "<<time<<" seconds"<<endl;
        } else {
            cout<<"Distance must be greater than zero"<<endl;
        }
    } else if (choice==2) {
        cout<<"Enter the distance traveled through"<<endl;
        cin>>dist;
        if (dist>0) {
            time=dist/4900;
            cout<<"The time it will take the sound to travel through the medium ";
            cout<<"is "<<time<<" seconds"<<endl;
        } else {
            cout<<"Distance must be greater than zero"<<endl;
        } 
    } else if (choice==3) {
        cout<<"Enter the distance traveled through"<<endl;
        cin>>dist;
        if (dist>0) {
            time=dist/16400;
            cout<<"The time it will take the sound to travel through the medium ";
            cout<<"is "<<time<<" seconds"<<endl;
        } else {
            cout<<"Distance must be greater than zero"<<endl;
        } 
    } else {
        cout<<"You must select one of the options available in the menu. ";
        cout<<"Restart the program and try again"<<endl;
    }
    
    //Exit stage right!
    return 0;
}