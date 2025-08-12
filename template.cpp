#include<iostream>
#include<cmath>
using namespace std;

template<class t>
class cir{
    private:
     t radius;
    public :
     cir(){
        radius = 0;
     }
     cir(t radius);
      area();
};
template<class t>
cir<t>::cir(t radius){
    this->radius = radius;

}
template<class t>
cir<t>::area(){
    return 3.14*pow(radius,2);
}

int main(){
    int r;
    cin>>r;
    cir<float> re(r);
    cout<<re.area();

}