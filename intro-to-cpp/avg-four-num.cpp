// Write a program to a find average of four numbers.
#include <iostream>
using namespace std;
int main(){
    int a, b, c, d;
    float avg;
    cout<<"Enter 4 Numbers:";
    cin>>a>>b>>c>>d;
    avg = (a+b+c+d) / 4;
    cout<<"\nAverage:"<<avg;
    return 0;
}
