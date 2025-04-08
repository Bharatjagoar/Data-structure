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

void DeleteMiddle(stack<int>&input,int size){
    vector<int>save;
    int i = 0;
    if(size&1){
        while (i<(size/2))
        {
            /* code */
            save.push_back(input.top());
            input.pop();
            i++;
        }
        input.pop();
        for(int i =save.size()-1;i>-1;i--){
            input.push(save[i]); 
        }

    }else{
        
        while(i<(size/2)){
            save.push_back(input.top());
            input.pop();
            i++;
        }
        input.pop();
        for(int i =save.size()-1;i>-1;i--){
            input.push(save[i]); 
        }
        
    }
}


int main() {
    int arr[] = {1,3,4,2,7}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    stack<int>input = createStackFromArray(arr, size);
    size--;
    DeleteMiddle(input,size);
    while(!input.empty()){
        cout<<input.top()<<" ";
        input.pop();
    }

    return 0;
}