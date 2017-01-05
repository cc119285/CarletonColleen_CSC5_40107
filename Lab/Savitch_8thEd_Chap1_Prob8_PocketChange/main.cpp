/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 5, 2017, 9:07 AM
 * Purpose:  A program to count pocket change
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char quarter=25,//Number of cents in coinage
           dime=10,
           nickle=5,
           penny=1;
char nQuarts,nDimes,nNickls,nPnnies;
unsigned short total;//Total pocket change in cents

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    //Input or initialize values Here
    cout<<"This calculates the amount of your pocket change"<<endl;
    cout<<"How many Quarters, Dimes, Nickles, and Pennies do"<<endl;
    cout<<"you have in your pocket?"<<endl;
    cout<<"Type in all on the same line i.e. 3 4 0 2"<<endl;
    cout<<"Maximum of any value must be less than 10"<<endl;
    cin>>nQuarts>>nDimes>>nNickls>>nPnnies;
    
    //Process/Calculations Here
    total = (nQuarts-48)*quarter +
            (nDimes-48)*dime +
            (nNickls-48)*nickle +
            (nPnnies-48)*penny;
    
    //Output Located Here
    cout<<"The coins in your pocket = "<<total<<" cents"<<endl;
    cout<<"The coins in your pocket = $"<<total/100.0f<<endl;

    //Exit
    return 0;
}

