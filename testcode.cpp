#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr={1,2,3,4,5,6,8};

    arr.erase(arr.begin() + 1 + 3);
    // 4-1=3
    
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    // arr.pop_back();
    cout << arr.size() << endl;

    return 0;
}
