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


void ReverseLinklist(Node* &head ,Node* previous,Node* &last){
    if(head==nullptr){
        cout<<"prev"<<previous->data<<endl;
        last=previous;
        return ;
    }
    Node*next = head->next;
    head->next=previous;
    ReverseLinklist(next,head,last);
}   


int main(){
 
    Node*head = new Node();
    int size=3;
    creationOfLinkList(head,size);
    Print(head->next);
    
    Node* previous = nullptr,*last;
    head=head->next;

    ReverseLinklist(head,previous,last);
    
    Print(last);
    return 0 ;
} 