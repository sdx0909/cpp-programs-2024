// Write a program to find circumference/perimeter of circle.

#include<iostream>
using namespace std;
#include<cmath>
int  main(){
    double r,c;
    cout<<"Enter Radius:";
    cin>>r;
    c=2*M_PI*r;
    cout<<"Circumference/Perimeter of Circle:"<<c;
    return 0;
}