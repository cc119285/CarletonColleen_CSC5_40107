/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 4, 2017, 7:50 PM
  Purpose: Program that uses Arrays to determine the grades of students
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

    
    //Exit
    return 0;
}

