#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node*next;
    Node(int data):data(data),next(nullptr){}
};

class Stack{
    int size;
    int maxSize=5;
    Node * current;
    Node * start;

    public:
    Stack(){
        this->size = 0;
    }
    void push(int data ){
        Node*temp = new Node(data);
        if(size == 0 ) {
            //there is no item init 
            this->current=temp;
            this->start=temp;
            this->size++;
            return;
        }
        if(size == 5){
            cout<<"yes already full"<<endl;
            return;
        }
        this->current->next = temp;
        this->current=this->current->next;
        this->size++;
        return;
    }
    int Peek(){
        cout<<this->current->data<<endl;
        return this->current->data;
    }
    bool isEmpty(){
        return (size==0);
    }
    bool isFull(){
        return (size==5);
    }
    int pop(){
        // cout<<"hello w"<<endl;
        if(size==0){
            cout<<"already empty "<<endl;
            return -1;
        }
        if(size == 1){
            int data = this->current->data;
            delete this->current;
            this->current=nullptr;
            this->start=nullptr;
            this->size--;
            return data;
        }
        Node*temp = this->start;
        Node*prev=temp;
        while (temp->next!=nullptr)
        {
            /* code */
            prev=temp;
            temp=temp->next;
        }
        int data = temp->data;
        cout<<temp->data<<"fdsa"<<endl;
        delete temp;
        prev->next=nullptr;
        this->current=prev;
        return data;
    }
};

int main(){
 
    
    Stack *obj = new Stack();
    obj->push(66);
    obj->Peek();
    obj->pop();
    obj->pop();
    cout<<obj->isEmpty()<<endl;
    obj->push(66);
    obj->push(66);
    obj->push(66);
    obj->push(66);
    obj->push(66);
    obj->push(66);
    obj->push(66);
    obj->push(66);
    obj->push(66);
    return 0 ;
}