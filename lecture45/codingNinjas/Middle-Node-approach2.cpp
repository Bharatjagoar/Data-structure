#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = nullptr;
    }
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* ReturnMiddle(Node* head){
    Node* jpointer = head->next, *ipointer = head,*start=head;
    int i = 0,j=0;
    while (jpointer!=nullptr)
    {
        cout<<jpointer->data<<endl;
        jpointer=jpointer->next;
        if(jpointer==nullptr){
            ipointer=ipointer->next;    
            break;
        }
        jpointer=jpointer->next;

        ipointer=ipointer->next;
    }
    
    cout<<"fff "<<ipointer->data<<endl;
    return ipointer;
}


int main(){
 
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);

    // Linking the nodes
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next=nullptr;
    


    ReturnMiddle(n1);
 
    return 0 ;
}