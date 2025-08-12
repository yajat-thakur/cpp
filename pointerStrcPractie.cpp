#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

struct cars{
    int model;
    string name;
};

int main(){
    struct cars c;
    int *p;
    p=&c;
    cout<<p->model<<endl;
    c.model = 1;
    c.name = "Toyota";
    cout << c.model << endl;
    cout<<c.name<<endl;
}