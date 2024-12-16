#include<iostream>
#include<process.h>
using namespace std;
void  simple();
int  getHours(int,int);
int  getMinutes(int,int);
int  getSeconds(int,int);
int main(){
    int  ch,hr,min,sec;
    
    //  1- Hour  2- Minute  3- Second
    do{
        cout<<"\n1:Hour\n2:Minute\n3:Second\n4:Exit";
        cout<<"\nEnter Choice:";
        cin>>ch;
        switch(ch){
            case  1:
                cout<<"\nEnter Time(Hour):";
                cin>>hr;
                cout<<"\nTime(Minutes):"<<getMinutes(hr,1);
                cout<<"\nTime(Seconds):"<<getSeconds(hr,1);
                cout<<endl;
                break;
            case  2:
                cout<<"\nEnter Time(Minutes):";
                cin>>min;
                cout<<"\nTime(Hours):"<<getHours(min,2);
                cout<<"\nTime(Seconds):"<<getSeconds(min,2);
                cout<<endl;
                break;
            case  3:
                cout<<"\nEnter Time(Seconds):";
                cin>>sec;
                cout<<"\nTime(Hours):"<<getHours(sec,3);
                cout<<"\nTime(Minutes):"<<getMinutes(sec,3);
                cout<<endl;
                break;
            case  4:
                exit(2);
        }
    }while(ch!=4);
    return 0;
}
int   getHours(int  time,int  flag){
    if(flag==2){ // input in MINUTES
        return (time/60);
    }
    else if(flag==3){ // input in SECONDS
        return (time/3600);
    }
}
int getMinutes(int  time,int flag){
    if(flag==1){ // input in HOUR
        return(60*time);
    }
    else if(flag==3){ // input in  SECOND
        return(time/60);
    }
}
int getSeconds(int  time,int flag){
    if(flag==1) { // input in HOUR
        return (60*60*time);
    }
    else if(flag == 2) { // input in MINUTES
        return (60*time);
    }
}



void simple(){
    int  hr,min,sec;
    cout<<"\nEnter Time(Hour):";
    cin>>hr;
    min=60*hr;
    sec=60*min;
    cout<<"\nTime(Minutes):"<<min;
    cout<<"\nTime(Seconds):"<<sec;

}


