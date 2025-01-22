#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    
    int count=0;
    for (auto it = nums.begin();it != nums.end();){
        if(*it==val){
            nums.erase(it);
        }else{
            count++;
            ++it;
        }
    }

    cout<<"count ::"<<count<<endl;

    for(auto x: nums){
        cout<<"x ::"<<x<<endl;
    }

    return 0;
}