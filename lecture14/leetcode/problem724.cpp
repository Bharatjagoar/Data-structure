#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// int index(vector<int> nums){
//     int sum = 0,left=0,position = -1;
//     for(int i=0;i<nums.size();i++){
//         sum=sum+nums[i];
//     }
    
//     for(int i=0;i<nums.size();i++){
//         sum=sum-nums[i];
//         if(sum==left){
//             return i;
//         }
//         left+=nums[i];
//     }
//     // cout<<sum;
//     // return sum;
// }



int index(vector<int>nums){
    int low =0 , high = (int) nums.size()-1,mid,leftSum,rightSum,size = (int) nums.size();
    int index=-1;
    while (low < high)
    {
        cout<<low<<" "<<high<<endl;
        mid = low + (high-low)/2;
        //calculate left sum 
        leftSum=0;
        for(int i = 0 ;i<mid;i++){
            leftSum+=nums[i];
        }
        //calculate left sum
        rightSum=0;
        for(int i = mid+1 ;i<size;i++){
            rightSum+=nums[i];
        }
        if(leftSum==rightSum){
            index = mid;
            break;
        }else if(leftSum>rightSum){
            high = mid-1;
        }else{
            low=mid+1;
        }
    }
    
    return index ; 
}


int main(){
    vector<int> v1 ={10,20,30,80,60}; 
    int sum = index(v1);
    cout<<sum;
    
    
    return 0;
}