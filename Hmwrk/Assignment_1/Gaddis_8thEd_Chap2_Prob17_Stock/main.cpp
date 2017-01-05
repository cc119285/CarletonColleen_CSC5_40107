/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 4, 2017, 12:07 PM
 * Purpose:  Stock Calculation
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned char PERCENT=100;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize all Variables Here
    unsigned char stkPrce=35;//units of dollars per share
    unsigned short nShares=750;//number of shares
    unsigned char comishn=2;//Percent Commission
    unsigned short stkPaid,comPaid,totPaid;
    
    
    //Process/Calculations Here
    stkPaid=stkPrce*nShares;//Amount paid for stock purchase
    comPaid=stkPaid*comishn/PERCENT;//Commission on stock purchase
    totPaid=stkPaid+comPaid;//Total paid $'s
    //Output Located Here
    cout<<"Stock Price/Share= $"<<static_cast<int>(stkPrce)<<"/Share"<<endl;
    cout<<"Number of Shares ="<<nShares<<" Shares"<<endl;
    cout<<"Commission "<<static_cast<int>(comishn)<<"%"<<endl;
    cout<<"Stock Price Paid = $"<<stkPaid<<endl;
    cout<<"Commission Paid = $"<<comPaid<<endl;
    cout<<"Total Paid = $"<<totPaid<<endl;

    //Exit
    return 0;
}

