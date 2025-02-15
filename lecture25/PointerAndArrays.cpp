#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
 
    int arr[10]={12,2};
    int *ptr = arr;
    cout<<ptr<<endl;
    ptr = arr+1;
    cout<<(*ptr)<<endl;
    *ptr = (*ptr)+1;
    cout<<(*ptr)<<endl;
    return 0 ;
}