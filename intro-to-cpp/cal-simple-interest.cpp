// Write a program to calculate simple interest.
#include<iostream>
using namespace std;
int main(){
    float  principle,total;
    int    rate,time,si; 
    cout<<"Enter Principle:";
    cin>>principle;
    cout<<"\nEnter Rate:";
    cin>>rate;
    cout<<"\nEnter Time-Period(year):";
    cin>>time;
    total=(principle*time*rate);
    si=total/100;
    cout<<"\nSimple Interest:"<<si;
    return  0;
}