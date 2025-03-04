#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class parent{
    public:
    void speak(){
        cout<<"parent Here ! !"<<endl;
    }
};

class child:public parent{
    public:
    void speak(){
        cout<<"child here !!"<<endl;
    }
};

int main(){
 
 
    child c1;
    c1.parent::speak();
 
    return 0 ;
}