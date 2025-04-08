#include<iostream>
#include<bits/stdc++.h>
using namespace std;
stack<int> createStackFromArray(int arr[], int size) {
    stack<int> stk;

    // Push array elements into the stack
    for (int i = 0; i < size; ++i) {
        stk.push(arr[i]);
    }
    
    return stk;
}


void DeleteMiddle(stack<int>&input,int size,int i){
    if(i == size/2){
        input.pop();
        return;
    }
    int store = input.top();
    input.pop();
    DeleteMiddle(input,size,++i);
    input.push(store);
}

int main(){
 
    int arr[] = {1,3,4,2,7}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    stack<int>input = createStackFromArray(arr, size); 
    // cout<<input.top()<<endl;
    int i=0;
    DeleteMiddle(input,size,i);
    while(!input.empty()){
        cout<<input.top()<<" ";
        input.pop();
    }
    return 0 ;
}