#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> rearrange(vector<int>&nums, int pivot){
    // cout<<nums[0]<<endl;
    int size = nums.size();
    int pivotCount = 0,lessThenCount = 0 ;
    for(int i = 0 ; i < size ; i++ ){
        if(nums[i]==pivot) pivotCount++;
        if(nums[i]<pivot) lessThenCount++;
    }
    vector<int >lessthen,pivotarr,greater;
    for(auto x : nums){
        if(x<pivot){
            lessthen.push_back(x);
        }else if(x==pivot) pivotarr.push_back(x);
        else greater.push_back(x);
    }
    lessthen.insert(lessthen.end(),pivotarr.begin(),pivotarr.end());
    lessthen.insert(lessthen.end(),greater.begin(),greater.end());
    return lessthen;
}

int main(){
 
    vector<int>nums ={-3,4,3,2},res;
    res = rearrange(nums,2);
    for(auto x:res){
        cout<<x <<" ";
    }
 
    return 0 ;
}