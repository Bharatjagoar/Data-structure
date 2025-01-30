#include<iostream>
using namespace std;
#include<bits/stdc++.h>


// edge cases 
// do i need to check the last digit ??
// if yes then whats the need to check the last digit also 
// again if yes then should i traverse till n-1 -1 or n-1 - 2 ?? where n is the size ??

vector <int> getbestday(vector<int> arr,int time){
    
    vector<int>sol(arr.size());
    // if(arr.size()-1-time>=time) return front;

    int lessthenCount = 0;
    for(int i = 1  ; i <arr.size();i++){
        // cout<<"hel"<<arr[i]<<" "<<arr[i-1]<<endl;
        if(arr[i]<=arr[i-1]){
            // cout<<"hello wr"<<endl;
            lessthenCount++;
        }else{
            lessthenCount=0;
        }
        if(lessthenCount==time){
            sol[i]++;
            lessthenCount=time-1;
        }
    }
    cout<<endl;
    for(int x : sol){
        cout<<x<<endl;
    }
    // for(int i = )
    lessthenCount=0;
    for(int i = arr.size()-2;i>=0 ; i--){
        if(arr[i]<=arr[i+1]){
            lessthenCount++;
        }else{
            lessthenCount=0;
        }

        if(lessthenCount==time){
            lessthenCount=time-1;
            sol[i]++;
        }
    }
    cout<<endl;
    cout<<endl;
    for(int x : sol){
        cout<<x<<endl;
    }
    vector<int> final;
    for(int i = 0  ; i < arr.size() ; i++ ){
        // cout<<sol[i]<<"from x"<<endl;
        if(sol[i]==2) final.push_back(i);
    }
    // cout<<final.size();
    return final;
}



int main(){
    vector <int>security = {0,0,0,0,0};
    int time = 3;
    vector<int > sol;
    sol =getbestday(security,time);
    cout<<endl;
    for(int x : sol){
        cout<<x<<endl;
    }
    return 0 ;
}