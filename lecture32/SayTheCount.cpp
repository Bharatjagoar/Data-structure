#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void saythecount(int number,string arr[]){
    if(number == 0){return ;}
    saythecount(number/10,arr);
    cout<<arr[number%10] << " " ;
    return ;
}

int main(){
 
    int number =456;
    string arr[] = {"zero" , "one" , "two", "three" ,
                    "four" , "five" , "six" , 
                    "eight", "nine"};
    saythecount(number,arr);
    return 0 ;
}