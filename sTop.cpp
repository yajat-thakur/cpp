#include <iostream>
using namespace std;


struct rect {
    int length;
    int breadth;
 } r;

 int area(struct rect *r1){
    (*r1).length++;
    cout<<r1->length<<endl;
    (*r1).breadth++;
    cout<<r1->breadth<<endl;
    int ri = (*r1).length*((*r1).breadth);
    return ri;
}

 int main(){
    r.length =10;
    r.breadth =7;
    
    int result = area(&r);
    cout<<result;

 }