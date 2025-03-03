#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class me{
    public:
    const int age;
    me(int number) : age(number) {}
};
int main(){
 
    me m1(45);
 
    cout<<m1.age<<endl;
    return 0 ;
}