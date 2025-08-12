#include<iostream>
using namespace std;

int fib(int n){
    static int t0=0,t1=1;
    if(n<=1){
        return n;
    }
    return fib(n-2)+fib(n-1);
};

int main(){
    int n ;
    cin>>n;
    int result = fib(n);
    cout<<result;
}