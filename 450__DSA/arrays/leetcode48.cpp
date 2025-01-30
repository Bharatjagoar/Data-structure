#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    vector<vector<int>> matrix = {
        {15, 2, 13, 5},
        {14, 4, 3, 1},
        {12, 8, 6, 9},
        {16, 10, 7, 11}
    };
    for (int i = 0; i <= matrix.size()-1; i++)
    {
        for (int j = 0; j <= matrix.size()-1; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int temp;
    
    for(int i = 0; i<matrix.size();i++){
        for(int j = i+1;j<matrix[0].size();j++){
            int temp = matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }



    cout << endl;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    //reversing
    for(int i = 0 ; i<=matrix.size()-1;i++){
        for(int j = 0 ;j<matrix[0].size()/2;j++){
            int temp = matrix[i][ (matrix.size()-1) -j];
            matrix[i][ (matrix.size()-1) -j] = matrix[i][j];
            matrix[i][j] = temp ;
        }
    }
    cout << endl;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}