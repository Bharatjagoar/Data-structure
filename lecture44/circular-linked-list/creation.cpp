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
    head=head->next;
    // head
    // int i = 1,j=0;
    // while (j<2){
    //     i=1;
    //     while(i<=size){
    //         cout<<head->data<<endl;
    //         head=head->next;
    //         i++;
    //     }
    //     cout<<endl;
    //     cout<<endl;

    //     j++;
    // }
    
    int i =  1;
    while (i <= size)
    {
        cout<<head->data<<endl;
        head=head->next;
        i++;
    }

    // cout<<head->data<<endl;
}

int main(){
    
    node* head = new node();
    creation(head,5);
    print(head,5);
 
    return 0 ;
}