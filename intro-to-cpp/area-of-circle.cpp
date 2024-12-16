// Write a program to find out area of circle.
#include<iostream>
#include<cmath> // for M_PI = PI
using namespace std;
int  main(){
    double  r,area;
    cout<<"\nEnter Radius:";
    cin>>r;
    area=PI*r*r;
    cout<<"\nArea of circle:"<<area;
    return 0;
}