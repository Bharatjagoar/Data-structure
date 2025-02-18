#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int high, int low , int target , int& index){
    if(high<low){
        return false;
    }

    int mid =low + (high-low)/2;
    index=mid;
    if(arr[mid]==target) return true;
    else{
        if(arr[mid]>target) return binarySearch(arr,mid-1,low,target,index);
        else return binarySearch(arr,high,mid+1,target,index);
    }
}

int main()
{

    int arr[] = {3, 4, 11, 15, 16, 21, 30, 31, 32, 33, 37, 43, 44};
    int high = (sizeof(arr)/sizeof(int))-1;
    int low = 0 ;
    int index = -1;
    cout<<"high ::"<<high<<endl;
    cout<<binarySearch(arr,high,low,32,index)<<endl;
    index>0?cout<<index:cout<<"not found !!"<<endl;
    return 0;
}