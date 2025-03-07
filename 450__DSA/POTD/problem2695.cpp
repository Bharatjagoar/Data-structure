#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
    unordered_set<int> arr;
    vector<int>sol(2);
    vector<vector<int>> grid = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
    int size = grid.size(),sum = 0;
    int square = size*size;
    int sumTillSq = (square*(square+1))/2;

    for(int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            auto res = arr.insert(grid[i][j]);
            if(!res.second){
                sol[0]=grid[i][j];
                
            }
            sum += grid[i][j];
        }
        
    }
    cout<<sum<<"  " << sumTillSq<<endl;
    sol[1] = sumTillSq-(sum-sol[0]);
    cout<<sol[0]<<"  "<< sol[1]<<endl;
    
    return 0 ;
}