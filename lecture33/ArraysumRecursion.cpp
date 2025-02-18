#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ArraySum(int arr[], int size)
{
    cout<<arr[0]<<endl;
    int sum = 0;
    if (size == 1)
        return arr[0];
    if(size == 0) return 0;
    sum = arr[0];
    return ArraySum(arr + 1, size -1) + sum;
}

int main()
{
    int arr[] = {1,5,4,3,1,0,5};
    int size =  sizeof(arr)/sizeof(int);
    int sum = ArraySum(arr,size);
    cout<<sum<<endl;
    return 0;
}