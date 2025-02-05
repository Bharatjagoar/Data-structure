#include <iostream>
using namespace std;
#include <bits/stdc++.h>

she's also
void mergeSortedarray(vector<int> &arr1, int m, vector<int> &arr2, int n)
{
    if (m == 0 && n > 0)
    {
        arr1 = arr2;
        return;
    }
    else if (m == 0 && n == 0)
        return;
    if (n == 0)
        return;

    int LastIndex = arr1.size() - 1;
    // if(m<1 && n>0){
    //     arr1=arr2;
    // }
    int i = m - 1, j = n - 1;
    cout << "arr1 :: " << arr1[i] << " arr2 :: " << arr2[j] << " lastindex :: " << LastIndex << endl;
    while (i >= 0 && j >= 0)
    {

        if (arr1[i] > arr2[j])
        {
            arr1[LastIndex] = arr1[i];
            i--;
        }
        else if (arr1[i] < arr2[j])
        {

            arr1[LastIndex] = arr2[j];
            j--;
        }
        else
        {
            arr1[LastIndex] = arr1[i];
            LastIndex--;
            i--;
            arr1[LastIndex] = arr2[j];
            j--;
        }
        LastIndex--;
    }
    cout << "arr1 :: " << arr1[i] << " arr2 :: " << arr2[j] << " lastindex :: " << LastIndex << endl;
    while (j >= 0)
    {
        arr1[LastIndex] = arr2[j];
        LastIndex--;
        --j;
    }
    while (i >= 0)
    {
        arr1[LastIndex] = arr1[i];
        LastIndex--;
        --i;
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    mergeSortedarray(nums1, m, nums2, n);
    cout << endl;
    for (int x : nums1)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "hello world" << endl;
    return 0;
}