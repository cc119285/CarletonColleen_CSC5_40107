/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 23, 2017, 12:00 PM
 * Purpose:  Program to calculate the retail price of an item.
 */

//System Libraries Here
#include <iostream> //Input/Output library
#include <iomanip>  //to set decimal places
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float calcRe();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float retail1; //retail price
    
    //Call function
    cout<<"This program will calculate the retail price of an item"<<endl;
    retail1=calcRe();
    
    //Output results
    cout<<setprecision(2)<<fixed<<showpoint; //set decimal point
    cout<<"The retail price will be $"<<retail1<<endl;
    
    //Exit
    return 0;
}

float calcRe() {
    //Declare variables
    float wholSl, markup, retail; //wholesale price, markup percentage, and retail price
    
    //Get wholesale cost
    cout<<"Enter the wholesale cost of the item"<<endl;
    cin>>wholSl;
    while (wholSl<0) {
        cout<<"The wholesale cost cannot be a negative number"<<endl; //check validity of input
        cin>>wholSl;
    }
    
    //Get markup percentage
    cout<<"Enter the markup percentage"<<endl;
    cin>>markup;
    while (markup<0) {
        cout<<"The markup percentage cannot be a negative number"<<endl; //check validity of markup percentage
        cin>>markup;
    }
    
    //Calculate retail cost
    retail=wholSl+(wholSl*(markup/100));
    
    //Return retail cost to main
    return retail;
    
}