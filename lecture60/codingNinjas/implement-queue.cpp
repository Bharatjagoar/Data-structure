#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next = nullptr;
    Node(int data){
        this->data = data;
    }
};

class queue
{
    public:
    int capacity = 10;
    int size = 0;
    Node *front = nullptr;
    Node *rear = nullptr;
    queue(){

    }
    void enqueue(int data){
        if(front==nullptr){
            // queue hasnt been initialized 
            front = new Node(data);
            rear = front;
        }else{
            rear->next = new Node(data);
            rear = rear->next;
        }
        size++;
    }
    int dequeue(){
        if(front == rear) return -1;
        Node*temp =front;
        int frontdata = this->front->data;
        delete temp;
        temp = nullptr;
        return frontdata;
    }
    int size(){
        return size;
    }
    bool isEmpty(){
        if(rear == front) return true;
        return false ;
    }
};

int main()
{

    return 0;
}