#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 456;
    while(n!=0){
        if(n%3==2) cout<<"false" ;
        n/=3;
    }
    // else it will return true
    return 0 ;
}