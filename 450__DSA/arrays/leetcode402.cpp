#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
        string n = "1243890";
        int k=5;
        int stringsize = n.size();
        if(stringsize==k)return 0;
        cout << "string ssize " << stringsize << endl;
        int numb;
        numb = stoi(n);
        cout << numb << endl;
        vector<int> arr;

        while (numb != 0) {
            arr.push_back(numb % 10);
            numb = numb / 10;
        }

        // for (auto x : arr) {
        //     cout<<x<<"endl"<<endl;
        // }
        vector<int> sol;
        sol.push_back(arr[arr.size() - 1]);
        // cout<<"kl"<<*(sol.end()-1)<<k<<endl;
        for (int i = arr.size() - 2; i >= 0; --i) {
            // cout<<arr[i]<<"\t";
            if (k == stringsize) {
                cout << "equal :::: 0 " << endl;
                // return 0;
            }
            if (k > 0) {
                if (arr[i + 1] <= arr[i]) {
                    sol.push_back(arr[i]);
                } else {
                    k--;
                    // sol.insert(sol.end()-1,);
                    sol[sol.size() - 1] = arr[i];
                }
            } else {
                sol.push_back(arr[i]);
            }
            // cout<<"JAM"<<endl;
        }
        cout << k << endl;
        while (k != 0) {
            sol.erase(sol.begin());
            k--;
        }
        for(auto x: sol){
            cout<<x<<" ";
        }
        string final;
        int flag = 0;
        for (auto x : sol) {
            // cout << x << "\t";
            if ((!flag) && (x == 0)) {
                continue;
            } else {
                flag = 1;
            }
            final += to_string(x);
            // cout << final << "helious" << endl;
        }
        cout<<final<<endl;
    return 0;
}