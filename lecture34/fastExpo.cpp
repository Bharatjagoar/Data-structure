#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int RaisedToPower(int base, int power){
    if(power == 0) return 1;
    if(power&1){
        return base * RaisedToPower(base,power-1);
    }else{
        return  base*base*RaisedToPower(base,power-2);
    }
}

int main()
{
    cout<<RaisedToPower(2,31)-1;
    return 0;
}