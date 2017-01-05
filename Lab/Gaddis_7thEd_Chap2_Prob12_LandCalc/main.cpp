/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 4, 2017, 9:07 AM
 * Purpose:  Land Calculation
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int CNVACFT = 43560;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nAcres,nFt2;
    //Input or initialize values Here
    cout<<"This is a conversion program "<<endl;
    cout<<"From number of Acres to Feet Squared"<<endl;
    cout<<"Input Number of Acres"<<endl;
    cin>>nAcres;
    
    //Process/Calculations Here
    nFt2=nAcres*CNVACFT;
    //Output Located Here
    cout<<"The number of Acres input "<<nAcres<<endl;
    cout<<"Equivalent to "<<nFt2<<" ft^2"<<endl;

    //Exit
    return 0;
}

