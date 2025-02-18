#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> arr , int index , int lastindex ){
    // for(auto x:arr){
    //     cout<<x<<endl;
    // }
    // cout<<endl;
    if(lastindex<index){
        return true;
    }
    if(arr[index]!=arr[lastindex]){
        return false;
    }
    else return check(arr,index+1,lastindex-1);
}



int main(){
    int n = 10;
    vector<int>BinaryVector;
    while (n!=0)
    {
        BinaryVector.push_back((n&1));   
        n=n>>1;
    }
    for(auto x : BinaryVector){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<check(BinaryVector,0,BinaryVector.size()-1);
    return 0 ;
}