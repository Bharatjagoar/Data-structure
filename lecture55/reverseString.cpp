#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void ReverseString(string name,stack<char>&reversed){
    for(char i : name){
        reversed.push(i);
    }
}


int main(){
 
    cout<<"hello world "<<endl;
    stack<char>strings;
    string name = "bharat";

    ReverseString(name,strings);
    while (!strings.empty())
    {
        cout<<strings.top()<<endl;
        strings.pop();
    }
    

    return 0 ;
}