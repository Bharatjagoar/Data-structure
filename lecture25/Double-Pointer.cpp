#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int i = 66;
    int *p = &i;
    cout<<&i<<endl;
    cout<<p<<endl;
    // int *ptr = &p;
    



    // the above commented line creates an error 
    // reason being we are declaring that ptr is a pointer variable 
    // that points to location having integer value , but this is not the case 
    // reason being p is pointer variable not a integer variable so 
    // create a double that store the address of a pointer variable



    int ** ptr = &p;

    cout<<&p<<endl;
    cout<<ptr<<endl;


    int ***ptr2 = &ptr;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;






    cout<<"printing value from PTR2  of i::  "<<***ptr2<<endl;
    return 0 ;
}