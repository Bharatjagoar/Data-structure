#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class animal{
    private:
    int age;
    public:
    void setAge(int age){
        this->age = age;
    }
    void getAge(){
        cout<<"age ::"<<this->age<<endl;
    }
};

class dog:public animal{};

class beegle : public dog{};



int main(){
 
    beegle b1;
    b1.setAge(6);
    b1.getAge();
 
 
    return 0 ;
}