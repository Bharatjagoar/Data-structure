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


void pushinLast(stack<int>&st, int data){
    if(st.empty()){
        st.push(data);
        return;
    }
    int top = st.top();
    st.pop();
    pushinLast(st,data);
    st.push(top);
}


void Reverse(stack<int>&data){
    if(data.empty()){
        return ;
    }
    int top = data.top();
    data.pop();
    Reverse(data);
    pushinLast(data,top);
}



int main(){
 
    int arr[] = {1,3,8,6,2,7}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    stack<int>input = createStackFromArray(arr, size);
    Reverse(input);
    cout<<"top :: "<<input.top()<<endl;
    while (!input.empty())
    {
        cout<<input.top()<<endl;
        input.pop();
    }
    
    return 0 ;
}