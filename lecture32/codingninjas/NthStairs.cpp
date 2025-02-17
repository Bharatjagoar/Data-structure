#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int GetTheNumberOfways(int number){
    if(number<0) return 0 ;
    if(number == 0 )return 1; 
    return GetTheNumberOfways(number-1)+GetTheNumberOfways(number-2);
}


int main(){
 
 
    int n = 44;
    cout<<GetTheNumberOfways(n);
 
    return 0 ;
}