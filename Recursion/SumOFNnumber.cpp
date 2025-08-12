#include <iostream>
using namespace std;
int SumOFn_number(int n){
if(n ==0 || n < 0 ){
    return 0;
    return n * SumOFn_number(n-1);
}
cout<<n<<endl;
return n+SumOFn_number(n-1);

}
int main(){
    int n;
    cin>>n;
    cout<<SumOFn_number(n);
    //cout<<sum;
}