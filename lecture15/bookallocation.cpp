#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include<algorithm>
// blunder mistake i was doing here was when tempsum+arr[i]<=mid was not met i was setting the value to 0 instead
// of that i should have done tempsum=arr[i] to saev the value of that arr[i] in tempsum and perform summation
//  consectively

bool Feasible(vector<int >arr , int mid, int partition ){
    int tempsum = 0;
    int count = 1;
    for (int i = 0; i < arr.size(); i++)
    {

        if(tempsum+arr[i]<=mid){
            tempsum+=arr[i];
        }else{
            tempsum=arr[i];
            count++;
        }
        if(count>partition || arr[i]>mid ){
            return false;
        }
    }
    return true;
    
}



int MinimumSum( vector <int> arr, int partition){
    int ans = -1;
    int sum = 0 ;
    for (int i = 0 ; i<arr.size();i++){
        sum +=arr[i];
    }
    cout<<sum <<endl;
    int low = 0 ,high = sum,mid; 
    
    while(low<=high){
        mid = low + (high - low)/2;
        
        if(Feasible(arr,mid,partition)){
            cout<<low <<"  "<<mid <<"  "<<high <<endl;
            ans=mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    return ans;
}


int main()
{
    vector<int> arr = {1 ,17 ,14 ,9 ,15 ,9 ,14 };
    int numberofpartition = 7;
    if(arr.size()<numberofpartition) return -1 ;
    int mid = MinimumSum(arr, numberofpartition);
    cout << mid << endl;
    return 0;
}
