#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr = {2,1,4,3};
    // i will push element in the stack 
    // watching for what is the next small element 
    // cout<<arr[0]<<endl;
    for(auto x :arr){
        cout << x;
    }
    cout<<endl;
    stack<int>checker;
    checker.push(-1);
    int n = arr.size();
    for(int i = n-1; i>=0 ; i--){
        cout<<arr[i]<<endl;
        if(arr[i]>checker.top()){
            int top = checker.top();
            checker.push(arr[i]);
            arr[i] = top;
        }else{
            while (arr[i]<=checker.top())
            {
                checker.pop();
            }
            int data = arr[i];
            arr[i] = checker.top();
            checker.push(data);
        }
    }
    cout<<"hellow"<<endl;
    for(auto x :arr){
        cout << x;
    }
    return 0 ;
}