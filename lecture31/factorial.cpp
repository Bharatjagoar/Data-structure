#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n ){
    // if(n==1) return n; 
    return n*factorial(n-1);
}
int main(){
 
    cout<<factorial(21);
    
 
    return 0 ;
}