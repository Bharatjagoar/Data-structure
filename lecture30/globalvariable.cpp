#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int i = 456;
void update(){
    cout<<i<<endl;
    i=123;
}
int main(){
 
    cout<<i<<endl;
    i=789;
    update();
    cout<<i<<endl;
 
    return 0 ;
}