#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    //int a[3] = {1,2,3}; // prnt a here becoz a[0] = a here . 
    int *p;
    p= new int[3];
    p[0]=1;p[1]=22;p[2]=3;
    //cout<<*p<<endl;
    //cout<<p<<endl;
    for(int i= 0;i<3;i++){
        cout<<p[i]<<endl;
    }
    delete [ ] p;
}