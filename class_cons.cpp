#include<iostream>
using namespace std;

class triangle{
    private:
    int length;
    int heigth;
    public: 
     triangle(){
        length = heigth = 0;
     }
     triangle(int l,int h){
        length=l;
        heigth=h;
     }
     int area(){
        return 0.5*length*heigth;
     }

};
int main(){
   
   int l,h;
   cin>>l>>h;
   triangle t(l,h);
   cout<<t.area();
   //cout<<result;
}