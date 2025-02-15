#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    

    // tutorial for Refference variable 
    
 
    int i = 56;
    int &j = i;
    cout<<j<<endl;
    cout<<i<<endl;

    j++;
    cout<<i<<endl;
 
    return 0 ;
}