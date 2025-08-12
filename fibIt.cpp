#include<iostream>
using namespace std;

int main(){
    int t0=0 ,t1=1,s,n;
    cin>>n;
    if(n<=1){
        cout<<n;
    }
    for(int i = 1 ;i<n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;

    }
    cout<<s;
}