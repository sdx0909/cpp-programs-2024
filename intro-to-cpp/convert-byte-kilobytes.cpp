#include<iostream>
using namespace std;
int  main(){
    // 1024 bytes == 1 KB
    // 1024 KB    == 1 MB
    int   bytes,kb;
    cout<<"\nEnter Bytes:";
    cin>>bytes;
    kb=bytes/1024;
    cout<<"\nKB:"<<kb;
    return 0;
}