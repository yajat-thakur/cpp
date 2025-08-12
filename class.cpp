#include<iostream>
using namespace std;

class rectnagle{
public:  
     int length;
     int breadth;
public:
    int area(int l,int b){
     return l*b;
    }
    //~rectnagle; delete [ ] rect.

};
int main(){
    rectnagle rect;
    int l,b;
    cin>>l>>b;
    int r = rect.area(l,b);
    cout<<r;
    
}