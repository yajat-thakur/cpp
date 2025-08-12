#include<iostream>
#include<cstring>
using namespace std;

struct cards {
   int face;
   int shape;
   char color[20]; // alloacte tge size of 4 but out of it use only one ....
    
};

int main(){
 struct cards c;
 c.face=1;
 c.shape=2;
 strcpy(c.color,"red");
 cout<<sizeof(c)<<endl;  
 cout<<c.color; 
 
}