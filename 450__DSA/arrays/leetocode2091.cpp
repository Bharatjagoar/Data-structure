#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int FindMin(int a, int b)
{
    return a > b ? b : a;
}

int findmax(int a, int b)
{
    return a > b ? a : b;
}

int minOfThree(int a, int b, int c)
{
    int min = FindMin(a, b);
    return min > c ? c : min;
}

int main()
{
    vector<int> nums = {0,-4,19,1,8,-2,-3,5};

    // get to know where is are the max and min number in array
    int max = INT32_MIN, min = INT32_MAX, minidex, maxindex,
            size = nums.size();

        cout << maxindex << endl;
        for (int i = 0; i < size; i++) {
            if (min > nums[i]) {
                min = nums[i];
                minidex = i;
            }
            if (max < nums[i]) {
                max = nums[i];
                maxindex = i;
            }
        }
        vector<int> arr;
        
        int fromLeft = findmax(maxindex, minidex)+1;
        int fromRight = nums.size() - FindMin(maxindex, minidex);
        
        cout << max << min << endl;
        cout << "result from left :: " << findmax(maxindex, minidex) << endl;
        cout << "resuslt from right :: "
             << nums.size() - FindMin(maxindex, minidex) << endl;
        int minideleteindex = FindMin(minidex + 1, size - minidex);
        int maxdeleteindex = FindMin(maxindex + 1, size - maxindex);
        int randomSides = maxdeleteindex + minideleteindex;
        
    // cout<<maxdeleteindex<<"  "<<minideleteindex<<endl;
    cout<<"ans :: " << minOfThree(fromRight,fromLeft,randomSides) << endl;
    // arr.push_back(maxdeleteindex + minideleteindex);
    // sort(arr.begin(), arr.end());
    // cout << "final result is :: " << arr[0];
    return 0;
}