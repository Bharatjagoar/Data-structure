#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Stack{
    private:
    int arr[10];
    int size = sizeof(arr)/sizeof(int);
    int top=-1;
    public:
    void push(int number){
        if(top==size-1){
            cout<<"array already full"<<endl;
            return ;
        }
        top++;
        arr[top]=number;
        cout<<"entered successfully"<<endl;
    }

    void pop(){
        if(top==-1){
            cout<<"already empty "<<endl;
            return;
        }
        for(int i = top ; i-1< size;i++){
            arr[i] = arr[i+1];
        }
        top--;
    }
    void display(){
        if(top==-1) {
            cout<<"empty"<<endl;
            return;
        }
        for(int i = top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void peek(){
        cout<<arr[top]<<endl;
    }
    
};



int main(){
 
    Stack* s1 = new Stack();
    s1->push(456);
    s1->display();
    s1->push(456);
    s1->push(456);
    s1->push(456);
    s1->push(456);
    s1->push(456);
    s1->push(66);
    s1->push(456);
    s1->push(456);
    s1->push(66);
    s1->push(456);
    s1->push(456);
    s1->push(66);
    s1->display();
    s1->pop();
    s1->pop();
    s1->pop();
    s1->pop();
    s1->pop();
    s1->pop();
    s1->pop();
    s1->pop();
    s1->pop();
    
    s1->pop();
    s1->pop();
    

    s1->display();
 
    return 0 ;
}