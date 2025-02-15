#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Read(int *arr,int n ){
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
}
int main(){
 
 
    int n;
    cin >> n;
    int *arr = new int[n];
    Read(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0 ;
}