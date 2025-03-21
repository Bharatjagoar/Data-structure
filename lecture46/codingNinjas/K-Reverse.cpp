#include <iostream>
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

Node* ReverseLinkedList(Node * head , int k){
    Node*first=head,*temp=nullptr,*prev = first;
    head=head->next;
    int i = 1 ; 
    while (i<=k-1)
    {
        temp=head->next;
        head->next = prev;
        prev=head;
        if(i!=k-1) head=temp;
        i++;
    }
    // first->next = previous;
    // cout<<"revrese ll "<<head->next->next->data<<endl;
    return first;
}

// check the feasibility , if k number of nodes are available ahead

Node * reverseKnodes(Node* head,int &grpCounter,int size, int k ){
    // cout<<"hello world "<<endl;
    // checking feasibility 
    // cout<<size/k<<endl;

    int totalfeasibleGroups = size/k;
    if(grpCounter > totalfeasibleGroups){
        return head;
    }
    Node*temp=head,*first,*store =nullptr;
    int i = 1,flag = 0;
    // if(grpCounter!=1) temp=head->next;
    
    while (i<=k)
    {    
        if(temp==nullptr){
            // printList(temp);        
            flag = 1; // having flag to check if k items are available
            break;
        }
        if(i==k) store= temp;
        temp=temp->next;
        i++;
    }

    // put the base case here 
    if(flag){
        return head->next;
    }
    first=ReverseLinkedList(head,k);
    
    grpCounter++;
    first->next=reverseKnodes(temp,grpCounter,size,k);
    return store;
    
}


int main() {
    
    Node*head= new Node();
    int size = 12;
    int k = 3;
    createList(head,size);
    head=head->next;
    int count = printList(head);
    cout<<count<<endl;
    int grpCounter =1;
    head = reverseKnodes(head,grpCounter,size,k);
    printList(head);
    cout<<"last iteeration ::: "<<head->next->next->next->next->data<<endl;


    return 0;
}
