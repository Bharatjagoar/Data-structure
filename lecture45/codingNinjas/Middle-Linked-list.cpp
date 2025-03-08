#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = nullptr;
    }
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* ReturnMiddle(Node* head){
    int i = 1,count=0;
    Node* start=head;
    while (head!= nullptr)
    {
        count++;
        head=head->next;
    }
    // cout<<count<<endl;
    count = count/2;
    i=0;
    head = start;
    while (i<count)
    {
        head=head->next;
        i++;
    }
    cout<<head->data<<endl;
    cout<<count<<endl;
    return head;
}


int main(){
 
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);

    // Linking the nodes
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next=nullptr;
    


    ReturnMiddle(n1);
 
    return 0 ;
}