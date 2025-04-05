#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

class Node{
    private:
    int data;
    Node* next;
    Node*prev;
    public:
    Node* getNext(){
        return next;
    }

    void setNext(Node*ptr){
        if(ptr==nullptr){
            delete this->next;
            this->next=nullptr;
            return ;
        }
        this->next=ptr;
    }
    Node* getPrevious(){
        return this->prev;
    }
    void setPrevious(Node*previous){
        
        this->prev=previous;
    }
    int getData(){
        return this->data;
    }
    Node(int data ):data(data),next(nullptr),prev(nullptr){};

};


class Stack {
    private:
    Node*top=nullptr;
    int size = -1;
    int max=10;
    Node*previous=nullptr;
    public:
    void push(int data){
        
        if(size+1>max-1){
            cout<<"storage full"<<endl;
            return;
        }
        ++size;
        Node*temp = new Node(data);
        if(size==0){
            top = temp;
            top->setPrevious(nullptr);
            this->previous = nullptr;
            
        }else if(size==max-1){
            this->previous=this->top;
            this->top=temp;
            temp->setPrevious(this->previous);
            this->previous->setNext(temp);
        }else{
            this->previous = this->top;
            this->top = temp;
            this->previous->setNext(temp);
            this->top->setPrevious(this->previous);
        }
        // cout<<"pushed successfully::::  "<<endl;
        
    }

    int Pop(){
        if(this->size==-1){
            cout<<"Empty Already "<<endl;
            return -1;
        }
        if(this->size==0){ 
            // cout<<"empty already "<<this->previous->getData()<<endl;
            delete this->top;
            this->top=nullptr;
            this->size--;
            return -1;
        }
        size--;
        int data = top->getData();
        // cout<<"helooo nooooooo"<<this->top->getData()<<endl;    
        // cout<<"hellow :: "<<top->getData()<<endl<<previous->getData()<<endl;
        
        this->previous->setNext(nullptr);
        this->top=this->previous;
        
        this->previous=top->getPrevious();
        cout<<"delete top "<<endl;
        return data;
    }
    void peek(){
        if(this->size==-1){
            cout<<"Empty "<<endl;
            return;
        }
        cout<<"data :: "<<this->top->getData()<<endl;
    }
    void isFull(){
        if(size==max){
            cout<<"Full"<<endl;
        }else{
            cout<<"Not Full "<<endl;
        }
    }
    void isEmpty(){
        if(size==-1){
            cout<<"Empty "<<endl;
        }else
        cout<<"Not Empty "<<endl;
    }
    int GetSize(){
        return this->size;
    }

};

int main(){
 
    Stack *obj = new Stack(); 
    obj->Pop();
    obj->peek();
    cout<<obj->GetSize()<<endl;
    obj->push(456);
    obj->push(89);
    obj->push(6211);

    return 0 ;
}

