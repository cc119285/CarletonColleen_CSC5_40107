/* 
 * File:   main.cpp
 * Author: Colleen Carleton
 * Created on January 5, 2017, 9:07 AM
 * Purpose:  Free Fall
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=3.2174e1f;//Gravity on the earth sea level ft/sec^2
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time,    //Time in seconds
          distnce;//Distance in feet
    int rndoff;
    
    //Input or initialize values Here
    cout<<"This problem solves the distance traveled"<<endl;
    cout<<"in free-fall under Earth gravity"<<endl;
    cout<<"Input the time during free-fall in seconds"<<endl;
    cin>>time;
    cout<<"How many decimal places 0,1,2 or 3 for the answer"<<endl;
    cin>>rndoff;
    
    //Process/Calculations Here
    distnce=GRAVITY*time*time/2;
    int id=distnce*pow(10,rndoff)+0.5;//Rounding to roundoff decimals
    distnce=id/pow(10,rndoff);
    
    //Output Located Here
    cout<<"The distance fallen = "<<distnce<<" ft"<<endl;

    //Exit
    return 0;
}

