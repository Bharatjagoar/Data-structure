#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n ){
    if(n==1) return n; 
    return n*factorial(n-1);
}
int main(){
    cout<<"hello world "<<endl;
    cout<<factorial(5);
    
 
    return 0 ;
}