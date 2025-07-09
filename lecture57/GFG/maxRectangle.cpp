#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmaller(vector<int> arr)
{

    int size = arr.size();
    vector<int> ans(size);
    stack<int> data;
    data.push(-1);
    for (int i = size - 1; i >= 0; i--)
    {
        /* code */
        while (data.top() != -1 && arr[i] <= arr[data.top()])
        {
            /* code */
            data.pop();
        }
        ans[i] = data.top() != -1 ? data.top() : size;
        data.push(i);
    }

    return ans;
}

vector<int> previousSmaller(vector<int> arr)
{
    int size = arr.size();
    vector<int> sol(size);
    stack<int> check;
    check.push(-1);
    for (int i = 0; i < size; i++)
    {
        while (check.top() != -1 && arr[check.top()] >= arr[i])
        {
            check.pop();
        }
        sol[i] = check.top();
        check.push(i);
    }
    return sol;
}

int areaOfrectangle(int a, int b) { return a * b; };

int getArea(vector<vector<int>> arr)
{
    int size = arr.size();
    int rowSize = arr[0].size();
    vector<int> next;
    vector<int> prev;
    int area = INT32_MIN;
    int currentarea;
    for (int i = 0; i < size; i++)
    {

        if (i == 0)
        {
            next = nextSmaller(arr[i]);
            prev = previousSmaller(arr[i]);
            for (int j = 0; j < rowSize; j++)
            {
                int width = next[j] - prev[j] - 1;
                currentarea = areaOfrectangle(arr[i][j], width);
                area = max(currentarea, area);
            }
        }
        else
        {
            // manipulating row
            cout << "printing row element :: " << endl;
            for (size_t j = 0; j < rowSize; j++)
            {
                /* code */

                if (arr[i][j] != 0)
                {
                    arr[i][j] += arr[i - 1][j];
                }
                cout << arr[i][j] << " ";
            }
            cout << endl;
            next = nextSmaller(arr[i]);
            prev = previousSmaller(arr[i]);
            for (int j = 0; j < rowSize; j++)
            {
                int width = next[j] - prev[j] - 1;
                cout << "dimenstion :: " << next[j] << "\t   " << prev[j] << "\t" << j << endl;
                currentarea = areaOfrectangle(arr[i][j], width);
                area = max(currentarea, area);
            }
        }
        // cout<<area<<"\t"<<currentarea<<endl;
    }
    return area;
}
int main()
{

    vector<vector<int>> arr = {
        {0, 1, 1},
        {1, 1, 1},
        {0, 1, 1}};

    cout << "fdsa" << arr[0][0] << endl;
    cout << "ans :: " << getArea(arr);
    return 0;
}