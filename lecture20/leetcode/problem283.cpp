#include <iostream>
using namespace std;
#include <bits/stdc++.h>


void TwoPointer(vector<int>&nums){
    int lastZero = 0;
    // cout<<"hello wrold";
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]!= 0) {
            swap(nums[i],nums[lastZero]);
            lastZero++;
        }
    }
    
}






//how you move your pointer matters here , when you are 
//when you are erasing avoid moving it . 




int main()
{
    vector<int> nums = {0,0,1};
    // int size =  nums.size();
    // cout<<size<<endl;
    // int count = 0;
    // int i = 0;
    // for(auto it = nums.begin();it!= nums.end() ; ){
    //     cout<<*it<<" fdsafdsafdasfdas "<<i<<endl;
    //     if(*(it) ==0){
    //         count++;
    //         nums.erase(it);
    //     }else{
    //         it++;
    //     }
    //     // ++i;
    // }
    // cout<<count<<endl;
    // while (count>0)
    // {
    //     nums.push_back(0);
    //     --count;
    // }
    // cout<<endl;
    TwoPointer(nums);
    for(auto x : nums){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}