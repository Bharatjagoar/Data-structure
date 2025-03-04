#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data ;
    
    node* next=nullptr;
    
    node(int data):data(data){}
};


void ReadLL(node* &ptr,int freq){
    int data;
    for(int i = 0; i < freq ; i++ ){
        cout<<"enter the number  :: "<<endl;
        cin>>data;
        node* temp = new node(data);
        temp->next = ptr;
        ptr=temp;
    }
}




int main(){
 
    int number;
    node* head = new node(45);
    if(head->next==nullptr)cout<<":shout out"<<endl;
    cin>>number;

    ReadLL(head,number);
    cout<<head->data<<endl;
 
    return 0 ;
} 