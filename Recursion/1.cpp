#include <iostream>
using namespace std;
int cnt= 0 ;
int printName(string name){
    
    if(cnt==3){
        return cnt;
    };
    cout<<name<<endl;
    cnt++;
    printName(name);
} 
int main(){
    string name;
    cin>>name;
    printName(name);
}