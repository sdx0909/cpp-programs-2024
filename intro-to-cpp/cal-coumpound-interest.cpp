#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float   principle,rate,time;
    float   amt,base,power,ci;
    cout<<"\nEnter Principle Amount:";
    cin>>principle;
    cout<<"\nEnter Rate:";
    cin>>rate;
    cout<<"\nEnter Time-Period:(Years)";
    cin>>time;
    base=(1+(rate/100));
    power=pow(base,time);
    amt=principle*power;
    cout<<amt;
    ci=amt-principle;
    cout<<"\nCoumpound Interest:"<<ci;
    return 0;
}


// p,r,t

// A =P(1+R/100)^N