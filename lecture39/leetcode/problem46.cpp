#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void permutationOfInt(vector<int>arr,int index ,vector<vector<int>>& final){
    if(index >= arr.size()){
        final.push_back(arr);
        return;
    }
    int k = index;
    while (k<arr.size())
    {
        swap(arr[0],arr[k]);
        permutationOfInt(arr,index+1,final);
        
        k++;
    }
    
}




int main(){
 
    vector<int>nums = {1,2,3};
    vector<vector<int>>final;
    permutationOfInt(nums,0,final);
    for(auto x : final){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}