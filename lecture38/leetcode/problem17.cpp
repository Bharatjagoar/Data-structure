#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void getAllsubsequences(map<char , string> number, string digit,int index,vector<string>&finalsolution,string solution){
    if(index>=digit.size()){
        finalsolution.push_back(solution);
        return;
    }
    int k = 0;
    while (k<number[digit[index]].length())
    {

        char s= number[digit[index]][k];
        getAllsubsequences(number,digit,index+1,finalsolution,solution+s);
        // yha mujhe pop_back() karne ki zrort nhi hai kyuki windows me actual solution me kuchh
        // bhi change hni kar rha hu 
        
        k++;
    }
    
}



int main(){
 
 
    cout<<"hello world "<<endl;
    map<char,string>number;
    number['2']="abc";
    number['3']="def";
    number['4']="ghi";
    number['5']="jkl";
    number['6'] = "mno";
    number['7']="pqrs";
    number['8']="uvw";
    number['9']="xyz";
    string digit = "23";
    vector<string>finalSolution;
    getAllsubsequences(number,digit,0,finalSolution,"");
    for(auto x : finalSolution){
        cout<<x<<endl;
    }
    return 0 ;
}
