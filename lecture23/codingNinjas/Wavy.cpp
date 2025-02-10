#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// vector<int> printWave(vector<vector<int>> arr)
// {
//     vector<int >sol;
//     for(int i = 0 ; i < arr.size();i++){
//         for(int j = 0 ;j<arr[0].size();j++){
//             int place ; 
//             if(j%2==0){
//                 cout<<arr[i][j]<<" ";
//                 sol.push_back(arr[i][j]);
//             }else{
//                 place = (arr.size()-1)-i;
//                 cout<<arr[place][j]<< " ";
//                 sol.push_back(arr[place][j]);
//             }
//         }
//         // cout<<endl;
//     }
//     cout<<endl;
//     for (auto x :sol)
//     {
//         cout<<x << " ";
//     }
    
//     return sol;

// }



vector<int> printWave(vector<vector<int>>arr){
    vector<int>sol;
    for (int i = 0; i < arr[0].size(); i++)
    {
        // cout<<arr[0].size()<<endl;
        
        if(i%2==0){
            for(int j = 0; j<arr.size(); j++){
                cout<<arr[j][i]<<" ";
                // cout<<i<<j<<" ";
                sol.push_back(arr[j][i]);
            }    
        }else{
            int place ;
            for (int j = 0; j < arr.size(); j++)
            {
                /* code */
                place = (arr.size()-1)-j;
                // cout<<place<<endl;
                // cout<<i<<j<<" ";
                
                cout<<arr[place][i]<< " ";
                sol.push_back(arr[place][i]);
            }
            
        }
        
        // cout<<endl;
    }
    return sol;    
}
int main()
{
    //handle the test cases if rows or cols are empty then return empty vector
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    },sol;
     printWave(arr);

    return 0;
}