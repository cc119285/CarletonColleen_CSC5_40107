/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 11, 2017, 8:22 PM
  Purpose:  Program that plays a word game using the user's inputs.
 */

//System Libraries
#include <iostream>
#include <string>
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
    string name, city, college, profess, animal, petname;
    int age;
    
    //Input values
    cout<<"This program will play a word game"<<endl;
    cout<<"Type an age"<<endl;
    cin>>age;
    cin.ignore();
    cout<<"Type a name"<<endl;
    getline(cin, name);
    cout<<"Type the name of a city"<<endl;
    getline(cin, city);
    cout<<"Type in the name of a college"<<endl;
    getline(cin, college);
    cout<<"Type in a profession"<<endl;
    getline(cin, profess);
    cout<<"Type in a type of animal"<<endl;
    getline(cin, animal);
    cout<<"Type in a name for a pet"<<endl;
    getline(cin, petname);

    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<". At the age of "<<age<<", "<<name<<" went to college at "<<college<<". "<<name<<" graduated and went to work as a "<<profess<<". Then, "<<name<<" adopted a(n) "<<animal<<" named "<<petname<<". They both lived happily ever after!"<<endl;

    //Exit stage right!
    return 0;
}