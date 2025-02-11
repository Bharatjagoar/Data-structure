#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binarySearch2D(vector<vector<int>>matrix,int target){
    cout<<"hello wrold"<<endl;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int rowindex = 0;
    int colindex = matrix[0].size()-1;
    while(rowindex<=rows && colindex >=0){
        cout<<matrix[rowindex][colindex]<<endl;
        if(matrix[rowindex][colindex]== target) return true; 
        else if(matrix[rowindex][colindex]>target){
            colindex--;
        }else{
            rowindex++;
        }
    }
    return false;
}


int main(){
 
 
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    cout<<binarySearch2D(matrix,21)<<endl;
    return 0 ;
}