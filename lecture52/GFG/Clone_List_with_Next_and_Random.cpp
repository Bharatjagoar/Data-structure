#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;




// Definition of the Node structure
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

// Function to create a linked list from an array
Node* createLinkedList(const vector<int>& arr) {
    if (arr.empty()) {
        return NULL; // Return NULL if the array is empty
    }

    Node* head = new Node(arr[0]); // Create the head node
    Node* current = head;
    vector<Node*> nodes; // Vector to store pointers to all nodes
    nodes.push_back(head);

    // Loop through the array and create nodes
    for (size_t i = 1; i < arr.size(); ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
        nodes.push_back(current); // Store the pointer to the newly created node
    }

    // Assign random pointers
    srand(time(0)); // Seed for randomness
    for (Node* node : nodes) {
        int randomIndex = rand() % nodes.size(); // Generate a random index
        node->random = nodes[randomIndex];      // Assign the random pointer
    }

    return head; // Return the head of the linked list
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << "Data: " << temp->data<<" add : "<<temp << ", Random: ";
        if (temp->random) {
            cout << temp->random<<"      "<<temp->random->data; // Print the data of the random pointer
        } else {
            cout << "NULL"; // If random pointer is null
        }
        cout << endl;
        temp = temp->next;
    }
}












Node* cloneTheList(Node*head){
    Node*store = head;
    while (head!=nullptr)
    {
        Node*temp = new Node(head->data);
        temp->next=head->next;
        head->next=temp;
        head=temp->next;
    }
    head=store;

    printLinkedList(head);
    Node*clonehead = head->next,*cloneHead2;
    cloneHead2=clonehead;
    cout<<clonehead->data<<"  "<<head->data<<endl;

    // fix the random pointers

    while (head!=nullptr)
    {
        /* code */
        if(head->random!=nullptr){
            clonehead->random = head->random->next;
        }
        if(clonehead->next!=nullptr) 
        clonehead = clonehead->next->next;

        head=head->next->next;
    }
    
    clonehead=cloneHead2;
    
    cout<<endl;


    head=store;


    while (head!=nullptr)
    {
        Node*temp = nullptr;
        if(head->next!=nullptr){
            head->next=head->next->next;

        }
        if(head->random!=nullptr)
        clonehead->random = head->random->next;

        if(clonehead->next!=nullptr){
            clonehead->next=clonehead->next->next;
            clonehead=clonehead->next;
        }
        head=head->next;
        // head=temp;`
    }
    clonehead=cloneHead2;
    // cout<<head<<endl;
    head=store;
    printLinkedList(head);
    cout<<endl;
    printLinkedList(clonehead);

}














int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Example input array

    // Create the linked list with random pointers
    Node* head = createLinkedList(arr),*head2;
    head2=head;
    while (head!=nullptr)
    {
        /* code */
        cout<<head<<endl;
        head=head->next;
    }
    head=head2;
    // cout<<head->next<<endl;
    // Print the linked list
    Node*test= cloneTheList(head);
    
    
    
    // printLinkedList(head);
    // cout<<head->random->data<<endl;
    return 0;
}