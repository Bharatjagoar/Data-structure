#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(a==0) return b;
    if(b==0) return a;
    while (a!=b)
    {
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    
    return 0 ; 
}

int main(){
    cout<<gcd(4,5);
 
    return 0 ;
}