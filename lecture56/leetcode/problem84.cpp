#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// testarr me stack ka top dala , ye cwala element , current element bhi apne stack ke top pe dal dia

vector<int> nextSmaller(vector<int> arr)
{
    stack<int> data;
    vector<int> testArr(arr.size());
    data.push(-1);
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        // cout<<"index :: "<<i<<endl;

        // hame indexes ko store karna hai or values ko compare karna hai
        // agar top pe -1 nhi hai that means there are some indexes we can check
        // yes if they are small to hame
        // cout<<"data top :: "<<data.top()<<endl;

        while (data.top() != -1 && arr[data.top()] >= arr[i])
        {
            data.pop();
        }
        testArr[i] = data.top() == -1 ? arr.size() : data.top();
        data.push(i);
    }

    return testArr;
}

vector<int> previousSmaller(vector<int> arr)
{
    stack<int> data;
    vector<int> testArr(arr.size());
    data.push(-1);
    for (int i = 0; i < arr.size(); i++)
    {

        while (data.top() != -1 && arr[data.top()] >= arr[i])
        {
            data.pop();
        }
        testArr[i] = data.top();
        data.push(i);
    }
    cout << endl;

    return testArr;
}

int main()
{
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    vector<int> arr2(arr.size());

    vector<int> next = nextSmaller(arr);
    cout << endl;
    vector<int> prev = previousSmaller(arr);

    int width = -1, length = -1, area = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        length = arr[i];
        width = next[i] - prev[i] - 1;
        cout << "width :: " << width << endl;
        int currarea = width * length;
        area = max(area, currarea);
    }
    cout << area << endl;
    return 0;
}