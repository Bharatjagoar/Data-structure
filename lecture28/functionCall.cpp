#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void update(int &windows){
    windows++;
}

int& calci  (){
    int j =789;
    return j;
}

int main(){
    
 
 
    int i = 78;
    cout<<"before :: "<<i<<endl;
    update(i);
    cout<<"after :: "<<i<<endl;

    int number = calci();
    cout<<number<<endl;
    return 0 ;
}