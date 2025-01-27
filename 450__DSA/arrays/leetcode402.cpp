#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"hello world "<<endl;
    string num = "1234567890";
    int k = 9;
    vector<int> number;
    for(char ch : num){
        int digits = ch - '0';
        while (!number.empty() && k > 0 && number.back()>digits)
        {
            number.pop_back();
            --k;
        }
        number.push_back(digits);
    }

    while (k>0)
    {
        number.pop_back();
        k--;
    }
    

    while (!number.empty() && number[0]==0)
    {
        number.erase(number.begin());
    }
    string res;
    for(int num: number){
        res+=to_string(num);
    }
    res==""?cout<<"0" :cout<<res<<endl;
    // cout<<number[0]<<endl;
    return 0;
}