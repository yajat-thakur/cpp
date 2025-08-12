#include<iostream>
using namespace std;

int area(int l,int b){

return l*b;
}

int main(){
    int l=0,b=0;
    cin>>l>>b;
    int ar=area(l,b);
    cout<<"area: "<<ar<<endl;
}