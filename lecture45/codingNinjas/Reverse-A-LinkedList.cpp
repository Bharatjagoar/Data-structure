#include <iostream>
#include <bits/stdc++.h>
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
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

void creationOfLinkList(Node *&head, int size){
    Node* temp,*start=head;
    for (int i = 1; i <= size; i++)
    {
        temp = new Node(i);
        head->next = temp;
        if(i!=size){
            head=head->next;
        }
    }
    head=start;
}


void Print(Node* head){
    
    while (head!=nullptr){
        cout<<head->data<<endl;
        head=head->next;
    }
}

void ReverseLL(Node*&head){
    Node* start = head,*next=head->next;
    Node* previousAdd = head;
    head->next=nullptr;
    head=next;
    while (head!=nullptr)
    {
        cout<<"hello world"<<head->data<<"  "<< previousAdd->data <<endl;

        next = head->next;
        head->next = previousAdd;
        previousAdd=head;
        head=next;
    }
    head=previousAdd;
    cout<<previousAdd->data<<endl;
}


int main()
{
    Node* head = new Node();
    int size = 8;
    creationOfLinkList(head,size);
    head=head->next;
    Print(head);
    ReverseLL(head);
    Print(head);
    return 0;
}