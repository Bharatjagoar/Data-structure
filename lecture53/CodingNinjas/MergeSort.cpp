#include <iostream>
using namespace std;

class node {
    public:
        int data;
        node* next;
        node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

// Function to create a linked list from an array
node* createLinkedList(int arr[], int size) {
    if (size == 0) return NULL;
    
    // Create the head node
    node* head = new node(arr[0]);
    node* current = head;
    
    // Loop through the array to create the linked list
    for (int i = 1; i < size; i++) {
        current->next = new node(arr[i]);
        current = current->next;
    }
    
    return head;
}

// Function to print the linked list
void printLinkedList(node* head) {
    node* current = head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

node* MergeSort(node*head){
    //create two section
    if(head->next==nullptr){
        return head;
    }
    node*slow=head;
    node*fast=head,*previous=nullptr;
    while (fast!=nullptr && fast->next!=nullptr)
    {
        previous=slow;
        fast=fast->next->next;
        slow=slow->next;
    }

    if(fast==nullptr){
        fast = slow;
        previous->next=nullptr;
    }else{
        fast=slow->next;
        slow->next=nullptr;
    }
    // cout<<slow->data<<endl;
    slow=head;
    cout<<endl;
    cout<<"slow"<<endl;
    printLinkedList(slow);
    
    cout<<"fast "<<endl;
    printLinkedList(fast);

    node*List1 = MergeSort(slow);
    node*list2 = MergeSort(fast);
    node*sorted=nullptr;
    
    // starting to merge

    if(List1->data > list2->data){
        sorted = list2;
        list2=list2->next;
    }else{
        sorted = List1;
        List1=List1->next;
    }
    node*store=sorted;
    while (list2!=nullptr && List1!=nullptr)
    {
        /* code */
        if(List1->data>list2->data){
            sorted->next = list2;
            sorted=sorted->next;
            list2=list2->next;
        }else if(List1->data<list2->data){
            sorted->next = List1;
            sorted=sorted->next;
            List1=List1->next;
        }else{
            sorted->next = List1;
            sorted=sorted->next;
            List1=List1->next;

            sorted->next = list2;
            sorted=sorted->next;
            list2=list2->next;
        }
    }
    if(list2==nullptr){
        while (List1!=nullptr)
        {
            /* code */
            sorted->next = List1;
            sorted=sorted->next;
            List1=List1->next;
        }
        
    }else{
        while (list2!=nullptr)
        {
            /* code */
            sorted->next = list2;
            sorted=sorted->next;
            list2=list2->next;
        }
        
    }

    return store;
}



int main() {
    int arr[] = {5, 1, 8, 3 ,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Create the linked list
    node* head = createLinkedList(arr, size);
    
    // Print the linked list
    printLinkedList(head);
    head=MergeSort(head);
    printLinkedList(head);
    return 0;
}