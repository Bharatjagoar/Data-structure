#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int size,int index){
    // cout<<"hellow"<<endl;
    if(size <= 1 ) return ;
    if(index==size)return ;
    int min = INT32_MAX,minindex;
    for(int i = index;i<size ; i++){
        if(min > arr[i]){
            min = arr[i];
            minindex = i;
        }
    }
    swap(arr[index-1],arr[minindex]);
    cout<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr,size,index+1);
}


int main(){ 
    int arr[] = {78,2,1,56,3,2,100} ;
    int size =  sizeof(arr)/sizeof(int);
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr,size,1);
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}