#include <iostream>
using namespace std;
#include <bits/stdc++.h>

bool isfeasible(vector<int> arr, int mid, int numberOfBouquets, int numberOfflowers)
{

    int bouquets = 0, flowers = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // cout << numberOfBouquets << " " << numberOfflowers << endl;
        if (mid >= arr[i])
        {
            // cout << "watch this " << arr[i] << endl;
            flowers++;
            if (numberOfflowers == flowers)
            {
                flowers = 0;
                bouquets++;

                if (bouquets == numberOfBouquets)
                {
                    return true;
                }
            }
        }
        else
        {
            flowers = 0;
        }
    }
    // cout << flowers << " fdsafdsafdsafdsafdsa   " << bouquets << endl
    //      << endl
    //      << endl
    //      << endl;
    return false;
}

int minimumdays(vector<int> arr, int NumberOfBuequets, int NumberOfFlowers)
{
    vector<int> copy = arr;
    sort(copy.begin(), copy.end());
    int low = copy[0], high = *(copy.end() - 1), ans = -1;
    while (low <= high)
    {

        int mid = low + (high - low) / 2;
        // cout << "low :: " << low << " mid :: " << mid << " high :: " << high << endl;
        if (isfeasible(arr, mid, NumberOfBuequets, NumberOfFlowers))
        {
            // cout << mid << endl;
            ans = mid;

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    cout << "hello world " << endl;
    vector<int> bloomDay = {7, 5, 8, 6, 9, 10, 4, 12};
    int m = 2, k = 4;
// Expected: 12

    int number = minimumdays(bloomDay, m, k);
    cout << number << endl;
    return 0;
}