/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 12, 2017, 11:20 AM
 * Purpose:  Grades
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
    unsigned short score;
    char grade;
    
    //Input or initialize values Here
    cout<<"This program takes the score and outputs the grade"<<endl;
    cout<<"Input the score, 0 to 100"<<endl;
    cin>>score;
            
    //Process/Calculations Here
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
            
    //Output Located Here
    cout<<"Your grade is "<<grade<<endl;

    //Exit
    return 0;
}

