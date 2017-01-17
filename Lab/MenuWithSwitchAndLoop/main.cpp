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
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));
    
            //Declare and Initialize local Variables to main
             char numStd=20,student=1;
              unsigned short average=0;
    
             //Input values
              cout<<"This program assigns the score and outputs the grade for "
                 <<static_cast<int>(numStd)<<" students"<<endl;
    
             //Loop for each student
              do{
                 //Assign a grade and add to the average
                 //score and grade are local to the while loop
                unsigned short score=rand()%50+50;
                average+=score;
                //Process by mapping inputs to outputs
                 char grade=(score>=90)?'A':
                    (score>=80)?'B':
                    (score>=70)?'C':
                    (score>=60)?'D':'F';
                 
                //Output values
                 cout<<"Student "<<setw(2)<<static_cast<int>(student)
                     <<" has score "<<score<<" = "<<grade<<endl;
                }while(++student<=numStd);
    
                 //Calculate and output the average
                  average/=numStd;
                  cout<<"The average test score = "<<average<<endl;

            break;
        }
        case '2': {
            //Set the random number seed
             srand(static_cast<unsigned int>(time(0)));
    
             //Declare and Initialize local Variables to main
            char numStd=20,student=0;
            unsigned short average=0;
    
             //Input values
            cout<<"This program assigns the score and outputs the grade for "
                 <<static_cast<int>(numStd)<<" students"<<endl;
    
            //Loop for each student
            while(++student<=numStd){
                 //Assign a grade and add to the average
                //score and grade are local to the while loop
                unsigned short score=rand()%50+50;
                 average+=score;
                //Process by mapping inputs to outputs
                char grade=(score>=90)?'A':
                    (score>=80)?'B':
                    (score>=70)?'C':
                    (score>=60)?'D':'F';

             //Output values
             cout<<"Student "<<setw(2)<<static_cast<int>(student)
                <<" has score "<<score<<" = "<<grade<<endl;
    }
    
                //Calculate and output the average
                average/=numStd;
             cout<<"The average test score = "<<average<<endl;
            break;
        }
        case '3': {
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));
    
            //Declare and Initialize local Variables to main
            char numStd=20;
            unsigned short average=0;
    
            //Input values
            cout<<"This program assigns the score and outputs the grade for "
                <<static_cast<int>(numStd)<<" students"<<endl;
    
            //Loop for each student
            for(char student=1;student<=numStd;student++){
                //Assign a grade and add to the average
                //score and grade are local to the while loop
                 unsigned short score=rand()%50+50;//Score from 50 to 99
                 average+=score;
                //Process by mapping inputs to outputs
                char grade=(score>=90)?'A':
                    (score>=80)?'B':
                    (score>=70)?'C':
                    (score>=60)?'D':'F';

                //Output values
                cout<<"Student "<<setw(2)<<static_cast<int>(student)
                     <<" has score "<<score<<" = "<<grade<<endl;
    }
    
                //Calculate and output the average
                 average/=numStd;
                 cout<<"The average test score = "<<average<<endl;
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

