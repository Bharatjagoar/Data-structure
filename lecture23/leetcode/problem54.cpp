#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> SpiralTraversal(vector<vector<int>>arr){

    vector<int> sol;
    int i = 0;
    int RowSize = arr.size();
    int Colsize = arr[0].size();
    int j = 0;
    int total = RowSize*Colsize;


    int startingRow = 0;
    int startingCol = 0;
    int endingRow = arr.size()-1;
    int endingCol = arr[0].size()-1;

    int count = 0;
    while (count<total)
    {
        for(int i =startingCol ; i <= endingCol ; i++ ){
            sol.push_back(arr[startingRow][i]);
            count++;
        }
        if(count==total)break;
        startingRow++;
        for(int i = startingRow ;i <= endingRow; i++){
            count++;
            sol.push_back(arr[i][endingCol]);
        }
        if(count==total)break;
        endingCol--;
        for(int i = endingCol ; i>= startingCol; i--){
            count++;
            sol.push_back(arr[endingRow][i]);
        }
        if(count==total)break;
        endingRow--;
        for(int i = endingRow ; i>= startingRow; i--){
            count++;
            sol.push_back(arr[i][startingCol]);
        }
        if(count==total)break;
        startingCol++;
    }
    return sol;
}
int main(){
    
    vector<vector<int>>arr= {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    vector<int>sol = SpiralTraversal(arr);
    for(auto x : sol){
        cout<<x<<" ";
    }
    return 0 ;
}