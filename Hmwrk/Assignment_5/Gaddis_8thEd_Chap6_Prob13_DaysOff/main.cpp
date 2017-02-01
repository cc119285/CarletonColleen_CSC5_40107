/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on February 1, 2017, 12:30 PM
 * Purpose:  Program to calculate the average number of days a company's 
 * employees are absent.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int numEmp(); //Function to get the number of employees
int numDays(int); //Function to get the number of days the employees missed
float avgDays(int, int); //Function to determine the average number of days missed

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int employe=0, totDays=0; //Number of employees and total days missed
    float avg=0; //Average of missed days
    
    //Call function numEmp to get number of employees
    cout<<"This program will calculate the average number of days a company's ";
    cout<<"employees are absent."<<endl;
    employe=numEmp();
    
    //Call function numDays to get total number of days
    totDays=numDays(employe);
    
    //Call function avgDays to calculate average number of days
    avg=avgDays(employe, totDays);
    
    //Output average number of days
    cout<<"The average number of days the employees were absent was "<<avg<<endl;

    //Exit
    return 0;
}

int numEmp() {
    //Declare variables
    int emp;
    
    //get number of employees
    cout<<"Enter the number of employees in the company."<<endl;
    cin>>emp;
    while (emp<1) {
        cout<<"The number of employees must be at least 1."<<endl; //validate input
        cin>>emp;
    }
    
    //return number of employees
    return emp;
}

int numDays(int employe) {
    //Declare variables
    int days, total=0;
    
    //get number of days missed for each employee
    for (int count=1; count<=employe; count++) {
        cout<<"How many days did employee "<<count<<" miss?"<<endl;
        cin>>days; //number of days for an employee
        while (days<0) {
            cout<<"Days missed cannot be negative."<<endl; //validate input
            cin>>days;
        }
        total+=days; //total days missed
    }
    
    //return total days missed
    return total;
}

float avgDays(int employe, int totDays) {
    //Declare variables
    float avrg=0;
    
    //Calculate average
    avrg=totDays/static_cast<float>(employe);
    
    //return the average
    return avrg;
}