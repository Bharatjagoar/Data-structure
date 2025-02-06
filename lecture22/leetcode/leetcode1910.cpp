#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 
    string name = "bharat kumar jagoar";
    string sub = "ar";
    // int pos = name.find(sub);
    // cout<<pos<<endl;
    // name.erase(name.find(sub),sub.length());
    // cout<<name<<endl;
    // cout<<name.find(sub)<<endl;

    while (name.find(sub)<name.length() && name.length()!=0)
    {
        name.erase(name.find(sub),sub.length());
    }
    cout<<name<<endl;
    return 0 ;
}