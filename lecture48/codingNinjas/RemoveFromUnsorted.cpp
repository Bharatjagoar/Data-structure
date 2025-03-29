#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Define the Node structure
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Function to create a linked list from an array
Node* createLinkedListFromArray(int arr[], int size)
{
    if (size == 0)
        return NULL;

    Node *head = new Node(arr[0]); // Create the head node
    Node *current = head;

    // Loop through the array to create remaining nodes
    for (int i = 1; i < size; i++)
    {
        Node *newNode = new Node(arr[i]);
        current->next = newNode;
        current = newNode;
    }

    return head;
}

// Function to display the linked list
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}



Node* RemoveDup(Node*head){
    unordered_set<int>visited;
    // display(head);
    Node*current=head,*next,*store,*prev=nullptr;
    // cout<<current->data<<endl;
    // next =current->next;
    visited.insert(current->data);
    prev=current;
    current = current->next;
    while (current!=nullptr)
    {
        
        if( visited.find(current->data)==visited.end()){
            visited.insert(current->data);
            prev=current;
            current=current->next;
            
        }else{
            cout<<prev->data<<endl;
            prev->next=current->next;
            delete current;
            current = prev->next ;
        }
        
    }
    return head;
}





int main()
{
    // Define an array
    int arr[] = {3, 2, 3, 4, 2, 3};

    // Size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create a linked list from the array
    Node *head = createLinkedListFromArray(arr, size);

    // Display the linked list
    display(head);
    head=RemoveDup(head);
    display(head);
    return 0;
}