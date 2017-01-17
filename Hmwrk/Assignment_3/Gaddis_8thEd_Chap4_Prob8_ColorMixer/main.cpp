/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 3, 2017, 12:15 PM
  Purpose:  Program that outputs the results of mixing two primary colors 
 * together.
 */

//System Libraries
#include <iostream>
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
    int color1, color2;
    
    //Input values
    cout<<"This program will output the results of mixing two primary colors together"<<endl;
    cout<<"Select 1 for red, 2 for blue, and 3 for yellow"<<endl;
    cout<<"Enter the number corresponding to the first color"<<endl;
    cin>>color1;
    cout<<"Enter the number corresponding to the second color"<<endl;
    cin>>color2;
    
    //Process by mapping inputs to outputs
    
    //Output values
    if ((color1==1&&color2==2)||(color1==2&&color2==1)) {
        cout<<"The result will be purple"<<endl;
    } else if ((color1==2&&color2==3)||(color1==3&&color2==2)) {
        cout<<"The result will be green"<<endl;
    } else if ((color1==1&&color2==3)||(color1==3&&color2==1)) {
        cout<<"The result will be orange"<<endl;
    } else {
        cout<<"Please restart the program and enter either 1, 2, or 3 for each color"<<endl;
    }
    
    //Exit stage right!
    return 0;
}