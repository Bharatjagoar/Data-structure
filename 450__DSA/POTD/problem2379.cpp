#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string blocks="WBWWWBB";
    int k = 3;
    cout<<blocks.size()<<endl;
    int changes=0 , minChange,lastindex = k-1;

    for(int i = 0 ; i <= lastindex ; i++){
        if(blocks[i]=='W'){
            changes++;
        }
    }
    minChange=changes;
    lastindex++;
    for(int i = 1; i <= blocks.size()-k ;i++ ){
        cout<<"i :: "<<i<<"  "<<lastindex<<endl;
        if(blocks[lastindex]=='W')changes++;
        if(blocks[i-1]=='W')changes--;
        cout<<"changes"<<changes<<endl;
        if(minChange>changes) minChange=changes;
        lastindex++;
        
    }
    cout<<minChange<<endl;
    return 0 ;
}