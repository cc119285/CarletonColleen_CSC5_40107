/* 
  File:   main.cpp
  Author: Colleen Carleton
  Created on February 7th, 2017, 12:15 PM
  Purpose: Compares the total time of Mark Sort and Bubble Sort
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
void markSrt(int [],int);
void bublSrt(int [],int);
void copy(int [],int [],int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=200000;
    const int utilize=SIZE/2;
    int array[utilize]={};
    int brray[utilize]={};
    
    //Input values
    filAray(array,utilize);
    copy(array,brray,utilize);
    //prntAry(array,utilize,10);
    //prntAry(brray,utilize,10);
    
    //Process by mapping inputs to outputs
    unsigned int bega=static_cast<unsigned int>(time(0));
    markSrt(array,utilize);
    unsigned int enda=static_cast<unsigned int>(time(0));
    cout<<"Total Time for 1 function sort= "<<enda-bega<<" sec"<<endl;
    
    //Process by mapping inputs to outputs
    unsigned int begb=static_cast<unsigned int>(time(0));
    bublSrt(brray, utilize);
    unsigned int endb=static_cast<unsigned int>(time(0));
    cout<<"Total Time for bubble sort = "<<endb-begb<<" sec"<<endl;
    
    cout<<"Time savings is = "<<(1.0f*(endb-begb)/(enda-bega)-1)*100<<"%"<<endl;
    
    //Output values
    //prntAry(array,utilize,10);
    //prntAry(brray,utilize,10);

    //Exit stage right!
    return 0;
}

void bublSrt(int brray[],int utilize) {
    bool swap;
    int temp;
    do {
        swap=false;
        for (int count=0; count<(utilize-1); count++) {
            if (brray[count]<brray[count+1]) {
                temp=brray[count];
                brray[count]=brray[count+1];
                brray[count+1]=temp;
                swap=true;
            }
        }
    } while (swap);
}

void copy(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}

void markSrt(int a[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(a[j]>a[i]){
                a[j]=a[j]^a[i];
                a[i]=a[j]^a[i];
                a[j]=a[j]^a[i];
            }
        }        
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand();
    }
}