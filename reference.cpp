#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int &r = a;
    cout<<r<<endl;
     int g =30;
    r=g;
    cout<<r<<endl;
    int b = 25;
    int &v = b;
    cout<<v;
    
}
