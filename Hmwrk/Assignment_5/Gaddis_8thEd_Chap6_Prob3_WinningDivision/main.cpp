/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 30, 2017, 1:27 PM
 * Purpose:  Program that determines which of four divisions had the highest 
 * quarterly sales figures.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float getSals(string); //Function to get the sales of each division
void findHst(float, float, float, float, string, string, string, string); //Function to determine which had the highest sales

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string div1, div2, div3, div4; //Stores the order of the 4 divisions
    float sales1, sales2, sales3, sales4; //Stores the quarterly sales figures
    
    //Input values here (names of divisions and quarterly sales figures)
    cout<<"This program determines the division with the highest quarterly sales figures."<<endl;
    cout<<"Enter the first division (out of Southwest, Southeast, Northwest, and Northeast)."<<endl;
    cin>>div1; //Name of division 1
    sales1=getSals(div1); //use get sales function to get sales for division 1
    cout<<"Enter the second division (out of Southwest, Southeast, Northwest, and Northeast)."<<endl;
    cin>>div2; //Name of division 2
    sales2=getSals(div2); //use get sales function to get sales for division 2
    cout<<"Enter the third division (out of Southwest, Southeast, Northwest, and Northeast)."<<endl;
    cin>>div3; //Name of division 3
    sales3=getSals(div3); //use get sales function to get sales for division 3
    cout<<"Enter the fourth division (out of Southwest, Southeast, Northwest, and Northeast)."<<endl;
    cin>>div4; //Name of division 4
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

float getSals(string) {
    //Declare variables
    float sales=0;
    
    //Get sales
    cout<<"Enter the division's quarterly sales figures."<<endl;
    cin>>sales;
    while (sales<0.00) {
        cout<<"Sales cannot be a negative number"<<endl; //Check validity of input
        cin>>sales;
    }
    
    //return sales
    return sales;
}