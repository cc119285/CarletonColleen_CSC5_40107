/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on January 8, 2017, 10:00 AM
  Purpose:  Program to display the total cost of a purchase
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
    float item1=15.95, item2=24.95, item3=6.95, item4=12.95, item5=3.95;
    float salestx=0.07, sub_tax, subtotl, total;
    
    //Input values
    
    //Process by mapping inputs to outputs
    subtotl=item1+item2+item3+item4+item5;
    sub_tax=subtotl*salestx;
    total=subtotl+sub_tax;
    
    //Output values
    cout<<"Item 1 costs $"<<item1<<endl;
    cout<<"Item 2 costs $"<<item2<<endl;
    cout<<"Item 3 costs $"<<item3<<endl;
    cout<<"Item 4 costs $"<<item4<<endl;
    cout<<"Item 5 costs $"<<item5<<endl;
    cout<<"The subtotal of the purchase is $"<<subtotl<<endl;
    cout<<"The sales tax is $"<<salestx<<endl;
    cout<<"The total cost of the purchase is $"<<total<<endl;
    
    //Exit stage right!
    return 0;
}