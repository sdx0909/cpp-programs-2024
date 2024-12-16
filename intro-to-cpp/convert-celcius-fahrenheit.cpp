#include<iostream>
using namespace std;
int  main(){
    float   cel,fah;
    cout<<"\nEnter Temparature in CELCIUS:";
    cin>>cel;
    fah=cel*(1.8)+32;
    cout<<"\nTemprature in FAHRENHEIT:"<<fah;
    return 0;
}