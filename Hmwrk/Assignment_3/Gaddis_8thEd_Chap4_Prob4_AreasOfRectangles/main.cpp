/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 12, 2017, 1:11 PM
 * Purpose:  Program to determine which of two rectangles has a larger area.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int leng1, leng2, width1, width2, area1, area2;
    
    //Input or initialize values Here
    cout<<"This program will determine which of two rectangles has the greater area"<<endl;
    cout<<"Enter the length of the first rectangle"<<endl;
    cin>>leng1;
    cout<<"Enter the width of the first rectangle"<<endl;
    cin>>width1;
    cout<<"Enter the length of the second rectangle"<<endl;
    cin>>leng2;
    cout<<"Enter the width of the second rectangle"<<endl;
    cin>>width2;
    
    //Process/Calculations Here
    area1=leng1*width1;
    area2=leng2*width2;
    
    //Output Located Here
    if (area1==area2){
        cout<<"The rectangles have the same area"<<endl;
    } else if (area1>area2) {
        cout<<"The first rectangle has a larger area"<<endl;
    } else {
        cout<<"The second rectangle has a larger area"<<endl;
    }

    //Exit
    return 0;
}

