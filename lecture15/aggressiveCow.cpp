#include<iostream>
using namespace std;
#include<bits/stdc++.h>

//do refer this chat for better understanding of Binary Search ::  https://chatgpt.com/share/679b73ef-ef44-8013-add2-38177876531b




bool isPossible(vector<int>arr,int mid,int cows){

    int cowCount = 1;
    int lastOption = arr[0];
    for(int i = 1 ; i<arr.size();i++){
        if(arr[i]-lastOption>=mid){
            lastOption = arr[i];
            cowCount++;
            if(cowCount==cows){
                return true;
            }
        }
    }
    return false;
}


int minimumDistance(vector <int> arr, int cows){
    int sum=0,ans=-1;
    sort(arr.begin(),arr.end());
    int low = 0,high = arr[arr.size()-1] - arr[0];
    int mid;
    while (low<=high){
        mid = low +(high-low)/2;
        if(isPossible(arr,mid,cows)){
            low=mid+1;
            ans = mid ; 
        }else{
            high = mid - 1 ;
        }
    }
    return ans;
}


int main(){
    cout<<"hello world"<<endl;
    vector<int> stalls = {4 ,2 ,1 ,3, 6};
    int cows = 2;
    cout<<minimumDistance(stalls,cows)<<endl;
    return 0 ;
}