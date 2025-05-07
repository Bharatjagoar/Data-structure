#include <iostream>
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

void deletestack(stack<int>&st,int size,int count){
    if(count == size/2){

        st.pop();
        return;
    }
    int data = st.top();
    st.pop();
    deletestack(st,size,++count);
    st.push(data);
}


void DeleteMiddle(stack<int>&input,int size){
    cout<<size<<endl;
    cout<<input.top()<<endl;
    int count = 1 ;
    if(size&1){
        size++;
        deletestack(input,size,count);
    }else{
        deletestack(input,size,count);
    }
}


int main() {
    int arr[] = {1,3,8,6,2,7}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    stack<int>input = createStackFromArray(arr, size);
    // size--;
    DeleteMiddle(input,size);
    while(!input.empty()){
        cout<<input.top()<<"  ";
        input.pop();
    }

    return 0;
}