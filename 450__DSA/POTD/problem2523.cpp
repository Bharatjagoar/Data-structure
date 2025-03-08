#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// could solve it using Seive algo

vector<int> getpair(int left, int right)
{
    vector<int> primes,imp(2);
    for (int i = left; i <= right; i++)
    {
        int count = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 1)
        {
            primes.push_back(i);
        }
    }
    for (auto x : primes)
    {
        cout << x << endl;
    }
    int i = 0, j = 1, difference = INT32_MAX;
    vector<vector<int>> sol;
    if (primes.size() > 1)
    {
        while (j < primes.size()){
            if(primes[j]-primes[i]<difference){
                imp[0]=primes[i];
                imp[1]=primes[j];
                difference=primes[j]-primes[i];
            }
            i++;
            j++;
        }
    }
    difference = INT32_MAX;
    int num;

    cout<<imp[0]<<imp[1]<<endl;
    // cout<<num;
    return imp;
}

int main()
{

    int left = 10, right = 20;
    vector<int>sol = getpair(left, right);
    
    return 0;
}