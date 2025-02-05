#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int findPivot(vector<int>nums){
//     int low =0 ,high = nums.size(), mid;
//     while (low<high)
//     {
//         mid = low + (high - low)/2;
//         if(nums[mid]<nums[mid+1]){
//             high = mid- 1 ;
//         }else{
//             low = mid +1;
//         }

//     }
//     cout<<high<<endl;
//     return low;
// }

// one edge case thats comming to my mind is

// vector might have only or no element

//   Hamiltonian

int check(vector<int> &arr)
{
    // she is also

    int k = arr.size() - 1, index = -1;
    for (int i = k; i > 0; i--)
    {
        cout << "hello world " << arr[i] << endl;
        if (arr[i] < arr[i - 1])
        {
            index = i;
            break;
        }
    }
    return index;
}

vector<int> makeOriginalArray(vector<int> &arr, int k)
{
    vector<int> original(arr.size());
    int originalindex;

    for (int i = 0; i < arr.size(); i++)
    {

        i - k > 0 ? originalindex = i - k : originalindex = arr.size() + (i - k);
        cout << originalindex << " hare krishna " << arr[i] << endl;
        original[originalindex - 1] = arr[i];
    }
    for (int x : original)
    {
        // cout<<x<<endl;
    }
    return original;
}

int main()
{

    cout << "hellfdas" << endl;
    vector<int> nums = {3, 4, 5, 1, 2};
    int index = check(nums), rotatedIndex;
    // int res = 7 + (-1 % 7);

    // cout << res << endl;
    rotatedIndex = nums.size() - index;
    vector<int> ans = makeOriginalArray(nums, rotatedIndex);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << nums[i] << " " << ans[i] << endl;
    }
    check(ans) >= 0 ? cout << "false" : cout << "true" << endl;
    return 0;
}