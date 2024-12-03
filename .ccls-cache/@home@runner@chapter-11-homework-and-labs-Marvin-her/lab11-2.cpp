//Lab 11-2.cpp - displays 5K average and lowest time
//Created/revised by Matthew Dasch on 12/3/2024

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double averageTime(double times[], int numElements){
    double total=0.0;
    for(int x=0; x<numElements; x++){
        total+=times[x];
    }
    double avg=total/numElements;
    
return round(avg*10)/10;
}

double lowestTime(double times[], int numElements){
    double lowest=times[0];
    for(int x=0; x<numElements; x++){
        if(times[x]<lowest){
            lowest=times[x];
        }
    }
    return lowest;
}

int main()
{
   double raceTime[5] = {0.0};
    for(int i=0; i<5; i++){
        cout<<"Enter time for race "<<i+1<<": ";
        cin>>raceTime[i];
    }
    cout<<"Average time: "<<averageTime(raceTime, 5)<<endl;
    cout<<"Lowest time: "<<lowestTime(raceTime, 5)<<endl;
    
    
    
    return 0;
}//end of main function