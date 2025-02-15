
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// the reason pointer is not getting update  is becuase :-
// valued dont get updated pass value 
// it means that values when values are passed using pass by value to a function any updation inside the function 
// wont lead to value updation outside the function 



void Printd(int *pointer){
    pointer = pointer + 1 ;
    cout<<"inside :: "<<pointer<<endl;
}
int main(){
 
 
    int a = 6;
    int *ptr = &a;
    cout<<"before :"<<ptr<<endl;
    Printd(ptr);
    cout<<"After ::"<<ptr<<endl;
    return 0 ;
}