/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Example menu for use in homework
 */

//System Libraries Here
#include <iostream>
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Input or initialize values Here
    cout<<"Choose from the list"<<endl;
    cout<<"Type 1 for Program with Do-While Loop"<<endl;
    cout<<"Type 2 for Program with While loop"<<endl;
    cout<<"Type 3 for Program with For loop"<<endl;
    cin>>choice;
    
    //Switch to determine the program
    switch(choice) {
        case '1': {
            cout<<"Problem 1"<<endl;
            break;
        }
        case '2': {
            cout<<"Problem 2"<<endl;
            break;
        }
        case '3': {
            cout<<"Problem 3"<<endl;
            break;
        }
        default:
            cout<<"You are exiting the program"<<endl;
    }
    while(choice>='1'&&choice<='3');
    //Process/Calculations Here
    

    //Exit
    return 0;
}

