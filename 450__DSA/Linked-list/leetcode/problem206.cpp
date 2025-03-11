#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class ListNode{
    public:
    int data;
    ListNode* next = nullptr;
    ListNode(){};
    ListNode(int data):data(data){};
};


void createlinkedList(ListNode* &head,int size){
    ListNode*copy=head;
    for(int i = 1 ; i <= size ; i++){
        ListNode*temp =new ListNode(i);
        head->next=temp;
        head=head->next;
    }
    head=copy;
    head=head->next;
}


void print(ListNode*head){
    while (head!=nullptr)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}


void ReverseLinkedList(ListNode* &head,ListNode* prev,ListNode*&store){
    if(head==nullptr){
        cout<<"hellfdsafdsafdsa         "<<prev->data<<endl;
        store=prev;
        return;
    }
    ReverseLinkedList(head->next,head,store);
    head->next=prev;
}


int main(){

    ListNode* head = new ListNode();
    int size = 5;
    createlinkedList(head,size);

    print(head);
    
    ListNode* previous=NULL,*store;
    cout<<"hellow"<<endl; 
    ReverseLinkedList(head,previous,store);
    cout<<store->data<<endl;
    print(store);
    return 0 ;
}