#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool LinearSearch(int target , int arr[] , int size , int& index){
    if(size == 1 ){
        if(arr[0]==target) return true;
        else return false;
    }
    if(arr[0]== target) return true;
    index++;
    LinearSearch(target , arr+1 , size-1,index);
}


int main(){
 
    int arr[] = {1,5,4,3,1,0,5};
    int size =  sizeof(arr)/sizeof(int);
    int index = 0;
    cout<<LinearSearch(120,arr,size,index)<<endl;
    cout<<index<<endl;
    return 0 ;
}