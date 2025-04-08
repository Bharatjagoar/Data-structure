#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    string s= "}])]";
    stack<char>check;
    unordered_map<char,char>symbols;
    symbols[']']='[';
    symbols['}']='{';
    symbols[')']='(';
    
    for (char c :s){
        if(c=='}' || c==')' || c == ']'){
            if(check.top()==symbols[c]){
                check.pop();
            }else{
                break;
            }
        }else check.push(c);
    }
    if(check.empty()){
        cout<<"balanced "<<endl;
    }else cout<<"Not Balanced"<<endl;
    return 0 ;
}