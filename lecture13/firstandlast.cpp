#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int FindIndex(vector<int> nums,int n, int start , int k){
    int low = start,high = n;
    int mid , index = -1;
    while (low <= high) {
        // cout<<"lower : "<<low<< "  upper :: " <<high<<"  index :"<< index<<endl;
        mid = low + (high - low) / 2;
        if(nums[mid]==k){
            index=mid;
            break;
        }else if(nums[mid]>k){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    // cout<<endl<<endl<<index<<endl<<endl;
    return index;
}


int main(){
    vector<int>arr={0 ,0 ,1 ,1 ,2 ,2 ,2 ,2},sol;
    int n = arr.size();
    int k = 2,lower=-1,upper=-1;
    
    // int 
    int index = FindIndex(arr,n,0,k);
    cout<<index<<endl;
    return 0;
}