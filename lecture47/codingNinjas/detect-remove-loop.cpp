#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node {
    public :

    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

Node* createLinkedList(Node *head,int size){
    int i = 2 ; 
    Node*store=head;
    while(i <= size){
        Node *temp = new Node(i);
        head->next = temp;
        head = head->next;
        if(i == size){
            head->next=store->next->next;
        }
        i++;
        
    }
    return store;
}

int  printList(Node *node){
    int size = 0;
    while (node != nullptr){
        cout << node->data << " ";
        node = node->next;
        size++;
    }

    cout<<endl;
    return size;
}

Node* Cylcedetection(Node*head){
    if(head==NULL || head==head->next) return head;
    int flag = 0;
    Node*slow=head,*fast=head,*temp=NULL;
    while(slow != NULL && fast!=NULL){
        fast=fast->next;
        if(fast) fast=fast->next;

        slow=slow->next;


        if(slow==fast){
            flag=1;
            break;
        }
    }

    if(flag){
        slow=head;
        // check if loops starts at 0th position
        if(slow == fast){
            while(fast->next!=slow){
                fast=fast->next;
            }
        }else{
            while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
            }
        }
        fast->next=NULL;
    }
    return head;
}

Node* removeLoop(Node* head){
    Node*store= head;
    while (head->next->data>-1)
    {
        head->data = -1 ;
        head = head->next;
    }
}

int main(){
    Node* head = new Node(1);
    head= createLinkedList(head,6);
    // printList(head);
    Node* ans=nullptr;
    ans=Cylcedetection(head);
    cout<<ans->data<<endl;
    printList(ans);
    
    return 0 ;
}