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


void sort(stack<int>&data){
    
}



int main(){
    int arr[] = {1,3,8,6,2,7}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    stack<int>input = createStackFromArray(arr, size);


    while (!input.empty()){
        cout<<"hello :: "<<input.top()<<endl;
        input.pop();
    }
    
    // cout<<"hellow"<<endl;
    return 0 ;
}