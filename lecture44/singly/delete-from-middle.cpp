#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next=nullptr;
    node(int data):data(data){}
};


node * deleteItem(node * ptr,int position,int size){
    node * copy=ptr;
    node *last;
    int i =1;
    int finalpos = position - 1;
    if(position>=size+1) return ptr;
    if (finalpos == 0 ){
        copy=copy->next;
        delete ptr;
        return copy;
    }
    while (i<position)
    {
        if(i!=0) last = ptr;
        ptr=ptr->next;
        i++;
    }
    // cout<<ptr->data<<endl;
    if(i!=size){
        last->next=last->next->next;
        ptr->next=nullptr;
    }
    

    delete ptr;
    return copy;
}



void ReadLinkedList(node *ptr, int freq)
{
    int data;
    for (int i = 0; i < freq; i++)
    {
        cout << "enter the number  :: " << "";
        cin >> data;
        node *temp = new node(data);
        ptr->next = temp;
        ptr = temp;
    }
}

void print(node *ptr)
{
    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main(){

    node* head = new node(100);
    cout<<"enter the size "<<"";
    int size;
    cin>>size;
    ReadLinkedList(head,size);
    print(head);

    cout<<endl;
    cout<<"enter the position "<<"";
    int pos;
    cin>>pos;
    head = deleteItem(head,pos,size);
    cout<<"this is deletion :: "<<endl;
    print(head);
    return 0 ;
}