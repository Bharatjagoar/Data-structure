#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int Binary(vector<int > arr, int target){
    int low =0, high = arr.size()-1;
    int mid;
    while(low<high){
        mid = low + (high-low)/2;
        cout<<mid<<endl;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            high =mid-1;
        }else{
            low = mid + 1 ;
        }
    }
    return low;
}


int main(){
    vector<int> nums={1,3,5,6};
    int k = 7;
    cout<<Binary(nums,k);
    return 0 ;
};
