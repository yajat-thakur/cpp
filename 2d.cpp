#include<iostream>
using namespace std;

int main(){
    int arr[2][3];
    int i,j;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
   

    for( i=0 ;i<2;i++){
        for( j=1;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

        // int *arr[2];

        // arr[0]=new int[3]
        // arr[1]=new int[3]
    }
}