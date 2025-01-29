#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool isfeasible(vector<int> arr,int partition,int mid){
    int tempsum = 0 ,count = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]+tempsum<=mid){
            tempsum += arr[i];
        }else{
            tempsum=arr[i];
            count++;
            if(arr[i]>mid || count>partition){
                return false;
            }
        }
    }
    return true;
}

int minimumTime(vector<int>boards,int partition){
    // cout<<"jhel"<<endl;
    int sum =0,low = 0,ans=-1; 
    for(auto x : boards){
        sum += x;
        cout<<sum<<endl;
    }
    int high =sum,mid; 
    
    while (low<=high)
    {
        mid = low+(high - low)/2;
        cout<<low<<" "<<mid <<" "<< high <<endl;
        if(isfeasible(boards,partition,mid)){
            cout<<"hello from windows l"<<endl;
            ans = mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    
    return ans;
}

int main(){
    vector<int > boards= {2, 1, 5, 6, 2, 3};
    int k = 2 ;
    int ans = minimumTime(boards,k);
    cout<<ans;
    return 0;
}