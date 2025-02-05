#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// hellow

void transposeMatrix(vector<vector<int>>&arr){
    for(int i = 0 ; i <arr.size(); i++){
        for(int j = i;j<arr[0].size() ; j++){
            // arr[i][j] = arr[j][i];
            swap(arr[i][j],arr[j][i]);
        }
    }
}


vector<vector<int>> transposeType2(vector<vector<int>>&matrix){
    vector<vector<int>>hello(matrix[0].size(),vector<int>(matrix.size()));
    for (int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[0].size();j++){
            hello[j][i]=matrix[i][j];
        }
    }
    
    
}

int main(){
    vector<vector<int>> matrix   ={{1,2,3},{4,5,6},{7,8,9}};

    // transposeMatrix(matrix);
    if(matrix[0].size()==matrix.size()){
        transposeMatrix(matrix);
        // return matrix;
    }else{
        vector<vector<int>>hell = transposeType2(matrix);
        // return hell;
    }

    // for (int  i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix[0].size(); j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0 ;     
}