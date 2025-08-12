#include<iostream>
using namespace std;

int * function(int n){
    int *p;
    p=new int [5];
    for(int i=0;i<5;i++){
        cout<<*p<<endl;
    }
    return p;

}
int main(){
    int *f;
    f=function(5);
    return 0;


}