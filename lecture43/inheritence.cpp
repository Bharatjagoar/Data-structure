#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class human{

    public:
    int hight = 456;
    int wieght;
    void setHeight(int h){
        this->hight = h;
    }
    protected:
    string color="brown";
};


class male:public human{
    public:
    string lang;
    void getColor(){
        cout<<this->color<<endl;
    }
};


int main(){
 
    male m1;
    cout<<m1.hight<<endl;
    m1.setHeight(11);
    cout<<m1.hight<<endl;
    cout<<m1.hight<<endl;
    m1.getColor(); 
    return 0 ;
}