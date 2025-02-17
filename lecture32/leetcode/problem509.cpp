#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int number ){
    if(number == 1 ) return 1;
    if(number == 0 ) return 0;
    
    return fibonacci(number-1)+fibonacci(number-2);
}


int main(){
    
    cout<<fibonacci(1)<<endl;
    return 0 ;
}