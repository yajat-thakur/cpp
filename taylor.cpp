#include<iostream>
using namespace std;

int taylor(int x,int n)
{
    static int p =1 ;
    if( n == 0){
        return p ;
    }
    p = 1+x/n*p;
    return taylor(x,n-1);
}
int main(){
    int r =  taylor(5,4);
    cout<<r;

    
}