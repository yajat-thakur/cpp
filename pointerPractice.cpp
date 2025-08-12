//these are the address variable used to store the address of the variable
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    p=&a;
   cout<<p<<endl;
   p=new int[5];// dynamically allocation of memory.......
   // In case of array
   int *q;
   int array[2]={1,2};
   q=array;
   //referece 
   int s=10;
   int &r=s;
   cout<<r<<endl;
   cout<<&r<<endl;
   cout<<&s<<endl;

}