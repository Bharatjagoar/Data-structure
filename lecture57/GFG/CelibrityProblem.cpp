#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//use variables instead of .size method every where ! !!! 



int main()
{

    stack<int> filter;
    vector<vector<int>> arr = {
        {1, 1, 1},
        {0, 1, 0},
        {1, 0, 1}};

    cout << arr.size() << endl;
    int arrSize = arr.size();
    for (int i = 0; i < arrSize; i++)
    {
        filter.push(i);
    }

    cout << filter.size() << endl;
    while (filter.size() > 1)
    {
        int topOne = filter.top();
        filter.pop();
        int toptwo = filter.top();
        filter.pop();
        // if A knows B then indecies should be like [1][0]==1
        // if B knows A then indexies should be like [0][1]==1
        if (arr[topOne][toptwo] == 1)
            filter.push(toptwo);
        else
            filter.push(topOne);
    }
    if (filter.size() == 0){
        cout <<"there is no celebrity "<<-1<<endl;
        return 0;
    }
    int celebrity = filter.top();
    // checking if this a celebrity 
    for (int i = 0; i < arrSize; i++)
    {
        if(celebrity==i) continue;
        if(arr[celebrity][i]!=0){
            return -1;
        }
    }


    for (int i = 0; i < arrSize; i++)
    {
        if(celebrity==i) continue;
        if(arr[i][celebrity]!=1){
            return -1;
        }
    }
    
    return 0;
}