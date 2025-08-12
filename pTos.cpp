#include<iostream>
using namespace std;

struct r {
    int length;
    int breadth;

};
int main(){
  struct r d;
  struct r *p ;
  p=&d;
  p->breadth=10;
  cout<<p->breadth;
}