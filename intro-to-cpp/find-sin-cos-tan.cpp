// Write a program to find sin,cos,tan of entered number.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int   num;
    cout<<"Enter Number:";
    cin>>num;
    cout<<"\nSin value:"<<sin(num);
    cout<<"\nCos value:"<<cos(num);
    cout<<"\nTan value:"<<tan(num);
    return 0;
}