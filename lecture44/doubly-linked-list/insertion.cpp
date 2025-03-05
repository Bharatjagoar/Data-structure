#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* next = nullptr;
    node* prev = nullptr;
    node(int data) : data(data){}
};


node* createDoublyLL(node* ptr,int size){
    node* last,*temp;
    int data ;
    for(int i = 1 ; i <= size;i++){
        cout<<"enter data :: "<<"";
        cin>>data;
        temp = new node(data);
        
        if(i!=1){
            temp->prev=ptr;
        }
        ptr->next=temp;
        cout<<"fdsa"<<i<<endl;
        ptr=ptr->next;
        
    }
    cout<<"hellfdsa?"<<endl;
    return ptr;
}



void insertion(node * ptr){
    
    
}

int main(){
    
    node * head,*tail;
    int size;
    cout<<"enter the size :: "<<endl;
    cin>>size;
    tail = createDoublyLL(head,size);
    cout<<"fdsafdsafdsafdsafad :: "<<tail->data<<endl;

    return 0 ;
}