#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSum(int arr[][3],int row , int col){
    int columns = sizeof(arr[0])/sizeof(int);
    int sumColumns[columns]={0};
    for(int i = 0 ; i <3 ; i++){
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i <3 ; i++){
        for (int j = 0; j < 3; j++)
        {
            sumColumns[j]+=arr[i][j];
        }
    }
    int largestsum = INT_MIN,column = -1;


    for (int i = 0; i < sizeof(arr[0])/sizeof(int); i++)
    {
        if(sumColumns[i]>largestsum){
            column = i;
            largestsum = sumColumns[i];
        }
        // cout<<sumColumns[i]<<endl;
    }
    cout<<"largestsum :: "<<largestsum<<endl;
    cout<<"index :"<<column<<endl;
}




int main(){
 
    int arr [3][3];
    for(int i = 0 ; i <3 ; i++){
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    printSum(arr,3,3);
    
 
    return 0 ;
}