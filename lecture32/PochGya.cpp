#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PohochGya(int number ,int destination){
    cout<<"destination :: "<<destination<<" source :: "<<number<<endl;
    if(number==destination){
        cout<<"pohoch gya"<<endl;
        return ;
    } 
    PohochGya(number+2,destination);

}



int main(){
    int destination = 20;
    int source =0;
    PohochGya(source,destination); 
    return 0 ;
}