#include <iostream>
#include<bits/stdc++.h>

using namespace std;

// Class definition for Node
class Node {
public:
    int data;
    Node* next;
    
    // Default constructor
    Node() {
        this->data = 0;
        this->next = NULL;
    }
    
    // Constructor with data
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    
    // Constructor with data and next pointer
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

// Function to generate a linked list from an array
Node* generateLinkedList(int arr[], int size) {
    if (size == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < size; i++) {
        current->next = new Node(arr[i]);
        current = current->next;
    }

    return head;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}


Node* Sort012(Node* head){
    Node* one = new Node(),*one1=one;
    Node* two = new Node() , *two2 = two;
    Node* zero = new Node(), *zero0 =zero ;

    // Node* store = head;
    Node* temp = new Node(0);
    while (head!=NULL)
    {
        int data = head->data;
        switch(data){
            case 0:
                temp = new Node(0);
                zero->next=temp;
                zero=zero->next;
                break;
            case 1:
                temp = new Node(1);
                one->next=temp;
                one=one->next;
                break;
            case 2:
                temp = new Node(2);
                two->next =temp;
                two=two->next;
                break;
        }
        head=head->next;
    }
    cout<<one->data<<endl;
    head=zero0->next;
    zero->next=one1->next;
    one->next=two2->next;
    return head;
}

int main() {
    // Hardcoded array
    int arr[] = {1, 0, 2, 1, 0, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create the linked list from the hardcoded array
    Node* linkedList = generateLinkedList(arr, size);

    // Print the array and the linked list
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Linked List: ";
    linkedList = Sort012(linkedList);
    printLinkedList(linkedList);

    return 0;
}