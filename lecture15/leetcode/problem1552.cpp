#include<iostream>
using namespace std;
#include<bits/stdc++.h>



bool isPossible(vector<int>arr,int balls,int mid){
    int count = 1 ;
    int lastPosition=arr[0];

    for(int i = 1 ; i<arr.size();i++){
        if(arr[i]-lastPosition>=mid){
            count++;
            lastPosition=arr[i];
            if(count>=balls){
                cout<<"this is the mid :: "<<mid<<endl;
                return true;
            }
        }
    }
    return false;
}



int MaximumForce(vector<int>& arr, int balls){
    sort(arr.begin(),arr.end());
    int low = 1;
    int high = arr[arr.size()-1]-arr[0],mid,ans=-1;
    while (high>=low)
    {
        mid = low + (high-low)/2;
        if(isPossible(arr,balls,mid)){
            cout<<"ans :: "<<mid<<endl;
            ans = mid;
            low = mid+1;
        }else{
            high = mid - 1 ;
        }
    }
    
    return ans;
}

int main(){
    vector<int>position = {5,4,3,2,1,1000000000};
    int m = 2;
    cout<<"hello wrold "<< MaximumForce(position,m)<<endl;
    return 0 ;
}