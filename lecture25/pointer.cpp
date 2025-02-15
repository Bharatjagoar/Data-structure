#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getNumber(int *ptr){
    cout<<*ptr<<endl;
    (*ptr)++;
}
int main(){
 
    char ch ='a';
    char *ptr = &ch;
    cout<<ch<<endl;
    (*ptr)++;
    cout<<*ptr<<endl;
 

    int a= 555;
    getNumber(&a);
    cout<<a<<endl;
    return 0 ;
}