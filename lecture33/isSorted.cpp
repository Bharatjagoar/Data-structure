#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool Check(int arr [] , int size){
    if(size==1 || size == 0 ){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return Check(arr+1,size-1);
}



int main(){
 
    int arr[] = {1,2,3,4,5,6,1};
    int size = sizeof(arr)/sizeof(int);
    cout<<Check(arr,size);
    
 
    return 0 ;
}