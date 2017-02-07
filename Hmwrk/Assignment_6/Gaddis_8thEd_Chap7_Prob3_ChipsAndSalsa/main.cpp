/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 6, 2017, 4:50 PM
  Purpose: Program to keep track of sales of different salsa types
 */

//System Libraries
#include <iostream>
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
    const int TYPESIZ=5; //Size of arrays
    string type[TYPESIZ]={"Mild", "Medium", "Sweet", "Hot", "Zesty"}; //Array to hold the name of the flavor
    int numSold[TYPESIZ]; //Array to hold the number sold
    int typecnt;  //Loop Counter
    int totSals=0; //Stores total sales
    int hiSales=0; //Stores highest sales
    int loSales=0; //Stores lowest sales
    int hi=0;          //Stores highest
    int lo=0;         //Stores lowest
    
    //Input values
    //Get number sold
    for (typecnt=0; typecnt<TYPESIZ; typecnt++) {
	cout<<"Enter the number sold for type "<<type[typecnt]<<endl;
	cin>>numSold[typecnt];
	while (numSold[typecnt]<0) {
		cout<<"amount sold cannot be negative."<<endl;
		cin>>numSold[typecnt];
	}
    }
    
    //Process Calculations
    //Find total sales
    for (typecnt=0; typecnt<TYPESIZ; typecnt++) {
	totSals+=numSold[typecnt];
    }
    //Find highest sales
    hiSales=numSold[0]; //Set highest value to element 1's value
    for (typecnt=1; typecnt<TYPESIZ; typecnt++) {
	if (numSold[typecnt]>hiSales) {
		hiSales=numSold[typecnt];
		hi=typecnt;
	}
    }
    //Find lowest sales
    loSales=numSold[0]; //Set lowest value to element 1's value
    for (typecnt=1; typecnt<TYPESIZ; typecnt++) {
	if (numSold[typecnt]<loSales) {
		loSales=numSold[typecnt];
		lo=typecnt;
	}
    }

    //Output
    //Output results
    cout<<"Sales for "<<type[0]<<" were "<<numSold[0]<<endl;
    cout<<"Sales for "<<type[1]<<" were "<<numSold[1]<<endl;
    cout<<"Sales for "<<type[2]<<" were "<<numSold[2]<<endl;
    cout<<"Sales for "<<type[3]<<" were "<<numSold[3]<<endl;
    cout<<"Sales for "<<type[4]<<" were "<<numSold[4]<<endl;
    //Output total sales
    cout<<"Total sales was "<<totSals<<endl;
    //Output highest/lowest sales
    cout<<"The highest sales was "<<type[hi]<<endl;
    cout<<"The lowest sales was "<<type[lo]<<endl;

    //Exit
    return 0;
}

