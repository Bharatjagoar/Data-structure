#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void insertEnd(Node*& head, int data) {
    Node* newNode = new Node(data);
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

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}




Node* ReverseLL(Node*head,Node* previous){
    if(head==nullptr){
        return previous;
    }
    Node*temp = head->next;
    head->next = previous;
    return ReverseLL(temp,head);
}

Node* AddSum(Node* first , Node* second){
    int carry = 0 , sum = 0 ;
    Node*Solution= nullptr,*finalSol = nullptr;
    while (first!=nullptr && second!=nullptr)
    {
        sum = first->data+second->data+carry;
        if(sum > 9) carry = 1;
        else carry = 0;
        Node*temp = new Node(sum%10);
        if(Solution==NULL){
            Solution=temp;
            finalSol=temp;
        }else{
            Solution->next=temp;
            Solution=Solution->next;
        }
        
        first=first->next;
        second=second->next;
    }
    cout<<Solution->data<<endl;
    if(first==nullptr){
        if(carry==0)
        Solution->next=second;
        else{
            while (second!=nullptr)
            {
                sum = (second->data)+carry;
                if(sum>9) carry = 1;
                else carry = 0;
                
                Solution->next = new Node(sum%10);
                Solution=Solution->next;  
                second=second->next;  
            }
            
            
        }
    }else if(second==nullptr){
        
        if(carry==0){
            Solution->next=first;
            cout<<first->data<<endl;
        }
        
        else{
            while (first!=nullptr)
            {
                sum = (first->data)+carry;
                if(sum>9) carry = 1;
                else carry = 0;
                Solution->next= new Node(sum%10);
                Solution=Solution->next;
                first=first->next;
            }
        
        }
    }
    // cout<<finalSol->data<<endl;
    return finalSol;
}



int main(){
    int arr1[] = {0, 3, 4, 3, 4, 7, 9, 1, 7, 3, 0, 5, 5, 0, 5, 1, 4, 9, 3, 7, 4, 0, 5, 0, 5, 3, 3, 8, 
        7, 0, 1, 7, 7, 2, 1, 6, 9, 5, 0, 2, 9, 8, 0, 6, 7, 6, 7, 2, 7, 2, 4, 2, 1, 6, 8, 9,
        1, 4, 6, 9, 0, 2, 0, 3, 3, 5, 8, 0, 5, 8, 6, 9, 9, 8, 3, 2, 2, 5, 2, 0, 4, 0, 6, 8,
        1, 5, 3, 4, 6, 9, 1, 2, 1, 5, 6, 3, 7, 9, 2, 8, 4, 0, 4, 3, 2, 0, 7, 7, 2, 4, 2, 8,
        2, 6, 7, 3, 9, 7, 8, 6, 1, 4, 2, 4, 6, 5, 0, 7, 8, 6, 4, 5, 5, 7, 0, 4, 7, 7, 0, 9,
        9, 8, 4, 7, 1, 1, 0, 8, 9, 0, 4, 4, 9, 3, 5, 2, 3, 8, 1, 9, 4, 4, 9, 1, 9, 2, 6, 1,
        2, 2, 7, 4, 0, 9, 8, 5, 1, 1, 7, 4, 1, 1, 4, 6, 3, 2, 5, 4, 2, 1, 3, 5, 7, 1, 9, 2,
        5, 7, 7, 7, 0, 0, 5, 0, 8, 1, 8, 0, 3, 5, 6, 6, 4, 2, 5, 9, 0, 5, 9, 4, 3, 6, 6, 9,
        9, 7, 5, 9, 5, 2, 1, 5, 1, 3, 7, 6, 4, 5, 2, 9, 1, 3, 2, 8, 9, 3, 2, 8, 5, 9, 7, 9,
        0, 0, 9, 4, 0, 8, 0, 3, 9, 4, 8, 8, 4, 9, 6, 2, 7, 8, 6, 2, 6, 8, 7, 8, 1, 0, 2, 5,
        4, 9, 7, 4, 5, 9, 6, 8, 6, 2, 3, 3, 6, 3, 5, 4, 7, 7, 2, 0, 1, 6, 4, 0, 3, 4, 0, 4,
        0, 8, 8, 5, 0, 6, 3, 1, 1, 1, 8};
// Example array in palindrome-like pattern
    int size1 = sizeof(arr1) / sizeof(arr1[0]);



    int arr2[] = {0, 3, 1, 2, 1, 6, 7, 9, 9, 2, 5, 2, 4, 7, 9, 9, 3, 0, 4, 5, 9, 3, 1, 0, 1, 8, 1, 1, 9, 5,
        4, 5, 8, 3, 9, 1, 1, 6, 6, 7, 2, 7, 6, 0, 9, 0, 8, 9, 4, 0, 3, 5, 8, 0, 8, 5, 6, 3, 4, 6,
        9, 3, 0, 4, 6, 3, 0, 5, 3, 0, 6, 3, 2, 8, 2, 6, 7, 7, 8, 9, 3, 7, 1, 5, 3, 1, 9, 2, 4, 9,
        4, 3, 9, 9, 2, 7, 8, 4, 5, 3, 8, 2, 5, 8, 5, 0, 6, 4, 1, 7, 2, 6, 0, 4, 2, 1, 9, 0, 1, 2,
        2, 7, 5, 7, 8, 9, 7, 0, 0, 3, 5, 0, 8, 4, 6, 5, 3, 5, 1, 5, 2, 8, 7, 7, 5, 1, 1, 0, 1, 2,
        2, 4, 0, 4, 0, 7, 0, 3, 3, 6, 1, 3, 6, 9, 6, 7, 4, 3, 5, 9, 3, 7, 4, 3, 6, 1, 4, 6, 2, 9,
        5, 6, 6, 8, 8, 9, 2, 5, 1, 7, 8, 6, 8, 6, 9, 3, 4, 2, 0, 1, 5, 6, 8, 3, 2, 1, 5, 6, 7, 3,
        3, 9, 0, 9, 8, 4, 1, 5, 2, 7, 6, 3, 8, 7, 7, 1, 1, 0, 7, 3, 0, 3, 0, 9, 8, 7, 2, 0, 2, 7,
        0, 1, 9, 1, 1, 6, 1, 5, 9, 6, 4, 9, 2, 8, 5, 7, 5, 5, 0, 4, 0, 1, 0, 4, 1, 2, 9, 1, 8, 1,
        9, 3, 6, 2, 8, 2, 9, 1, 9, 6, 4, 6, 6, 5, 3, 7, 5, 4, 7, 4, 0, 1, 1, 5, 1, 0, 0, 6, 3, 9,
        3, 4, 8, 9, 4, 7, 2, 6, 5, 2, 6, 4, 2, 3, 6, 3, 5, 0, 9};

// Example array in palindrome-like pattern
    int size2 = sizeof(arr2) / sizeof(int);
    Node* head = nullptr;
    Node*first= nullptr;
    Node*second = nullptr; 

    generateLinkedList(first, arr1, size1);
    generateLinkedList(second, arr2, size2);
    
    // printList(first);
    first= ReverseLL(first,nullptr);
    // printList(first);

    // printList(second);
    second= ReverseLL(second,nullptr);
    // printList(second);
    head = AddSum(first,second);
    head =  ReverseLL(head,nullptr);
    while (head->data==0){
        head=head->next;
    }
    {
        /* code */
    }
    
    printList(head);

    return 0 ;
}