/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 6, 2017, 5:40 PM
  Purpose: Program that inputs data relating to monkeys' eating habits and 
 * displays the average and total amounts of food eaten by the monkeys.
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
    const int MONROW=3; //Array rows (monkeys)
    const int MONCOL=5; //Array columns (days)
    int monAry[MONROW][MONCOL]; //Array to store monkeys' eating habits
    int rowCnt; //Loop counter - rows
    int colCnt; //Loop counter - columns
    int totlbs=0; //Stores total pounds of food
    int avglbs=0; //Stores average pounds of food
    int hiMon=0; //Stores highest value
    int loMon=0; //Stores lowest value
    
    //Input values - Get array info
    for (rowCnt=0; rowCnt<MONROW; rowCnt++) {
        for (colCnt=0; colCnt<MONCOL; colCnt++) {
            cout<<"How many pounds of food did monkey "<<(rowCnt+1)<<" consume ";
            cout<<"on day "<<(colCnt+1)<<"?"<<endl;
            cin>>monAry[rowCnt][colCnt];
            while (monAry[rowCnt][colCnt]<0) {
                cout<<"Amount of food cannot be negative."<<endl;
                cin>>monAry[rowCnt][colCnt];
            }
        }
    }
    
    //Process Calculations
    //Average amount of food eaten per day (all monkeys)
    //Day 1
    for (rowCnt=0; rowCnt<MONROW; rowCnt++) {
        totlbs+=monAry[rowCnt][0];
    }
    avglbs=totlbs/3;
    cout<<"On day 1, the average amount of food eaten was "<<avglbs<<" pounds"<<endl;
    //Day 2
    totlbs=0;
    for (rowCnt=0; rowCnt<MONROW; rowCnt++) {
        totlbs+=monAry[rowCnt][1];
    }
    avglbs=totlbs/3;
    cout<<"On day 2, the average amount of food eaten was "<<avglbs<<" pounds"<<endl;
    totlbs=0;
    //Day 3
    for (rowCnt=0; rowCnt<MONROW; rowCnt++) {
        totlbs+=monAry[rowCnt][2];
    }
    avglbs=totlbs/3;
    cout<<"On day 3, the average amount of food eaten was "<<avglbs<<" pounds"<<endl;
    totlbs=0;
    //Day 4
    for (rowCnt=0; rowCnt<MONROW; rowCnt++) {
        totlbs+=monAry[rowCnt][3];
    }
    avglbs=totlbs/3;
    cout<<"On day 4, the average amount of food eaten was "<<avglbs<<" pounds"<<endl;
    totlbs=0;
    //Day 5
    for (rowCnt=0; rowCnt<MONROW; rowCnt++) {
        totlbs+=monAry[rowCnt][4];
    }
    avglbs=totlbs/3;
    cout<<"On day 5, the average amount of food eaten was "<<avglbs<<" pounds"<<endl;
    
    //Find Highest and Lowest values
    //Highest
    for (rowCnt=0; rowCnt<MONROW; rowCnt++) {
        for (colCnt=0; colCnt<MONCOL; colCnt++) {
            if (monAry[rowCnt][colCnt]>hiMon) {
                hiMon=monAry[rowCnt][colCnt];
            }
        }
    }
    //Lowest
    loMon=monAry[0][0];
    for (rowCnt=0; rowCnt<MONROW; rowCnt++) {
        for (colCnt=0; colCnt<MONCOL; colCnt++) {
            if (monAry[rowCnt][colCnt]<loMon) {
                loMon=monAry[rowCnt][colCnt];
            }
        }
    }
    
    //Output
    cout<<"The least amount of food eaten by any one monkey on any one day was ";
    cout<<loMon<<" pounds."<<endl;
    cout<<"The most amount of food eaten by any one monkey on any one day was ";
    cout<<hiMon<<" pounds."<<endl;
    
    //Exit
    return 0;
}

