#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
struct cars{
        int number;
        int model;
        string name;
    };

int main(){
    struct cars c;
    c.number=1;
    c.model=2024;
    c.name="Toyota";
    cout<<c.number<<endl;
    cout<<c.model<<endl;
    cout<<c.name;
}