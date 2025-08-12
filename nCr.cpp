#include<iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1){
        return n;
    }
    return fact(n-1)*n;
}
int c(int n,int r){
    //int t0,t1;
    if(n==0 || n==1){
        return n;
    }
    return fact(n)/fact(n)*fact(n-r);
}
int main(){
    int n,r;
    cin>>n>>r;
    fact(n);
    int result = c(n,r);
    cout<<result;
}