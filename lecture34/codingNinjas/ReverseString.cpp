#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Reverse(string& name, int iteration){
    
    // if(iter)
    if(name.length() == 0 || name.length() == 1){
        return ;
    }
    if(iteration>=name.length()/2) return;
    swap(name[iteration],name[(name.length()-1)-iteration]);
    // cout<<name<<endl;
    
    Reverse(name , iteration+1);
}




int main(){
 
    string name = "hl";
    int iteration =0;
    // cout<<name<<endl;
    Reverse(name,0); 
    cout<<name<<endl;
    return 0 ;
}