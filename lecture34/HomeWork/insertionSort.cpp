#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void inserstionSort(int arr [],int size,int index){
    if(size <= 1) return ;
    if(index+1==size) return;
    for(int i = index ; i >=0 ; i-- ){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }else{
            break;
        }
    }
    inserstionSort(arr,size,index+1);
}



int main(){
 
    int arr[] ={4,1,8,7,6,3};
    int size =  sizeof(arr)/sizeof(int);
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    inserstionSort(arr,size,0);
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
 
    return 0 ;
}