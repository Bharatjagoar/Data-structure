#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Peak(vector<int> arr, int size ){

    int low = 0 , high = size-1;
    while (low<high)
    {
        
        int mid = low + (high-low)/2;
        cout<<mid<<endl;
        if((arr[mid]>arr[mid-1] ) && (arr[mid]>arr[mid+1])){
            return mid;
        }else if((arr[mid+1]>arr[mid]) && (arr[mid]>arr[mid-1]) ){
            low=mid+1;
            
            cout<<"this"<<endl;
        }else{
            high = mid-1;
            cout<<"that"<<endl;
        }
    }

}

int main(){
    vector<int> arr={3,5,3,2,0};
    int size = arr.size();
    int index = Peak(arr,size);
    cout<<index<<endl;
    return 0;
}