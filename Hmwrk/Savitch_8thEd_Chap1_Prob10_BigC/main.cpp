/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 5, 2017, 9:07 AM
 * Purpose: This program outputs a large C with a letter the user chooses.
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
    char c;//Variable to build the big c with
    
    //Input or initialize values Here
    cout<<"This program outputs a large C"<<endl;
    cout<<"With a letter the user chooses"<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"     "<<c<<"  "<<c<<"  "<<c<<endl;
    cout<<"  "<<c<<"           "<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<"  "<<c<<"           "<<c<<endl;
    cout<<"     "<<c<<"  "<<c<<"  "<<c<<endl;

    //Exit
    return 0;
}

