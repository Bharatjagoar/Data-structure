#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> digits={9,9,9,9,9,9,9};
    int size = (int) digits.size(), carry = 1,sum=0;
    for(auto x : digits){
        cout<<x << " ";
    }
    cout<<endl;
    for(int i = size-1;i>=0;--i){
        if(!carry) break;
        sum = digits[i]+carry;
        if(sum>9){
            carry=1;
            digits[i]=0;
        }else{
            carry = 0;
            digits[i]=sum;
        }
        sum=0;
    }
    if(carry) digits.insert(digits.begin(),1);
    for(auto x : digits){
        cout<<x << " ";
    }
    // cout<<"hello world "<<endl;

    return 0;
}