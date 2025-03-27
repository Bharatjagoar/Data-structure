#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data, Node* next, Node* prev) {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

// Function to create a doubly linked list from the array
Node* createDoublyLinkedList(int data[], int size) {
    if (size == 0) return NULL;

    Node* head = new Node(data[0]);
    Node* current = head;

    for (int i = 1; i < size; ++i) {
        Node* newNode = new Node(data[i]);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }

    return head;
}

// Function to print the doubly linked list
void printDoublyLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}


Node* removeDuplicate(Node* head){
    Node*current = head;
    while (current->next != NULL)
    {
        if(current->data==current->next->data){
            Node*ptr = current->next;
            ptr->prev->next=ptr->next;
            if(ptr->next!=NULL)
            ptr->next->prev = ptr->prev;

            delete ptr;
        }
        else{
            current = current->next;    
        }
        
    }
    printDoublyLinkedList(head);
}




// Main function
int main() {
    int data[] = {8, 14, 22, 33, 43, 48, 53, 62, 72, 79, 80, 87, 93, 99, 100, 101,
                  112, 118, 122, 138, 154, 166, 168, 179, 182, 193, 194, 195, 198, 198, 198};
    int size = sizeof(data) / sizeof(data[0]);

    Node* head = createDoublyLinkedList(data, size);

    cout << "Doubly Linked List: ";
    printDoublyLinkedList(head);

    removeDuplicate(head);

    return 0;
}