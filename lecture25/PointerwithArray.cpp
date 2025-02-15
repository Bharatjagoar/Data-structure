#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int arr[10]= {70,5};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<(*(arr+3))<<endl;
    cout<<(*arr)+1<<endl;
    cout<<(*arr)+1<<endl;
    

    cout<<"error prone"<<endl;

    cout<<0[arr]<<endl;
    
    return 0 ;
}