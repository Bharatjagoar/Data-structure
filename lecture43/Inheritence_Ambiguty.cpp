#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int age=45;
    void speak(){
        cout<<"hello from A"<<endl;
    }
};

class B{
    public:
    void speak(){
        cout<<"hello from B";
    }
};

class C : public A , public B{

};

int main(){
 
    C c1;
    c1.A::speak();
    
 
    return 0 ;
}