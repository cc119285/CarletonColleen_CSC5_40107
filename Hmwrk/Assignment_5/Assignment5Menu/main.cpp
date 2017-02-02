/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 2, 2017, 12:30 PM
  Purpose:  Menu for Assignment 5 programs
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>   //Math Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();

float calcRe(); //Problem 1

float getSals(string); //Function to get the sales of each division / Problem 2
void findHst(float, float, float, float, string, string, string, string); //Function to determine which had the highest sales / Problem 2

int getNumA(); //Problem 3
void findLow(string, string, string, string, string, int, int, int, int, int); //Problem 3

float falDist(float, int); //Problem 4

float kinEnrg (float, float); //Problem 5

float futureV(float, float, int); //Problem 6

int numEmp(); //Function to get the number of employees / Problem 7
int numDays(int); //Function to get the number of days the employees missed / Problem 7
float avgDays(int, int); //Function to determine the average number of days missed / Problem 7

void calcSiz(int, float, float, int); //Problem 8

void calc(float, int); //Problem 9
float numSqFt(int); //Problem 9

int cChoice(); //Function to get the computer's choice / Problem 10
int uChoice(); //Function to get the user's choice / Problem 10
int showWin(int, int, int); //Function to display the winner / Problem 10

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Get random number seed (for Problem 10)
    srand(static_cast<unsigned int>(time(0)));
    
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1"<<endl;
        cout<<"Type 2 for Problem 2"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 4"<<endl;
        cout<<"Type 5 for Problem 5"<<endl;
        cout<<"Type 6 for Problem 6"<<endl;
        cout<<"Type 7 for Problem 7"<<endl;
        cout<<"Type 8 for Problem 8"<<endl;
        cout<<"Type 9 for Problem 9"<<endl;
        cout<<"Type 0 for Problem 10"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            case '4':{prob4();break;}
            case '5':{prob5();break;}
            case '6':{prob6();break;}
            case '7':{prob7();break;}
            case '8':{prob8();break;}
            case '9':{prob9();break;}
            case '0':{prob10();break;}
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='0'&&choice<='9');
    
    //Exit stage right!
    return 0;
}

void prob10() {
    //Declare all Variables Here
    int compRPS=0, userRPS=0, tie=1; //stores computer's choice, user's choice, and number of ties
    
    //Explanation of game
    cout<<"This program simulates a game of Rock, Paper, Scissors."<<endl;
    
    //Call functions to play game
    do {
        tie--;
        compRPS=cChoice();
        userRPS=uChoice();
        tie=showWin(compRPS, userRPS, tie); 
    } while (tie>0); //Check for whether another round must take place
}

int cChoice() {
    //Declare variables
    int compC;
    
    //Determine computer's choice
    compC=rand()%3+1; //(1, 3)
    
    //Return computer's choice
    return compC;
}

int uChoice() {
    //Declare variables
    int choice;
    
    //Get user's choice
    cout<<"Choose between Rock, Paper, and Scissors."<<endl;
    cout<<"1. Rock"<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. Scissors"<<endl;
    cin>>choice;
    //Validate input
    while (choice<1 || choice>3) {
        cout<<"Input must be between 1 and 3."<<endl;
    }
    
    //Return choice
    return choice;
}

int showWin(int compRPS, int userRPS, int tie) {
    //Determine computer's choice of Rock, Paper, or Scissors
    switch (compRPS) {
        case 1: cout<<"The computer chose Rock."<<endl; break;
        case 2: cout<<"The computer chose Paper."<<endl; break;
        case 3: cout<<"The computer chose Scissors."<<endl; break;
        default: break;
    }
    
    //Determine winner
    if (compRPS==1) {
        if (userRPS==1) {
            cout<<"Both chose Rock. A tie has occurred. Try again!"<<endl;
            tie++;
        } else if (userRPS==2) {
            cout<<"You won! Paper beats Rock."<<endl;
        } else if (userRPS==3) {
            cout<<"You lost. Rock beats Scissors."<<endl;
        } else {
            cout<<"Error"<<endl;
        }
    } else if (compRPS==2) {
        if (userRPS==1) {
            cout<<"You lost. Paper beats Rock."<<endl;
        } else if (userRPS==2) {
            cout<<"Both chose Paper. A tie has occurred. Try again!"<<endl;
            tie++;
        }  else if (userRPS==3) {
            cout<<"You won! Scissors beats Paper."<<endl;
        } else {
            cout<<"Error"<<endl;
        }
    } else if (compRPS==3) {
        if (userRPS==1) {
            cout<<"You won! Rock beats Scissors."<<endl;
        } else if (userRPS==2) {
            cout<<"You lost. Scissors beats Paper."<<endl;
        }  else if (userRPS==3) {
            cout<<"Both chose Scissors. A tie has occurred. Try again!"<<endl;
            tie++;
        } else {
            cout<<"Error"<<endl;
        }
    } else {
        cout<<"Error"<<endl;
    }
    //return tie
    return tie;
}

void prob9() {
    //Declare Variables
    float galPrc=0.0; //price of a gallon of paint
    int numRoom, wllSpac; //number of rooms and square feet of walls
    
    //Input values
    cout<<"This program determines the costs associated with a painting job."<<endl;
    cout<<"Enter the number of rooms to be painted."<<endl;
    cin>>numRoom; //get number of rooms
    while (numRoom<1) {
        cout<<"There must be at least 1 room."<<endl; //validate input
        cin>>numRoom;
    }
    //Use function numSqFt to gain the total number of square feet
    wllSpac=numSqFt(numRoom);
    cout<<"What is the price of a gallon of paint?"<<endl;
    cin>>galPrc; //price of a gallon of paint
    while (galPrc<10.00) {
        cout<<"Price must be at least $10.00"<<endl;
        cin>>galPrc;
    }
    
    //Process Calculations using function calc
    calc(galPrc, wllSpac);
}

void calc(float galPrc, int wllSpac) {
    //Declare Variables
    int hours; //number of hours to work
    float galReq, labor, totCost; //require gallons of paint, cost of labor, and total cost
    
    //Calculations
    hours=(wllSpac/110)*8;
    galReq=(wllSpac/110)*1;
    labor=hours*25.00;
    totCost=labor+(galReq*galPrc);
    
    //Display costs
    cout<<"The amount of gallons of pain required is "<<galReq<<" gallons."<<endl;
    cout<<"The amount of hours that will be worked is "<<hours<<" hours."<<endl;
    cout<<"The price of a gallon of paint is $"<<galPrc<<endl;
    cout<<"The cost of labor will be $"<<labor<<endl;
    cout<<"The total cost for this paint job will be $"<<totCost<<endl;
}

float numSqFt(int numRoom) {
    //Declare variables
    int totSqFt=0, sqft=0;
    
    //Get square feet per room and total
    for (int count=1; count<=numRoom; count++) {
        cout<<"Enter the number of square feet to be painted in room "<<count<<endl;
        cin>>sqft;
        while (sqft<0) {
            cout<<"Value cannot be negative."<<endl;
            cin>>sqft;
        }
        totSqFt+=sqft;
    }
    
    //Return total Square Feet
    return totSqFt;
}

void prob8() {
    //Declare all Variables Here
    int stSize=0, yrs=0;  //initial population and number of years
    float bR=0.0, dR=0.0; //birth rate and death rate
    
    //Input or initialize values Here
    cout<<"This program will calculate the size of a population after a selected";
    cout<<" number of days."<<endl;
    cout<<"What is the population's starting size?"<<endl;
    cin>>stSize; //initial population
    while (stSize<2) {
        cout<<"Initial population must be tow or greater"<<endl; //validate input
        cin>>stSize;
    }
    cout<<"What is the annual birth rate?"<<endl;
    cin>>bR; //Birth rate
    while (bR<0) {
        cout<<"Birth rate cannot be negative."<<endl; //validate input
        cin>>bR;
    }
    bR/=100;
    cout<<"What is the annual death rate?"<<endl;
    cin>>dR; //Death rate
    while (dR<0) {
        cout<<"Death rate cannot be negative."<<endl; //validate input
        cin>>dR;
    }
    dR/=100;
    cout<<"Enter the number of years to display."<<endl;
    cin>>yrs; //number of years
    while (yrs<1) {
        cout<<"Years must be at least one."<<endl; //validate input
        cin>>yrs;
    }
    
    //Call function calcSize to determine population
    calcSiz(stSize, bR, dR, yrs);
}

void calcSiz(int stSize, float bR, float dR, int yrs) {
    float newPop=stSize;
    for (int count=1; count<=yrs; count++) {
        //Calculate population
        newPop=newPop+(bR*newPop)-(dR*newPop);
        
        //Output result
        cout<<"The population after "<<count<<" year(s) will be "<<newPop<<endl;
    }
}

void prob7() {
    //Declare all Variables Here
    int employe=0, totDays=0; //Number of employees and total days missed
    float avg=0; //Average of missed days
    
    //Call function numEmp to get number of employees
    cout<<"This program will calculate the average number of days a company's ";
    cout<<"employees are absent."<<endl;
    employe=numEmp();
    
    //Call function numDays to get total number of days
    totDays=numDays(employe);
    
    //Call function avgDays to calculate average number of days
    avg=avgDays(employe, totDays);
    
    //Output average number of days
    cout<<"The average number of days the employees were absent was "<<avg<<endl;
}

int numEmp() {
    //Declare variables
    int emp;
    
    //get number of employees
    cout<<"Enter the number of employees in the company."<<endl;
    cin>>emp;
    while (emp<1) {
        cout<<"The number of employees must be at least 1."<<endl; //validate input
        cin>>emp;
    }
    
    //return number of employees
    return emp;
}

int numDays(int employe) {
    //Declare variables
    int days, total=0;
    
    //get number of days missed for each employee
    for (int count=1; count<=employe; count++) {
        cout<<"How many days did employee "<<count<<" miss?"<<endl;
        cin>>days; //number of days for an employee
        while (days<0) {
            cout<<"Days missed cannot be negative."<<endl; //validate input
            cin>>days;
        }
        total+=days; //total days missed
    }
    
    //return total days missed
    return total;
}

float avgDays(int employe, int totDays) {
    //Declare variables
    float avrg=0;
    
    //Calculate average
    avrg=totDays/static_cast<float>(employe);
    
    //return the average
    return avrg;
}

void prob6() {
    //Declare Variables
    float initial=0.0, fv=0.0, intRate=0.0; //initial value, future value, and interest rate
    int months=0; //number of months
    
    //Input values
    cout<<"This program determines the future value of money in a savings account."<<endl;
    cout<<"Enter the starting value of the money in the account."<<endl;
    cin>>initial; //initial value
    while(initial<0) {
        cout<<"The amount cannot be negative."<<endl; //validate input
        cin>>initial;
    }
    cout<<"Enter the interest rate."<<endl;
    cin>>intRate; //Interest rate
    while (intRate<0) {
        cout<<"Interest rate cannot be negative."<<endl; //validate input
        cin>>intRate;
    }
    intRate/=100;
    cout<<"Enter the number of months."<<endl;
    cin>>months; //number of months
    while (months<1) {
        cout<<"number of months must be at least 1."<<endl; //validate input
        cin>>months;
    }
    
    //Call function futureV and output results
    fv=futureV(initial, intRate, months);
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The future value of the money after "<<months<<" months is $"<<fv<<endl;
}

float futureV(float initial, float intRate, int months) {
    //Declare variables
    float fValue=0.0;
    
    //Calculate future value
    fValue=initial*pow((1.0+intRate), months);
    
    //return future value
    return fValue;
}

void prob5() {
    //Declare all Variables Here
    float mass=0.0, velocty=0.0, kinEn=0.0;
    
    //Input or initialize values Here
    cout<<"This program will calculate the kinetic energy of an object."<<endl;
    cout<<"Enter the mass of the object in kilograms."<<endl;
    cin>>mass; //mass of the object
    cout<<"Enter the velocity of the object in meters per second."<<endl;
    cin>>velocty; //velocity of the object
    
    //Process/Calculations Here (function kinEnrg)
    kinEn=kinEnrg(mass, velocty);
    
    //Output results
    cout<<"The object's kinetic energy is "<<kinEn<<endl;
}

float kinEnrg (float mass, float velocty) {
    float kinEng=0.0;
    kinEng=(1/2.0)*mass*(velocty*velocty);
    return kinEng;
}

void prob4() {
    //Declare Variables
    int time=10; //time in seconds
    float gravity=9.8, dist=0.0; //gravity and distance traveled
    
    //Explain Program
    cout<<"This program will calculate the distance traveled falling down for ";
    cout<<"each second from 1 to 10."<<endl;
    
    //Call function falDist in a for loop to get each distance
    for (int count=1; count<=time; count++) {
        dist=falDist(gravity, count);
        cout<<"Distance traveled after "<<count<<" seconds is "<<dist<<endl;
    }
}

float falDist(float gravity, int count) {
    float distnce;
    distnce=(1/2.0)*gravity*(count*count);
    return distnce;
}

void prob3(){
    //Declare all Variables Here
    string sect1, sect2, sect3, sect4, sect5; //The five different sections
    int acci1=0, acci2=0, acci3=0, acci4=0, acci5=0; //The number of accidents in each section
    
    //Input or initialize values Here (Function getNumA)
    cout<<"This program determines the safest driving area."<<endl;
    cout<<"Enter the first section (out of North, South, East, West, and Center)."<<endl;
    cin>>sect1; //section 1
    acci1=getNumA(); //number of accidents in section 1
    cout<<"Enter the second section (out of North, South, East, West, and Center)."<<endl;
    cin>>sect2; //section 2
    acci2=getNumA(); //number of accidents in section 2
    cout<<"Enter the third section (out of North, South, East, West, and Center)."<<endl;
    cin>>sect3; //section 3
    acci3=getNumA(); //number of accidents in section 3
    cout<<"Enter the fourth section (out of North, South, East, West, and Center)."<<endl;
    cin>>sect4; //section 4
    acci4=getNumA(); //number of accidents in section 4
    cout<<"Enter the fifth section (out of North, South, East, West, and Center)."<<endl;
    cin>>sect5; //section 5
    acci5=getNumA(); //number of accidents in section 5
    
    //Process/Calculations Here (Function findLow)
    findLow(sect1, sect2, sect3, sect4, sect5, acci1, acci2, acci3, acci4, acci5);
}

void findLow(string sect1, string sect2, string sect3, string sect4, string sect5, int acci1, int acci2, int acci3, int acci4, int acci5) {
    //Determine which area had the fewest accidents and output results
    if (acci1<acci2 && acci1<acci3 && acci1<acci4 && acci1<acci5) {
        cout<<sect1<<" was the safest driving area with "<<acci1<<" accidents."<<endl;
    } else if (acci2<acci1 && acci2<acci3 && acci2<acci4 && acci2<acci5) {
        cout<<sect2<<" was the safest driving area with "<<acci2<<" accidents."<<endl;
    } else if (acci3<acci1 && acci3<acci2 && acci3<acci4 && acci3<acci5) {
        cout<<sect3<<" was the safest driving area with "<<acci3<<" accidents."<<endl;
    } else if (acci4<acci1 && acci4<acci2 && acci4<acci3 && acci4<acci5) {
        cout<<sect4<<" was the safest driving area with "<<acci4<<" accidents."<<endl;
    } else if (acci5<acci1 && acci5<acci2 && acci5<acci3 && acci5<acci4) {
        cout<<sect5<<" was the safest driving area with "<<acci5<<" accidents."<<endl;
    } else {
        cout<<"There was not one area with the fewest accidents."<<endl;
    }
}

int getNumA() {
    int numAcci=0;
    //get number of accidents for the section
    cout<<"Enter the number of accidents in this section."<<endl;
    cin>>numAcci;
    //validate the input for number of accidents
    while (numAcci<0) {
        cout<<"The number of accidents cannot be a negative number"<<endl;
        cin>>numAcci;
    }
    return numAcci;
}

void prob2(){
    //Declare all Variables Here
    string div1, div2, div3, div4; //Stores the order of the 4 divisions
    float sales1, sales2, sales3, sales4; //Stores the quarterly sales figures
    
    //Input values here (names of divisions and quarterly sales figures)
    cout<<"This program determines the division with the highest quarterly sales figures."<<endl;
    cout<<"Enter the first division (out of Southwest, Southeast, Northwest, and Northeast)."<<endl;
    cin>>div1; //Name of division 1
    sales1=getSals(div1); //use get sales function to get sales for division 1
    cout<<"Enter the second division (out of Southwest, Southeast, Northwest, and Northeast)."<<endl;
    cin>>div2; //Name of division 2
    sales2=getSals(div2); //use get sales function to get sales for division 2
    cout<<"Enter the third division (out of Southwest, Southeast, Northwest, and Northeast)."<<endl;
    cin>>div3; //Name of division 3
    sales3=getSals(div3); //use get sales function to get sales for division 3
    cout<<"Enter the fourth division (out of Southwest, Southeast, Northwest, and Northeast)."<<endl;
    cin>>div4; //Name of division 4
    sales4=getSals(div4); //use get sales function to get sales for division 4
    
    //Process/Calculations Here (use function findHst to find the highest)
    findHst(sales1, sales2, sales3, sales4, div1, div2, div3, div4);
}

void findHst(float sales1, float sales2, float sales3, float sales4, string div1, string div2, string div3, string div4) {
    if (sales1>sales2 && sales1>sales3 && sales1>sales4) {
        cout<<"The division with the most sales was "<<div1<<" with "<<sales1<<" sales."<<endl;
    } else if (sales2>sales1 && sales2>sales3 && sales2>sales4) {
        cout<<"The division with the most sales was "<<div2<<" with "<<sales2<<" sales."<<endl;
    } else if (sales3>sales1 && sales3>sales2 &&sales3>sales4) {
        cout<<"The division with the most sales was "<<div3<<" with "<<sales3<<" sales."<<endl;
    } else if (sales4>sales1 && sales4>sales2 && sales4>sales3) {
        cout<<"The division with the most sales was "<<div4<<" with "<<sales4<<" sales."<<endl;
    } else {
        cout<<"There was not one division that had greater sales than all others."<<endl;
    }
}

float getSals(string) {
    //Declare variables
    float sales=0;
    
    //Get sales
    cout<<"Enter the division's quarterly sales figures."<<endl;
    cin>>sales;
    while (sales<0.00) {
        cout<<"Sales cannot be a negative number"<<endl; //Check validity of input
        cin>>sales;
    }
    
    //return sales
    return sales;
}

void prob1(){
    //Declare all Variables Here
    float retail1; //retail price
    
    //Call function
    cout<<"This program will calculate the retail price of an item"<<endl;
    retail1=calcRe();
    
    //Output results
    cout<<setprecision(2)<<fixed<<showpoint; //set decimal point
    cout<<"The retail price will be $"<<retail1<<endl;
}

float calcRe() {
    //Declare variables
    float wholSl, markup, retail; //wholesale price, markup percentage, and retail price
    
    //Get wholesale cost
    cout<<"Enter the wholesale cost of the item"<<endl;
    cin>>wholSl;
    while (wholSl<0) {
        cout<<"The wholesale cost cannot be a negative number"<<endl; //check validity of input
        cin>>wholSl;
    }
    
    //Get markup percentage
    cout<<"Enter the markup percentage"<<endl;
    cin>>markup;
    while (markup<0) {
        cout<<"The markup percentage cannot be a negative number"<<endl; //check validity of markup percentage
        cin>>markup;
    }
    
    //Calculate retail cost
    retail=wholSl+(wholSl*(markup/100));
    
    //Return retail cost to main
    return retail;
    
}