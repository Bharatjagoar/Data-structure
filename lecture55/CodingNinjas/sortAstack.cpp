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

void Pushdatain(stack<int>&data,int number){
    if(data.empty()){
        data.push(number);
        return;
    }
    int top = data.top();
    if(number>top){
        data.push(number);
        return;
    }
    data.pop();
    Pushdatain(data,number);
    data.push(top);
}




void sort(stack<int>&data){
    
    if(data.empty()){
        return;
    }
    int top = data.top();
    data.pop();
    sort(data);
    Pushdatain(data,top);
}



int main(){
    int arr[] = {1,3,8,6,2,7}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    stack<int>input = createStackFromArray(arr, size);
    cout<<"fdsa"<<endl;
    sort(input);
    while (!input.empty()){
        cout<<"hello :: "<<input.top()<<endl;
        input.pop();
    }
    // cout<<"hellow"<<endl;
    return 0 ;
}