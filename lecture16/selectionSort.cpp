#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// when you are pass a vector to the function you are passing copy of it not the value to pass the actual vector
// pass the address using ( & ) symbol .



// when you start to compare for min value include ith value also 
// do no got from i+1 ...... go  from i - n-1 

void printarr(vector<int> arr)
{
    int low;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }
}

vector<int> selectionSort(vector<int>& arr)
{
    // cout << endl;
        
    for (int i = 0 ; i < arr.size() ; i++){
        // cout<<arr[i]<<endl;
        int min = INT32_MAX,index=-1;
        for (int j = i ; j< arr.size() ; j++){
            // cout<<arr[j] << " ";
            if(min>arr[j]){
                min = arr[j];
                index = j;
            }
        }
        if(index>-1) swap(arr[index],arr[i]);
        cout<<min<<" " << index<<endl;

        cout<<endl<<endl;
        cout<<arr[arr.size()-1]<<endl;
    }
    cout << endl;
    return arr;
}

int main()
{
    vector<int> arr = {3, -2, -5, 0, 8, -1};
    vector<int> sort = selectionSort(arr);
    printarr(sort);
    cout<<endl<<endl<<endl<<endl;

    for(auto x : sort){
        // cout<<x<<" ";
    }
    // cout<<"hello world";
    return 0;
}