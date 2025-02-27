#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permutation(string str, int index , vector<string>&finalSolution ){
    if(index>=str.length()) {
        finalSolution.push_back(str);
        return ; 
    }

    int k = index;
    char character;
    while (k<str.length())
    {
        swap(str[k],str[0]);
        permutation(str,index+1,finalSolution);
        // swap(str[k],str[0]);
        k++;
    }
    
}


int main(){
 
 
    string name =  "abc";
    vector<string>final;
    permutation(name,0,final);
    for(auto x:final){
        cout<<x<<endl;
    }
    sort(final.begin(),final.end());
    return 0 ;
}