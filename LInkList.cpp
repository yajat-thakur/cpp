
#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node * next;
}*first=NULL;
void list(int a[],int n){
    int i;
    struct Node *t, *last;
    first=new Node;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(i=0;i<n;i++){
        t=new Node;
        t->data=a[i];
        t->next=NULL;
        last=t;
    }
}
void display(struct Node * p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}


int mian(){
    int a[4]={1,2,3,4};
    int n =4;
    list(a,n);
    display(first);

}