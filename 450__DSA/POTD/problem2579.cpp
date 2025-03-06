#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// this is not optimal 



int main(){
 
    int n;
    cin>>n;
    int i= 1 ,sum = 1; 

    for (int i = 0; i < n; i++)
    {
        sum+=i*4;
    }
    
    cout<<sum<<endl;
 
    return 0 ;
}