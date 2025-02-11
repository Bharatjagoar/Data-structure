#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    vector<bool> checkArr(n,true);
    int count = 0;
    checkArr[0]=checkArr[1]=false;
    for(int i = 2 ;i < n ; i++ ){
        if(checkArr[i]){
            count++;
            for(int j = 2*i ; j < n ; j = j + i){
                checkArr[j] = false ;
            }
        }
    }
    
    return count;
}

int main(){
 
 
    int n=50000000;
    n = countPrimes(n);
    cout<<n<<endl;
    return 0 ;
}