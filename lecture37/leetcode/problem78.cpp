#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// i wanna calculate the subsets for a given array !
// i

void getAllSubsets(int i , vector<int> arr , vector<int> solution , vector<vector<int>>&MainSol){
    
    if(i>=arr.size()){
        MainSol.push_back(solution);
        cout<<i<<endl;
        return;
    }
    getAllSubsets(i+1,arr,solution,MainSol);
    solution.push_back(arr[i]);
    getAllSubsets(i+1,arr,solution,MainSol);
}

int main(){
 
    vector<int>arr={1,2,3};
    cout<<"hell world "<<endl;
    vector<int>minsol;
    vector<vector<int>>sol;
    getAllSubsets(0,arr,minsol,sol);
    for(auto x : sol){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    // vecot
    return 0 ;
}
