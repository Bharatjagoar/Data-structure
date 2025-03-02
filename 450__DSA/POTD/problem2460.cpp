#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> operation(vector<int>&nums){
    for(int i = 0 ; i < nums.size()-1 ; i++){
        if(nums[i]==nums[i+1]){
            nums[i]*= 2;
            nums[i+1] = 0;
        }
    }
    int k = 0 ,j = 0 ;
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i]==0){
            k=i;
            break;
        }
    }
    j = k ;
    while (j<nums.size())
    {
        while(nums[j]==0){
            j++;
        }
        if(j>=nums.size()) break;
        swap(nums[k],nums[j]);
        j++;
        k++;   
    }
    return nums;
}


int main(){

 
 
    vector<int>nums = {847,847,0,0,0,399,416,416,879,879,206,206,206,272};
    for(auto x : nums){
        cout<<x<<" ";
    }
    cout<<endl;
    operation(nums);
    for(auto x : nums){
        cout<<x<<" ";
    }
    return 0 ;
}