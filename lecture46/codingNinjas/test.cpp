#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node *next;
        Node() : data(0), next(nullptr) {}
        Node(int x) : data(x), next(nullptr) {}
        Node(int x, Node *next) : data(x), next(next) {}
    };
    
    int  printList(Node *node) {
        int size = 0;
        while (node != nullptr) {
            cout << node->data << " ";
            node = node->next;
            size++;
        }
        cout<<endl;
        return size;
    }
    
    void createList(Node*&head,int size){
        Node*start=head;
        for (int i = 1; i <= size; i++)
        {
            Node*temp = new Node(i);
            head->next=temp;
            head = head->next;
        }
        head=start;
    }
    Node* reverseLinkedList(Node* head,Node*previous){
        
        if(head==nullptr){
            // store=previous;
            return previous;
        }
        Node * finalStore;
        Node*next= head->next;
        head->next= previous;
        
        
        return reverseLinkedList(next,head);
    }
int main(){
    Node* head = new Node(),*previous = nullptr,*store;
    createList(head,8);
    head=head->next;

    printList(head);
    
    store= reverseLinkedList(head,previous);
    printList(store);

    return 0 ;
}