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
    node* current,*temp,*head;
    int data;
    
    cout<<"enter data :: ";
    cin>>data;
    current= new node(data);
    head= current;


    if(size>=2){
        for(int i = 2 ; i <=size ; i++){
            cout<<"enter data :: ";
            cin>>data;
            temp = new node(data);
            current->next =temp;
            temp->prev = current;
            
            if(i!=size){
                current=current->next;
            }
            // end case handle karo 
        }
    }
    return head;
}



void print(node* ptr){
    while(ptr->next!=nullptr){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<ptr->data<<endl;
    cout<<"Reverse :- "<<endl;

    while (ptr!=nullptr)
    {
        cout<<ptr->data;
        ptr = ptr->prev;
    }
    
}

int main(){
    
    node * head,*tail;
    int size;
    cout<<"enter the size :: "<<endl;
    cin>>size;
    head = createDoublyLL(head,size);
    print(head);
    // cout<<"next :: "<<tail->next->data<<endl;
    return 0 ;
}