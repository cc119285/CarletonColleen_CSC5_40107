/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 5, 2017, 7:50 PM
  Purpose: Used to determine whether a student passed or failed a driver's 
 * liscence exam
 */

//System Libraries
#include <iostream>
#include <sstream>
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
    const int NUMQUE=20;  //Size of arrays that hold the answers to the exam questions
    char ansKey[NUMQUE]={'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'}; //Array storing the correct answers
    char stuAns[NUMQUE]; //Array to hold student's answers
    int anscnt;          //Loop counter
    int crrctan=0;	     //Increment for correct answers
    string incrrct="";   //Add incorrect numbers
    //Initialize correct answers into Answer Key
   
    
    //Input values
    //Get student's answers
    for (anscnt=0; anscnt<NUMQUE; anscnt++) {
	cout<<"Enter the student's answer for question "<<(anscnt+1)<<endl;
	cin>>stuAns[anscnt];
	while (stuAns[anscnt]!='A' && stuAns[anscnt]!='B' && stuAns[anscnt]!='C' && stuAns[anscnt]!='D') {
		cout<<"Answer can only be A, B, C, or D."<<endl;
		cin>>stuAns[anscnt];
	}
    }
    
    //Process Calculations
    //Compare arrays
    for (anscnt=0; anscnt<NUMQUE; anscnt++) {
	if (ansKey[anscnt]==stuAns[anscnt]) {
		crrctan++;
	} else {
            stringstream ss; 
            ss<<(anscnt+1);
            string x;
            ss>>x;
		incrrct+=x;
                incrrct+=" ";
	}
    }
    
    //Output
    //Output whether they passed, and how many they got correct/incorrect, and which ones are wrong
    if (crrctan>=15) {
	cout<<"They passed."<<endl;
    } else {
	cout<<"They did not pass."<<endl;
    }
    
    cout<<"They got "<<crrctan<<" questions correct."<<endl;
    cout<<"They got "<<(20-crrctan)<<" questions incorrect."<<endl;
    cout<<"The student got questions "<<incrrct<<" incorrect"<<endl;
    
    //Exit
    return 0;
}

