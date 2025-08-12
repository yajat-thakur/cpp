#include<iostream>
using namespace std;

int main(){
    char x[]={'A','M','B','U','J','\0'};
    string u = "Ambuj Rajput";
    for(int i = 0;i<6;i++){
       if(x[i] == '\0'){
         cout<<"null value"<<endl;
       }
       else{
         cout<<"not null value here"<<endl;
         }
         
    cout<<x[i]<<endl;

    }
    cout<<endl;
    cout<<u[1];
    
}