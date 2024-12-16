// Write a program which calculate (x^y) by using inbuilt function.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,y,z;
    cout<<"\nEnter value of X:";
    cin>>x;
    cout<<"\nEnter valur of Y:";
    cin>>y;
    z=pow(x,y);
    cout<<"\nx^y:"<<z;
    return 0;
}