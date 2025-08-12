#include<iostream>
using namespace std;

int count(int *array,int size)
{
    int cnt=0;
    for(int i =0;i<size;i++){
        cout<<array[i]<<endl;
        cnt++;
    }
    return cnt;
   // cout<<cnt<<endl;
}
int main(){
int array[10]={0};
int size=10;
count(array,size);

}