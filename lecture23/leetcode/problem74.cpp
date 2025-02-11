#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool BinarySearchIn2D(vector<vector<int>>arr,int target){
    int rows =  arr.size();
    int cols = arr[0].size();
    int rowIndex = -1;
    for (int  i = 0; i < rows; i++)
    {
        cout<<arr[i][0]<<"  "<<arr[i][cols-1]<<endl;
        if(target>=arr[i][0] && target<= arr[i][cols-1]){
            rowIndex=i;
            break;
        }
    }
    if(rowIndex<0) return false;
    int high = arr[0].size()-1;
    int low = 0;
    while (low<=high)
    {
        cout<<high <<"    "<<low<<endl;
        int mid = low + ((high-low)/2);
        if(arr[rowIndex][mid] == target)
            return true;
        else if(arr[rowIndex][mid]>target){
            
            high = mid-1;
        } else{
            low = mid+1;
        }
    }
    return false;
    
}


int main(){
 
    vector<vector<int>>matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    cout<< BinarySearchIn2D(matrix,10)<<endl;
 
    return 0 ;
}