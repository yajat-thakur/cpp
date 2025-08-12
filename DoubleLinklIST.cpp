#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    // Constructor with parameters for data, next, and back pointers
    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr) {
        data = data1;
        next = next1;
        back = back1;
    }

    // Member function to create a linked list from a vector
    Node* con(vector<int>& arr) {
        if (arr.empty()) return nullptr; // Handle empty vector case
        Node* head = new Node(arr[0]);  // Create the head node
        Node* prev = head;
        for (size_t i = 1; i < arr.size(); i++) {  // Loop through remaining elements
            Node* temp = new Node(arr[i]);
            prev->next = temp;  // Link current node to the next
            temp->back = prev;  // Link current node to the previous
            prev = temp;        // Update the previous node
        }
        return head; // Return the head of the linked list
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 45};  // Vector to create linked list

    // Create a Node object dynamically using `new`
    Node* temp = new Node(0);  // Temporary node to access the member function
    Node* head = temp->con(arr);

    // Print the linked list to verify
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Clean up memory (delete linked list nodes and temp)
    current = head;
    while (current != nullptr) {
        Node* tempNode = current;
        current = current->next;
        delete tempNode;
    }
    delete temp; // Clean up the dynamically created `temp` Node object

    return 0;
}
