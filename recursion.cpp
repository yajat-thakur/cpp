#include<iostream>
using namespace std;
int bdd(int b){
if(b>0){
    cout<<b<<endl;
    bdd(b-1);
    cout<<endl;
    bdd(b-1);   
}
};
int main(){
    int b;
    cin>>b;
    bdd(b);
}; 