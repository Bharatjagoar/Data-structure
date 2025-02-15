#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
 
    int i = 56;

    int *p = &i;
    int *ptr = p;
    (*ptr)++;
    cout<<i;
 
    return 0 ;
}