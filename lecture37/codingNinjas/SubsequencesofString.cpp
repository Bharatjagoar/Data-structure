#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getAllSubsequences(int i , string str , vector<string>&final, string sol){
    // cout<<"hellow orld "<<endl;
    if(i>=str.size()){
        cout<<i<<endl; 
        if(sol.length()>0)final.push_back(sol);
        
        return ;
    }
    getAllSubsequences(i+1,str,final,sol+str[i]);
    // sol=;
    getAllSubsequences(i+1,str,final,sol);
}




int main(){
 
    string str = "abc";
    vector<string>final;
    string sol="";
    cout<<"heoo"<<endl;
    getAllSubsequences(0,str,final,sol);

    // cout<<final[0]<<endl;
    for (auto x : final)
    {
        cout<<x<<" ";
    }
    
    return 0 ;  
}