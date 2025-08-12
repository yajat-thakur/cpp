    // Head , position , value , and element

    #include <iostream>
    #include <vector>
    using namespace std;

    class Node {
    public:
        int data;
        Node* next;

        // Constructor to initialize data and next
        Node(int data1, Node* next1 = nullptr) {
            data = data1;
            next = next1;
        }

        Node* con(vector<int> &arr){
            Node * head=new Node(arr[0]);
            Node* mover = head;
            for(int =i ;i<arr.size;i++){
                mover->next=new Node(arr[i]);
                mover=mover->next;
                
            }
        }
        Node *delete_node(Node * head){
            if(head==nullptr){
                return head;
        }
        else{
            Node * temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        }
        Node * removeTail(Node* head){
            Node * temp = head;
            if(head==NULL || head->next==NULL){
                return NULL;
        }
       while(temp->next->next!=NULL){
          temp=temp->next;
       }
       delete temp->next;
       temp->next = nullptr;
       return head;
    }
    Node* position(Node* head,int k){
        if(k==0){
            return head;
        }
        if(k==1)
{

}    }
Node* insertionHead(Node* head,int n){

    Node * nn = new Node(n,head);
    return nn;
}
Node * insertionTail(Node* head,int n){
    if(head==NULL){
        return new Node(n);
    }
    Node * temp = head;
    While(temp->next!=NULL){
        temp = temp->next;
    }
    Node* new_node = new Node(n,val);
    temp->next = new_node;
    return head;
}

    };

    int main() {
        vector<int> arr = {1, 2, 3, 4}; // Correctly declare and initialize the vector
        Node* head = new con(arr); 
        head = delete_node(head);
        head = removeTail(arr);
        head=insertionHead(100,arr);
        head = insertionTail(10,arr);
       cout << head << endl;       // Print the data stored in the Node
        

        delete y; // Free the allocated memory
        return 0;
    }
