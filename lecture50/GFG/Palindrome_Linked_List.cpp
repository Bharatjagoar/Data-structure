#include <iostream>
#include<bits/stdc++.h>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertEnd(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to generate the linked list from the array
void generateLinkedList(Node*& head, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        insertEnd(head, arr[i]);
    }
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node* ReverseLL(Node*head,Node*previous){
    if(head==nullptr){
        return previous;
    }
    Node* temp = head->next,*temp2=nullptr;
    head->next = previous;
    temp2 = ReverseLL(temp,head);
    return temp2;
}

bool checkPalindrome(Node*head){
    // cout<<"fdss :: "<<head->data<<endl;
    // Node*
    Node* slow=head;
    Node* fast=head;
    Node* previous=nullptr;
    
    while(fast != nullptr && fast->next != nullptr){
        previous = slow;
        fast = fast->next->next;
        slow = slow->next;
    }

    if(fast!=NULL){
        slow=slow->next;
    }
    
    fast = ReverseLL(slow,NULL);
    cout<<slow->data<<endl;
    // cout<<slow->data<<endl;
    while(fast!=NULL){
        if(fast->data!=head->data){
            return false;
        }
        fast=fast->next;
        head=head->next;
    }

    return true;
}



int main() {
    int arr[] = {1,1,2,1}; // Example array in palindrome-like pattern
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = nullptr;

    generateLinkedList(head, arr, size);
    cout<<checkPalindrome(head);
    // cout << "Generated Linked List: "<<endl;
    // printList(head);

    return 0;
}