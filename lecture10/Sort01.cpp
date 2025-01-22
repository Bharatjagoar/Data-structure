#include<iostream>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int>number={1,1,0,1,1,1,0,0,0,1};
    int a=0,b=number.size()-1;
    cout<<b<<endl;
    // swap(a,b);
    while(a<b){
        
        while (number[a]==0)
        {
            a++;
        }
        while (number[b]==1)
        {
            b--;
        }
        if(a>b)break;// this is the critical point of this code !! 
        cout<<a<<"   "<<b<<endl;
        swap(number[a],number[b]);
        a++;
        b--;
        for(auto x : number){
        cout<<x<<" ";
        }    
        cout<<endl;    
    }
    
    for(auto x : number){
        cout<<x<<" ";
    }
    // cout<<a<<"  "<<b<<endl;
    
    return 0;
}