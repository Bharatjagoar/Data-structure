#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next = nullptr;
    node(){}
    node(int data):data(data){}
};

void createList(node*&head,int size){
    node*start=head;
    for (int i = 1; i <= size; i++)
    {
        node*temp = new node(i);
        head->next=temp;
        head = head->next;
    }   
    head=start;
}


void change(node*head){
    node*first=head;
    first->data=123;
}

int main(){
 
    node* head = new node();
    createList(head,7);
    head=head->next;
    
    change(head);
    cout<<head->data<<endl;
    return 0 ;
}