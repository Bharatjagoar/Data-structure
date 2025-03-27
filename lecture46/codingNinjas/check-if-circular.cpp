#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
        
};
int main(){

    Node*head=new Node(45);
 
    unordered_set<int>data;
    // cout<<"hello world "<<endl;
    if(head == NULL) return 1 ; 
    Node* store = head;
    head=head->next;
    int loopCount = 0;
    const int LIMIT = 10000; // Constraint: N <= 10^4

    while (head != NULL && head != store) {
        head = head->next;
        
    }

    // If we return to the store node, the list is circular
    return (head == store);
 
    return 0 ;
}