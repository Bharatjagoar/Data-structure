#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void print(int n ){
    if(n==1) {
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    print(n-1);
}

void Printstraight(int n ){
    if(n==1){
        cout<<n<< " ";
        return ;
    }
    Printstraight(n-1);
    cout<<n<<" ";
}

int main(){
 
    int n ;
    cin>>n;
    print(n);
    cout<<endl;
    Printstraight(n);
    return 0 ;
}