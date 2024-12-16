// Write a program which accept six subject marks and calculate total marks and percentage.
#include<iostream>
using namespace std;
int main(){
    int    marks[6];
    float  total,per;
    cout<<"\nEnter 6 Subjects Marks:";
    for(int i=0;i<=5;i++){
        cin>>marks[i];
    }
    for(int i=0;i<=5;i++){
        total+=marks[i];
    }
    per=(total)/600*100;
    cout<<"\nTotal Marks:"<<total;
    cout<<"\nPercentage:"<<per;
    return 0;
}