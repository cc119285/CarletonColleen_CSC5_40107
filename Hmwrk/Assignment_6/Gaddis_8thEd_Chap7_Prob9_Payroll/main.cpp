/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 6, 2017, 4:40 PM
  Purpose: Program that determines the wages of employees based on information
 * input into arrays
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
    const int PAYROLL=7; //Size of arrays
    long int empID[PAYROLL]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489}; //Array to hold employee ID's
    int hours[PAYROLL];	     //Array to hold the number of hours each worked
    float payRate[PAYROLL];  //Array to hold each employee's payrate
    float wages[PAYROLL];    //Array to hold each employee's gross wages
    int pyrllct;             //Loop counter
    
    //Input values
    //Get employee's hours
    for (pyrllct=0; pyrllct<PAYROLL; pyrllct++) {
	cout<<"Enter the hours worked by employee "<<(pyrllct+1)<<endl;
	cin>>hours[pyrllct];
	while (hours[pyrllct]<0) {
		cout<<"Hours cannot be negative."<<endl;
		cin>>hours[pyrllct];
	}
    }
    
    //Get employee's pay rates
    for (pyrllct=0; pyrllct<PAYROLL; pyrllct++) {
	cout<<"Enter the pay rate of employee "<<(pyrllct+1)<<endl;
	cin>>payRate[pyrllct];
	while (payRate[pyrllct]<15.00) {
		cout<<"Pay rate must be at least $15.00."<<endl;
		cin>>payRate[pyrllct];
	}
    }

    //Process Calculations
    //Calculate Gross Wages
    wages[0]=hours[0]*payRate[0];
    wages[1]=hours[1]*payRate[1];
    wages[2]=hours[2]*payRate[2];
    wages[3]=hours[3]*payRate[3];
    wages[4]=hours[4]*payRate[4];
    wages[5]=hours[5]*payRate[5];
    wages[6]=hours[6]*payRate[6];

    //Output
    //Display wages
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Employee ID            Wages"<<endl;
    cout<<empID[0]<<"               "<<wages[0]<<endl;
    cout<<empID[1]<<"               "<<wages[1]<<endl;
    cout<<empID[2]<<"               "<<wages[2]<<endl;
    cout<<empID[3]<<"               "<<wages[3]<<endl;
    cout<<empID[4]<<"               "<<wages[4]<<endl;
    cout<<empID[5]<<"               "<<wages[5]<<endl;
    cout<<empID[6]<<"               "<<wages[6]<<endl;
    
    //Exit
    return 0;
}

