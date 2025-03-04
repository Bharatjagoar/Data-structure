#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class add{
    public:
    int a;
    void operator+(add b){
        cout<<"this is prod :: "<<b.a*this->a<<endl;
    }
};



int main(){
    
    add a,v;
    a.a=45;
    v.a=12;
    v+a;
 
 
    return 0 ;
}