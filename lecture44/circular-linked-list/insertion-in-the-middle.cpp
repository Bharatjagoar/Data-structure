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
    int i =  1 , count = 1;
    while (count<2)
    {
        cout<<head->data<<endl;
        head=head->next;
        if(head==start->next) {       
            count++;
        }
    }
    // cout<<head->data<<endl;
}


void insertion(node * &head,int size){
    int pos,data;
    node* copy = head,*temp;
    cout<<"enter the position"<<endl;
    cin>>pos;
    if(pos>size || pos<1){
        cout<<"invalid Position "<<endl;
        return;
    }
    
    cout<<"enter the data "<<endl;
    cin>>data;
    head=head->next;
    if(pos==1){
        temp=new node(data);
        copy->next=temp;
        temp->next=head;
        temp->prev=head->prev;
        
        head->prev->next = temp;


        head->prev=temp;
        head=copy;
        return;
    }
    int i= 1;
    while(i<pos){
        head=head->next;
        i++;
    }

    if(i==size){
        temp=new node(data);
        cout<<"from data endl; ::: "<<head->data<<endl;

        temp->next=head;
        head->prev->next = temp;
        temp->prev = head->prev;
        head->prev=temp;
        
        head=copy;
        // cout<<"from last "<<"  "<<head->next->prev->data<<endl;
        return;
    }
    temp=new node(data);
    temp->next=head;
    temp->prev=head->prev;
    head->prev->next=temp;
    head->prev=temp;


    cout<<"head potr :: "<<head->data<<endl;
    head=copy;
    return;
}

int main(){
    
    node* head = new node();
    int size= 5;
    creation(head,size);
    print(head,size);
    insertion(head,size);
    print(head,size+1);
    return 0 ;
}