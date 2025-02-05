#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> getResult(vector<int> &a, int n, vector<int> &b, int m)
{
    vector<int> sol;
    int i = n - 1, j = m - 1;
    int carry = 0, sum = 0;

    while (i >= 0 && j >= 0)
    {
        cout << a[i] << "    " << b[j] << endl;
        if (a[i] + b[j] + carry > 9)
        {
            sum = (a[i] + b[j] + carry) % 10;
            carry = 1;
        }
        else
        {
            sum = carry + a[i] + b[j];
            carry = 0;
        }
        cout << sum << endl;
        sol.push_back(sum);
        i--;
        j--;
    }
    cout << "i : " << i << "j : " << j << endl;
    if (i >= 0)
    {
        while (i >= 0)
        {
            sum = (a[i] + carry);
            if (sum > 9)
            {
                sum = (a[i] + carry) % 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            sol.push_back(sum);
            i--;
        }
        if (carry == 1)
        {
            sol.push_back(carry);
        }
    }
    if (j >= 0)
    {
        cout << b[j] << " fdsafdsafdsafdsa  " << carry << endl;
        while (j >= 0)
        {
            sum = (b[j] + carry);
            cout << "carry :: " << sum << endl;
            if (sum > 9)
            {
                sum = (b[j] + carry) % 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            sol.push_back(sum);
            j--;
        }
        if (carry == 1)
        {
            sol.push_back(carry);
        }
    }
    if (carry == 1)
    {
        sol.push_back(carry);
    }
    i = 0, j = sol.size() - 1;
    while (i < j)
    {
        swap(sol[i], sol[j]);
        i++;
        j--;
    }

    return sol;
}
int main()
{

    vector<int> a = {9, 9, 9}, b = {9, 9, 9}, sol;
    int n = (int)a.size(), m = (int)b.size();
    sol = getResult(a, n, b, m);
    cout << endl
         << endl
         << endl
         << endl
         << endl;
    for (auto x : sol)
    {
        cout << x << "  ";
    }
    return 0;
}