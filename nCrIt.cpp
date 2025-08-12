#include<iostream>
using namespace std;

int c (int n,int r){
    if(n==0 || n==1){
        return n;
    }
    return c(n-1,r-1)+c(n-1,r);
}

int main(){
    int n,r;
    cin>>n>>r;
    int result = c(n,r);
    cout<<result;
    
}