#include<iostream>
using namespace std;

void TOH(int d,int a1,int a2,int a3){

    if(d>0){
        TOH(d-1,a1,a3,a2);
        cout<<"( "<<a1<<","<<a3<<" )"<<endl;
        TOH(d-1,a2,a1,a3);

    }
}



int main(){

    int d,a1,a2,a3;
    cin>>d>>a1>>a2>>a3;
    TOH(d,a1,a2,a3);



}