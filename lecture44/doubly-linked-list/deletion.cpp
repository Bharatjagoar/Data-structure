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
    
    current= new node(1);
    head= current;


    if(size>=2){
        for(int i = 2 ; i <=size ; i++){
            temp = new node(i);
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
        cout<<ptr->data<<endl;
        ptr = ptr->prev;
    }    
}


void deletion(node* &head, int pos, int size){
    if(pos<1 || pos>size){
        cout<<"Invalid position"<<endl;
        return ;
    }
    node* temp = head;
    if(pos == 1){
        head=head->next;
        delete head->prev;
        head->prev = nullptr ;
        return;
    }
    int i = 1 ;

    while (i<pos)
    {
        head = head->next;
        i++;
    }
    if(i==size) {
        cout<<"hfdsa"<<endl;
        head=head->prev;
        delete head->next;
        head->next = nullptr ;
        head=temp;
        return;
    }
    node* temp2;
    head=head->prev;
    temp2=head->next->next;
    temp2->prev=head;
    delete head->next;
    head->next=temp2;
    
    delete temp2;
    head=temp;
    // cout<<"data :: "<<head->data<<"  "<<i<<endl;
}

int main(){
    node * head,*tail;
    int size,pos;
    cout<<"enter the size :: "<<endl;
    cin>>size;
    head = createDoublyLL(head,size);
    print(head);
    cout<<"enter position :: ";
    cin>>pos;
    deletion(head,pos,size);
    print(head);
    // cout<<"next :: "<<tail->next->data<<endl;
    return 0 ;
}