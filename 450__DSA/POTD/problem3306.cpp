#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool checkVowel(char ch){
    string vowel="aeiou";
    for(auto x : vowel){
        if(x==ch) return true;
    }
    return false;
}


int main(){
    int vowel =0;
    int consonents =0;
    int k = 2, subsetsCount = 0 ;
    string word = "iqeaouqi";
    cout<<"size :: "<<word.size()<<endl;
    for(int i = 0 ; i < k+5;i++){
        if(checkVowel(word[i])) vowel++;
        else consonents++;
    }
    // cout<<vowel + consonents<<endl;
    if(consonents==k) subsetsCount++;
    int lastIndex = (vowel+consonents);
    cout<<subsetsCount<<(vowel+consonents)<<endl;
    
    for(int i= 1 ;i<(word.length()-(5+k-1));i++){
        
        if(checkVowel(word[i-1])){
            --vowel;
        }else{
            --consonents;
        }
        if(checkVowel(word[lastIndex])){
            vowel++;
        }else{
            consonents++;
        }
        if(consonents==k) subsetsCount++;
        cout<<vowel<<" fdsafdsafd  "<<lastIndex<<endl;
        lastIndex++;
    }
    cout<<subsetsCount<<endl;
    consonents=0;
    vowel=0;
    unordered_map<char,int>hash;
    
    cout<<subsetsCount<<endl;
    return 0 ;  
}