#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* next=nullptr;
};

void input(node* ptr,int freq){
    for(int i = 0 ; i < freq-1 ; i++){
        ptr->next = new node();
        cout<<"enter data :: "<<endl;
        cin>>(ptr->data);
        ptr=ptr->next;
    }
    cout<<"enter data :: "<<endl;
    cin>>(ptr->data);
}
void ReadLL(node* ptr){
    while (ptr!=nullptr)
    {
        cout<<" data :: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main(){
 
    int number;
    cin>>number;
    node* head=new node();
    input(head,number);
    ReadLL(head);
    return 0 ;
}