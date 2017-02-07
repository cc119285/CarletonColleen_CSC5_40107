/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 6, 2017, 6:40 PM
  Purpose:  Menu for Assignment 6 programs
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <sstream> //Sstream Library
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
void nCalc(int[], int, int);
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Set random number seed
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
    //Declare Variables
    const int LOTSIZE=5; //Size of lottery array
    int lottery[LOTSIZE]; //Array to hold lottery numbers
    int user[LOTSIZE];     //Array to hold user's lottery numbers
    int lotnmct;                   //Loop counter
    int lotsame=0;	  //Increment counter for same value
    int lotnsm=0;	  //Increment counter for different values

    //Input values
    //Get random lottery number
    for (lotnmct=0; lotnmct<LOTSIZE; lotnmct++) {
	lottery[lotnmct]=rand()%9; //value from 0-9
    }
    //User inputs their numbers
    cout<<"You will enter a five digit number for your lottery number, one digit at a time."<<endl;
    for (lotnmct=0; lotnmct<LOTSIZE; lotnmct++) {
	cout<<"Enter a value from 0 to 9."<<endl;
	cin>>user[lotnmct];
    }
    
    //Process Calculations
    //Find how many numbers were the same
    for (lotnmct=0; lotnmct<LOTSIZE; lotnmct++) {
	if (lottery[lotnmct]==user[lotnmct]) {
		lotsame++;
	} else {
		lotnsm++;
	}
    }
    
    //Output the lottery number
    for (lotnmct=0; lotnmct<LOTSIZE; lotnmct++) {
	cout<<lottery[lotnmct]<<" ";
    }
    cout<<endl; //End line after lottery number
    //Output number of same values, and whether they were correct
    cout<<"Of the five values, "<<lotsame<<" of your values matched the lottery number."<<endl;
    if (lotsame==5) {
	cout<<"You are the Grand Prize Winner!"<<endl;
    }
}

void prob9() {
    //Declare Variables
    const int GRADESZ=5; //Stores size of arrays for students' names and letter grades
    const int SCORESZ=4; //Stores size of arrays for student's test scores
    string stName[GRADESZ]; //Stores student's names
    char letGrde[GRADESZ];   //Stores student's letter grades
    float s1Scors[SCORESZ];  //Stores student 1's test scores
    float s2Scors[SCORESZ]; //Stores student 2's test scores
    float s3Scors[SCORESZ]; //Stores student 3's test scores
    float s4Scors[SCORESZ]; //Stores student 4's test scores
    float s5Scors[SCORESZ]; //Stores student 5's test scores
    int scorect; //Loop counter
    int testlow; //Loop counter
    
    //Input values
    //Get student's names
    int gradcnt; //Loop counter
    for (gradcnt=0; gradcnt<GRADESZ; gradcnt++) {
	cout<<"Enter the name of student "<<(gradcnt+1)<<endl;
	cin>>stName[gradcnt];
    }
    //Get test scores for the students
    for (gradcnt=0; gradcnt<GRADESZ; gradcnt++) {
	for (scorect=0; scorect<SCORESZ; scorect++) {
		cout<<"Enter the score student "<<(gradcnt+1)<<" earned on test "<<(scorect+1)<<endl;
		if (gradcnt==0) {
			cin>>s1Scors[scorect];
			while (s1Scors[scorect]<0 || s1Scors[scorect]>100) {
				cout<<"Score must be between 0 and 100."<<endl; //Validate input
				cin>>s1Scors[scorect];
			}
		} else if (gradcnt==1) {
			cin>>s2Scors[scorect];
			while (s2Scors[scorect]<0 || s2Scors[scorect]>100) {
				cout<<"Score must be between 0 and 100."<<endl; //Validate input
				cin>>s2Scors[scorect];
			}
		} else if (gradcnt==2) {
			cin>>s3Scors[scorect];
			while (s3Scors[scorect]<0 || s3Scors[scorect]>100) {
				cout<<"Score must be between 0 and 100."<<endl; //Validate input
				cin>>s3Scors[scorect];
			}
		} else if (gradcnt==3) {
			cin>>s4Scors[scorect];
			while (s4Scors[scorect]<0 || s4Scors[scorect]>100) {
				cout<<"Score must be between 0 and 100."<<endl; //Validate input
				cin>>s4Scors[scorect];
			}
		} else {
			cin>>s5Scors[scorect];
			while (s5Scors[scorect]<0 || s5Scors[scorect]>100) {
				cout<<"Score must be between 0 and 100."<<endl; //Validate input
				cin>>s5Scors[scorect];
			}
		}
	}
    }
    
    //Process Calculations
    //Find averages for each student
    //Sum each array
    int sum1=0, sum2=0, sum3=0, sum4=0, sum5=0; //Stores sum of each student's scores
    int avgstu1, avgstu2, avgstu3, avgstu4, avgstu5; //Stores averages for each student
    //Student 1
    for (scorect=0; scorect<SCORESZ; scorect++) {
	sum1+=s1Scors[scorect];
    }
    //Student 2
    for (scorect=0; scorect<SCORESZ; scorect++) {
	sum2+=s2Scors[scorect];
    }
    //Student 3
    for (scorect=0; scorect<SCORESZ; scorect++) {
	sum3+=s3Scors[scorect];
    }
    //Student 4
    for (scorect=0; scorect<SCORESZ; scorect++) {
	sum4+=s4Scors[scorect];
    }
    //Student 5
    for (scorect=0; scorect<SCORESZ; scorect++) {
	sum5+=s5Scors[scorect];
    }
    
    //Find and remove lowest test score
    //Student1
    testlow=s1Scors[0]; //Set lowest score
    for (scorect=1; scorect<SCORESZ; scorect++) {
	if (s1Scors[scorect]<testlow) {
		testlow=s1Scors[scorect];
	}
    }
    sum1-=testlow; //Subtract lowest score from sum
    //Student2
    testlow=s2Scors[0]; //Set lowest score
    for (scorect=1; scorect<SCORESZ; scorect++) {
	if (s2Scors[scorect]<testlow) {
		testlow=s2Scors[scorect];
	}
    }
    sum2-=testlow; //Subtract lowest score from sum
    //Student 3
    testlow=s3Scors[0]; //Set lowest score
    for (scorect=1; scorect<SCORESZ; scorect++) {
	if (s3Scors[scorect]<testlow) {
		testlow=s3Scors[scorect];
	}
    }
    sum3-=testlow; //Subtract lowest score from sum
    //Student 4
    testlow=s4Scors[0]; //Set lowest score
    for (scorect=1; scorect<SCORESZ; scorect++) {
	if (s4Scors[scorect]<testlow) {
		testlow=s4Scors[scorect];
	}
    }
    sum4-=testlow; //Subtract lowest score from sum
    //Student 5
    testlow=s5Scors[0]; //Set lowest score
    for (scorect=1; scorect<SCORESZ; scorect++) {
	if (s5Scors[scorect]<testlow) {
		testlow=s5Scors[scorect];
	}
    }
    sum5-=testlow; //Subtract lowest score from sum
    
    //Averages
    avgstu1=sum1/3;
    avgstu2=sum2/3;
    avgstu3=sum3/3;
    avgstu4=sum4/3;
    avgstu5=sum5/3;
    
    //Assign letter grades
    //Student 1
    if (avgstu1>=90) {
	letGrde[0]='A';
    } else if (avgstu1>=80) {
	letGrde[0]='B';
    } else if (avgstu1>=70) {
	letGrde[0]='C';
    } else if (avgstu1>=60) {
	letGrde[0]='D';
    } else {
	letGrde[0]='F';
    }
    //Student 2
    if (avgstu2>=90) {
	letGrde[1]='A';
    } else if (avgstu2>=80) {
	letGrde[1]='B';
    } else if (avgstu2>=70) {
	letGrde[1]='C';
    } else if (avgstu2>=60) {
	letGrde[1]='D';
    } else {
	letGrde[1]='F';
    }
    //Student 3
    if (avgstu3>=90) {
	letGrde[2]='A';
    } else if (avgstu3>=80) {
	letGrde[2]='B';
    } else if (avgstu3>=70) {
	letGrde[2]='C';
    } else if (avgstu3>=60) {
	letGrde[2]='D';
    } else {
	letGrde[2]='F';
    }
    //Student 4
    if (avgstu4>=90) {
	letGrde[3]='A';
    } else if (avgstu4>=80) {
	letGrde[3]='B';
    } else if (avgstu4>=70) {
	letGrde[3]='C';
    } else if (avgstu4>=60) {
	letGrde[3]='D';
    } else {
	letGrde[3]='F';
    }
    //Student 5
    if (avgstu5>=90) {
	letGrde[4]='A';
    } else if (avgstu5>=80) {
	letGrde[4]='B';
    } else if (avgstu5>=70) {
	letGrde[4]='C';
    } else if (avgstu5>=60) {
	letGrde[4]='D';
    } else {
	letGrde[4]='F';
    }
    
    //Output Results
    //Output the averages and letter grades
    cout<<stName[0]<<" had an average of "<<avgstu1<<" and earned the grade "<<letGrde[0]<<endl;
    cout<<stName[1]<<" had an average of "<<avgstu2<<" and earned the grade "<<letGrde[1]<<endl;
    cout<<stName[2]<<" had an average of "<<avgstu3<<" and earned the grade "<<letGrde[2]<<endl;
    cout<<stName[3]<<" had an average of "<<avgstu4<<" and earned the grade "<<letGrde[3]<<endl;
    cout<<stName[4]<<" had an average of "<<avgstu5<<" and earned the grade "<<letGrde[4]<<endl;
}

void prob8() {
    //Declare Variables
    const int GRADESZ=5; //Stores size of arrays for students' names and letter grades
    const int SCORESZ=4; //Stores size of arrays for student's test scores
    string stName[GRADESZ]; //Stores student's names
    char letGrde[GRADESZ];   //Stores student's letter grades
    float s1Scors[SCORESZ];  //Stores student 1's test scores
    float s2Scors[SCORESZ]; //Stores student 2's test scores
    float s3Scors[SCORESZ]; //Stores student 3's test scores
    float s4Scors[SCORESZ]; //Stores student 4's test scores
    float s5Scors[SCORESZ]; //Stores student 5's test scores
    int scorect; //Loop counter
    
    //Input values
    //Get student's names
    int gradcnt; //Loop counter
    for (gradcnt=0; gradcnt<GRADESZ; gradcnt++) {
	cout<<"Enter the name of student "<<(gradcnt+1)<<endl;
	cin>>stName[gradcnt];
    }
    //Get test scores for the students
    for (gradcnt=0; gradcnt<GRADESZ; gradcnt++) {
	for (scorect=0; scorect<SCORESZ; scorect++) {
		cout<<"Enter the score student "<<(gradcnt+1)<<" earned on test "<<(scorect+1)<<endl;
		if (gradcnt==0) {
			cin>>s1Scors[scorect];
			while (s1Scors[scorect]<0 || s1Scors[scorect]>100) {
				cout<<"Score must be between 0 and 100."<<endl; //Validate input
				cin>>s1Scors[scorect];
			}
		} else if (gradcnt==1) {
			cin>>s2Scors[scorect];
			while (s2Scors[scorect]<0 || s2Scors[scorect]>100) {
				cout<<"Score must be between 0 and 100."<<endl; //Validate input
				cin>>s2Scors[scorect];
			}
		} else if (gradcnt==2) {
			cin>>s3Scors[scorect];
			while (s3Scors[scorect]<0 || s3Scors[scorect]>100) {
				cout<<"Score must be between 0 and 100."<<endl; //Validate input
				cin>>s3Scors[scorect];
			}
		} else if (gradcnt==3) {
			cin>>s4Scors[scorect];
			while (s4Scors[scorect]<0 || s4Scors[scorect]>100) {
				cout<<"Score must be between 0 and 100."<<endl; //Validate input
				cin>>s4Scors[scorect];
			}
		} else {
			cin>>s5Scors[scorect];
			while (s5Scors[scorect]<0 || s5Scors[scorect]>100) {
				cout<<"Score must be between 0 and 100."<<endl; //Validate input
				cin>>s5Scors[scorect];
			}
		}
	}
    }
    
    //Process Calculations
    //Find averages for each student
    //Sum each array
    int sum1=0, sum2=0, sum3=0, sum4=0, sum5=0; //Stores sum of each student's scores
    int avgstu1, avgstu2, avgstu3, avgstu4, avgstu5; //Stores averages for each student
    //Student 1
    for (scorect=0; scorect<SCORESZ; scorect++) {
	sum1+=s1Scors[scorect];
    }
    //Student 2
    for (scorect=0; scorect<SCORESZ; scorect++) {
	sum2+=s2Scors[scorect];
    }
    //Student 3
    for (scorect=0; scorect<SCORESZ; scorect++) {
	sum3+=s3Scors[scorect];
    }
    //Student 4
    for (scorect=0; scorect<SCORESZ; scorect++) {
	sum4+=s4Scors[scorect];
    }
    //Student 5
    for (scorect=0; scorect<SCORESZ; scorect++) {
	sum5+=s5Scors[scorect];
    }
    //Averages
    avgstu1=sum1/4;
    avgstu2=sum2/4;
    avgstu3=sum3/4;
    avgstu4=sum4/4;
    avgstu5=sum5/4;
    
    //Assign letter grades
    //Student 1
    if (avgstu1>=90) {
	letGrde[0]='A';
    } else if (avgstu1>=80) {
	letGrde[0]='B';
    } else if (avgstu1>=70) {
	letGrde[0]='C';
    } else if (avgstu1>=60) {
	letGrde[0]='D';
    } else {
	letGrde[0]='F';
    }
    //Student 2
    if (avgstu2>=90) {
	letGrde[1]='A';
    } else if (avgstu2>=80) {
	letGrde[1]='B';
    } else if (avgstu2>=70) {
	letGrde[1]='C';
    } else if (avgstu2>=60) {
	letGrde[1]='D';
    } else {
	letGrde[1]='F';
    }
    //Student 3
    if (avgstu3>=90) {
	letGrde[2]='A';
    } else if (avgstu3>=80) {
	letGrde[2]='B';
    } else if (avgstu3>=70) {
	letGrde[2]='C';
    } else if (avgstu3>=60) {
	letGrde[2]='D';
    } else {
	letGrde[2]='F';
    }
    //Student 4
    if (avgstu4>=90) {
	letGrde[3]='A';
    } else if (avgstu4>=80) {
	letGrde[3]='B';
    } else if (avgstu4>=70) {
	letGrde[3]='C';
    } else if (avgstu4>=60) {
	letGrde[3]='D';
    } else {
	letGrde[3]='F';
    }
    //Student 5
    if (avgstu5>=90) {
	letGrde[4]='A';
    } else if (avgstu5>=80) {
	letGrde[4]='B';
    } else if (avgstu5>=70) {
	letGrde[4]='C';
    } else if (avgstu5>=60) {
	letGrde[4]='D';
    } else {
	letGrde[4]='F';
    }
    
    //Output Results
    //Output the averages and letter grades
    cout<<stName[0]<<" had an average of "<<avgstu1<<" and earned the grade "<<letGrde[0]<<endl;
    cout<<stName[1]<<" had an average of "<<avgstu2<<" and earned the grade "<<letGrde[1]<<endl;
    cout<<stName[2]<<" had an average of "<<avgstu3<<" and earned the grade "<<letGrde[2]<<endl;
    cout<<stName[3]<<" had an average of "<<avgstu4<<" and earned the grade "<<letGrde[3]<<endl;
    cout<<stName[4]<<" had an average of "<<avgstu5<<" and earned the grade "<<letGrde[4]<<endl;
}

void prob7() {
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
}

void prob6() {
    //Declare Variables
    const int PAYROLL=7; //Size of arrays
    long int empID[PAYROLL]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489}; //Array to hold employee ID's
    int hours[PAYROLL];	     //Array to hold the number of hours each worked
    float payRate[PAYROLL];  //Array to hold each employee's payrate
    float wages[PAYROLL];    //Array to hold each employee's gross wages
    int pyrllct;             //Loop counter
    
    //Input values
    //Get employee's hours
    for (pyrllct=0; pyrllct<PAYROLL; pyrllct++) {
	cout<<"Enter the hours worked by employee "<<(pyrllct+1)<<endl;
	cin>>hours[pyrllct];
	while (hours[pyrllct]<0) {
		cout<<"Hours cannot be negative."<<endl;
		cin>>hours[pyrllct];
	}
    }
    
    //Get employee's pay rates
    for (pyrllct=0; pyrllct<PAYROLL; pyrllct++) {
	cout<<"Enter the pay rate of employee "<<(pyrllct+1)<<endl;
	cin>>payRate[pyrllct];
	while (payRate[pyrllct]<15.00) {
		cout<<"Pay rate must be at least $15.00."<<endl;
		cin>>payRate[pyrllct];
	}
    }

    //Process Calculations
    //Calculate Gross Wages
    wages[0]=hours[0]*payRate[0];
    wages[1]=hours[1]*payRate[1];
    wages[2]=hours[2]*payRate[2];
    wages[3]=hours[3]*payRate[3];
    wages[4]=hours[4]*payRate[4];
    wages[5]=hours[5]*payRate[5];
    wages[6]=hours[6]*payRate[6];

    //Output
    //Display wages
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Employee ID            Wages"<<endl;
    cout<<empID[0]<<"               "<<wages[0]<<endl;
    cout<<empID[1]<<"               "<<wages[1]<<endl;
    cout<<empID[2]<<"               "<<wages[2]<<endl;
    cout<<empID[3]<<"               "<<wages[3]<<endl;
    cout<<empID[4]<<"               "<<wages[4]<<endl;
    cout<<empID[5]<<"               "<<wages[5]<<endl;
    cout<<empID[6]<<"               "<<wages[6]<<endl;
}

void prob5() {
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
}

void prob4() {
//Declare Variables
    const int SIZEN=10; //Size of the array
    int arrayN[SIZEN];  //Array to store numbers
    int n=5;            //number that the function will look for values greater than
    int nCount=0;       //Loop Counter
    
    //Explain program
    cout<<"This program will fill an array with random integers, from 1 to 20, ";
    cout<<" and display all numbers in the array that are greater than 5."<<endl;
    
    //Fill Array
    for (nCount=0; nCount<SIZEN; nCount++) {
        arrayN[nCount]=rand()%20+1; //random number, 1-20
    }
    
    //Send to function
    nCalc(arrayN, SIZEN, n);
}

void nCalc(int arrayN[], int SIZEN, int n) {
    cout<<"The numbers greater than 5 are: "<<endl;
    for (int cntrN=0; cntrN<SIZEN; cntrN++) {
        if (arrayN[cntrN]>n) {
            cout<<arrayN[cntrN]<<" ";
        }
    }
    cout<<endl;
}

void prob3(){
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
}

void prob2(){
    //Declare Variables
    const int NUMMON=12;    //Total number of months, size of array
    float rainFal[NUMMON];  //Array to hold rainfall
    int rCount;             //Loop counter
    
    //Input values
    //Input rainfall
    for (rCount=0; rCount<NUMMON; rCount++) {
	cout<<"Enter the rainfall in inches for month  "<<(rCount+1)<<endl;
	cin>>rainFal[rCount];
	while (rainFal[rCount]<0) {
            cout<<"Amount of rainfall cannot be negative."<<endl;
            cin>>rainFal[rCount];
	}
    }
    
    //Process Calculations
    //Calculate total rainfall for year
    int totRain=0; //Counter for total rain
    for (int rCount=0; rCount<NUMMON; rCount++) {
	totRain+=rainFal[rCount];
    }
    
    //Calculate average rainfall
    float avrgRn=0; //Stores average
    avrgRn=totRain/NUMMON;
    
    //Find highest rainfall
    int hiRain; //Stores highest value
    hiRain=rainFal[0]; //Set highest value to element 1's value
    for (rCount=1; rCount<NUMMON; rCount++) {
	if (rainFal[rCount]>hiRain) {
            hiRain=rainFal[rCount];
	}
    }
    
    //Find lowest rainfall
    int lowRain; //Stores smallest value
    lowRain=rainFal[0]; //Set lowest value to element 1's value
    for (rCount=1; rCount<NUMMON; rCount++) {
	if (rainFal[rCount]<lowRain) {
            lowRain=rainFal[rCount];
	}
    }
    
    //Output Results
    cout<<"The total rainfall for the year was "<<totRain<<" inches."<<endl;
    cout<<"The average rainfall was "<<avrgRn<<endl;
    cout<<"The highest amount of rainfall in one month was "<<hiRain<<" inches."<<endl;
    cout<<"The lowest amount of rainfall in one month was "<<lowRain<<" inches."<<endl;
}

void prob1(){
    //Declare Variables
    const int TOTVALS=10; //Number of values
    int values[TOTVALS];  //Array to hold values
    int count;            //Loop counter
    
    //Input values
    for (count=0; count<TOTVALS; count++) {
	cout<<"Enter the value to go in element "<<count<<endl;
	cin>>values[count];
    }
    
    //Determine the largest value in the array
    int highest; //Stores highest value
    highest=values[0]; //Set highest value to element 1's value
    for (count=1; count<TOTVALS; count++) {
	if (values[count]>highest) {
	highest=values[count];
	}
    }
    
    //Determine the smallest value in the array
    int smallst; //Stores smallest value
    smallst=values[0]; //Set smallest value to element 1's value
    for (count=1; count<TOTVALS; count++) {
	if (values[count]<smallst) {
	smallst=values[count];
	}
    }
    
    //Output results
    cout<<"The largest value input was "<<highest<<endl;
    cout<<"The smallest value input was "<<smallst<<endl;
}