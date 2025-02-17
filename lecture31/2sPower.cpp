#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int RaisedToPower(int power){
    if(power==1) return 2;
    return 2*RaisedToPower(power-1);
}



int main(){
 
 
    int n ;
    cin>>n;
    cout<<RaisedToPower(n);
    return 0 ;
}