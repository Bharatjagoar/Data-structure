#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>Solution;
    string name = "bharat";
    for(int i = 0 ; i < name.length();i++){
        Solution.push(name[i]);
    }
    
    string ans = "";
    while (!Solution.empty())
    {
        /* code */
        char data = Solution.top();
        ans=ans+data;
        Solution.pop();
    }
    cout<<"ans :: "<<ans<<endl;
    return 0 ;
}