#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class stud{
    int age;
    public:
    char *name;
    stud(){
        this->name = new char[100];
    }
    stud(stud& temp){
        char* ch = new char[100];
        strcpy(ch,temp.name);
        this->name = ch;
    }
    void setName(char name[]){
        this->name = name;
    }
    void print(){
        cout<<name<<endl;
    }
};



int main(){
 
    stud s1;
    char name[] = "bharat";
    // s1.setName(*name);
    s1.setName(name);
    s1.print();
    stud s2(s1);
    s1.name[0]='z';
    
    s1.print();
    s2.print();
    return 0 ;
}