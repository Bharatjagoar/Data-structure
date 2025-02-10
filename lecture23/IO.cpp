#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int arr[3][3]={0};
    for(int i = 0 ; i < sizeof(arr[0])/sizeof(arr[0][0]);i++  ){
        for(int j = 0 ; j < sizeof(arr[0]) / sizeof(int) ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < sizeof(arr[0])/sizeof(arr[0][0]);i++  ){
        for(int j = 0 ; j < sizeof(arr[0]) / sizeof(int) ; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
 
    return 0 ;
}