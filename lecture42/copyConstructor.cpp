#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class stud{
    string name;
    int age;
    public:
    stud(string name,int age){
        this->name=name;
        this->age=age;
    }
    //creating a copy constructor
    stud(stud& temp){
        cout<<"helloworld :: "<< temp.age<<endl;
        this->age = temp.age;
    }
    void print(){
        cout<<"age ::"<<this->age<<endl;
    }
};
int main(){
 
    stud j("bharat",23);
    stud b(j);//copying a object
    b.print();
 
    return 0 ;
}