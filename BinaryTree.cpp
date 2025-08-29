#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
    Node* root;

    Node* insert(Node* node, int val) {
        if (!node) return new Node(val);
        if (val<node->data)
            node->left=insert(node->left,val);
        else
            node->right=insert(node->right,val);
        return node;
    }

    int height(Node* node) {
        if (!node) return 0;
        int l=height(node->left);
        int r=height(node->right);
        return 1+max(l,r);
    }

    int minValue(Node* node) {
        if (!node) throw runtime_error("Tree is empty");
        while (node->left) node=node->left;
        return node->data;
    }

    void mirror(Node* node) {
        if (!node) return;
        swap(node->left,node->right);
        mirror(node->left);
        mirror(node->right);
    }

    bool searchBST(Node* node,int val) {
        if (!node) return false;
        if (node->data==val) return true;
        if (val<node->data)
            return searchBST(node->left,val);
        else
            return searchBST(node->right,val);
    }


    bool searchAny(Node* node,int val) {
        if (!node) return false;
        if (node->data==val) return true;
        return searchAny(node->left,val)||searchAny(node->right,val);
    }

    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout<<node->data << " ";
        inorder(node->right);
    }

public:
    BinarySearchTree():root(nullptr) {}

    void insert(int val){
        root=insert(root,val);
    }

    int longestPath(){
        return height(root);
    }

    int minValue(){
        return minValue(root);
    }

    void mirror(){
        mirror(root);
    }

    bool search(int val){
        return searchBST(root,val);
    }

    bool searchInMirrored(int val){
        return searchAny(root,val);
    }

    void printInorder(){
        inorder(root);
        cout<<endl;
    }
};

int main() {
    BinarySearchTree bst;

    int values[]={50,30,20,40,70,60,80};
    for (int v:values){
        bst.insert(v);
    }

    cout << "Inorder traversal: ";
    bst.printInorder();

    int newValue;
    cout << "Enter values to insert (To end write -1): ";
    while (true) {
        cin >> newValue;
        if (newValue == -1) break;
        bst.insert(newValue);
    }

    cout << "Inorder after insertion: ";
    bst.printInorder();

    cout<<"Longest path (height): "<<bst.longestPath()<<endl;
    cout<<"Minimum value: "<<bst.minValue()<<endl;

    int target;
    cout<<"Enter the number want to search: ";
    cin>>target;
    cout<<"Searching "<<target<<": "<<(bst.search(target)?"Found":"Not Found")<<endl;

    bst.mirror();

    cout<<"Inorder after mirroring: ";
    bst.printInorder();
    return 0;
}
