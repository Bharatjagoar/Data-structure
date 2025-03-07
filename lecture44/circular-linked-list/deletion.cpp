#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;
    node(int data):data(data){};
    node(){};
};


void creation(node* &head,int size){
    node* temp,*copy,*first;
    copy = head;

    for (int i = 1; i <= size; i++)
    {
        temp = new node(i);
        if(i == 1){
            first = temp;
            head->next = temp;
            head=temp;
            continue;
        }
        head->next = temp;
        temp->prev=head;
        head=head->next;
        if(i==size){
            head->next=first;
            first->prev=head;
        }
    }
    head=copy;
}

void print(node* head,int size){
    node* start= head;
    head=head->next;
    int i =  1 , count = 0;
    while (count<1)
    {
        cout<<head->data<<endl;
        head=head->next;
        if(head==start->next) count++;
    }
    // cout<<head->prev->data<<endl;
}

void deletion(node* &head){
    node* start = head ,*second;
    int pos;
    head=head->next;
    cout<<"enter the position ::";
    cin>>pos;
    if(pos==1){
        second = head->next;
        start->next = second;
        second->prev = head->prev;
        head->prev->next = second;
        delete head;
        return;
    }
    int i=1;
    while (i!=pos)
    {
        head=head->next;
        i++;
    }
    // cout<<head->data<<endl;
    if(head->next==start->next){
        start->next->prev=head->prev;
        head->prev->next = start->next;
        delete head;
        head=start;
        return;
    }
    second=head->next;
    head->prev->next = second ;
    second->prev=head->prev;
    delete head;
    head = start;
}


int main(){
    
    node* head = new node();
    creation(head,5);
    print(head,5);
    deletion(head);
    print(head,2);
    return 0 ;
}