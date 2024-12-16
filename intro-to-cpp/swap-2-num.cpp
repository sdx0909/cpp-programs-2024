// Write a program to swap two numbers.
#include<iostream>
using  namespace std;
int  main(){
    int  a,b;
    cout<<"\nEnter value of A:";
    cin>>a;
    cout<<"\nEnter value of B:";
    cin>>b;
    // swapping logic-- without using third number
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nValue of A:"<<a;
    cout<<"\nValue of B:"<<b;
    return 0;
}