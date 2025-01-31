#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void Bubblesort(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            /* code */
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> v1 = {66, 1, 4, 2, 0, 4, 7};
    int size = v1.size();
    for (auto x : v1)
    {
        cout << x << " ";
    }
    cout<<endl;
    Bubblesort(v1, size);
    // cout<<v1[0]<<endl;
    for (auto x : v1)
    {
        cout << x << " ";
    }
    return 0;
}