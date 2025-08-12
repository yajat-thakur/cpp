#include<iostream>
using namespace std;

int * fun(int size ){
    int *p;
    p=new int[5];
    for(int i=0;i<5;i++){
        p[i]=i+1;
    }
    return p;
}

int main(){

    int *ptr,sz=5;
    ptr=fun(sz);
    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<endl;
    }

}