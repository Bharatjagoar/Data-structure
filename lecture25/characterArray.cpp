#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pointerValue(int *ptr){
    ptr = ptr + 1;
    cout<<ptr<<endl;
}
int main(){
 
 
    char ch[]="fdsakj";
    char *ptr = &ch[0];
    cout<<ptr<<endl;
    char temp = '5';
    char *p = &temp;
    cout<<p<<endl;
    return 0 ;
}