#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char>result;
    string s = "abca";
    int i = 0;
    while (i<s.length())
    {
        if(result.size()==0){
            result.push_back(s[i]);
        }else{
            if(result[result.size()-1]==s[i]){
                result.pop_back();
            }else{
                result.push_back(s[i]);
            }
        }
        i++;
    }
    s="";
    for(auto x : result){
        cout<<x<<endl;
        s+=x;
    }
    cout<<s<<endl;

    return 0 ;
}