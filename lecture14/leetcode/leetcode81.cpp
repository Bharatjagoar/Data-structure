#include<iostream>
using namespace std;
#include<bits/stdc++.h>



bool SearchItem(vector<int> nums,int target){
    int low= 0  , high = nums.size()-1, mid , index=0;
    while(low <= high){
        mid = low + (high-low)/2;
        if(nums[mid]==target){
            return true;
        }
        if(nums[low]<nums[mid]){
            if(nums[low]<= target && target < nums[mid]){
                high= mid-1;
            }else{
                low=mid+1;
            }
        }else if(nums[mid]<nums[high]){
            if(nums[mid]<target && target<=nums[high]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        else{
            if(nums[low]==nums[mid]) low++;
            if(nums[high]==nums[mid]) high--;
        }
    }
    return index;
}


int main(){
    cout<<"hello world"<<endl;
    vector<int> nums = {1,0,1,1,1};
    int target = 0;
    // int index = fintPivot(nums,target);
    // cout<<index<<endl;
    cout<< SearchItem(nums,target)<<endl;
    return 0;
}