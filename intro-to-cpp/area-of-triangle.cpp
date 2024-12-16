// Write a program to find area of triangle.
#include<iostream>
using namespace std;
int main(){
    float base,height,area;
    cout<<"\nEnter Base:";
    cin>>base;
    cout<<"\nEnter Height:";
    cin>>height;
    area=0.5*base*height;
    cout<<"\nArea of Triangle:"<<area;
    return 0;
}