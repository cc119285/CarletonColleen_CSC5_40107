/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 31, 2017, 1:29 PM
 * Purpose:  Program to calculate the kinetic energy of an object
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float kinEnrg (float, float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float mass=0.0, velocty=0.0, kinEn=0.0;
    
    //Input or initialize values Here
    cout<<"This program will calculate the kinetic energy of an object."<<endl;
    cout<<"Enter the mass of the object in kilograms."<<endl;
    cin>>mass; //mass of the object
    cout<<"Enter the velocity of the object in meters per second."<<endl;
    cin>>velocty; //velocity of the object
    
    //Process/Calculations Here (function kinEnrg)
    kinEn=kinEnrg(mass, velocty);
    
    //Output results
    cout<<"The object's kinetic energy is "<<kinEn<<endl;
    
    //Exit
    return 0;
}

float kinEnrg (float mass, float velocty) {
    float kinEng=0.0;
    kinEng=(1/2.0)*mass*(velocty*velocty);
    return kinEng;
}