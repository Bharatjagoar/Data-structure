#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int index(string haystack, string needle){
    // if(needle.length()>haystack.length()) return -1;
    
    // cout<<haystack.substr(7,2)<<endl;
    // return -1;


    //sliding window technique
    
    int m = haystack.length();
    int n = needle.length();
    if(n>m) return -1 ;
    for (int i = 0 ; i <= m-n ; i++){
        int j  = 0 ; 
        while (j < n && haystack[i+j]==needle[j])
        {
            cout<<j<<"  "<<i<<endl;
            cout<<haystack[i+j] << "     "<<needle[j]<<endl;
            j++;
            
        }
        if(j==n) return i;
    }
    return -1 ;
}


int main(){
    cout<<"hello world"<<endl;
    string haystack = "mississippi";
    string needle = "pi";
    cout<<index(haystack,needle);
 
    return 0 ;
}