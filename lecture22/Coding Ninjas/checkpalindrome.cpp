#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char tolowerFunction(char a){
    if(a<97){
        return a+32;
    }else{
        return a;
    }
}

bool checkAlNum(char ch){
    if(ch>='a'&& ch<='z'){
        return true;
    }
    if(ch>='A'&&ch<='Z'){
        return true;
    }
    if(ch >= '0' && ch<='9'){
        return true;
    }
    return false;
}
string makeThestring(string s){
    string sol = "";
    int i = 0;
    while (s[i]!='\0')
    {
        if(checkAlNum(s[i])){
            sol+= tolowerFunction(s[i]);
        }
        i++;
    }
    cout<<sol<<endl;
    return sol;
}



bool checkIfAlpha(char ch)
{
    int ascai = ch - 'a';
    if (ch >= 97 && ch <= 122)
    {
        return true;
    }

    if (ch >= 65 && ch <= 90)
    {
        return true;
    }
    return false;
}

string checkPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        cout<<s[start]<<"  "<<s[end]<<endl;
        
        if (checkIfAlpha(s[start]) && checkIfAlpha(s[end]))
        {
            
            if( s[start]-s[end]==32 ||s[start]-s[end] ==-32 || s[start]-s[end]==0 ){
                start++;
                end--;
                continue;
            }else{
                
                return "No";
            }
        }
        if(s[end]!=s[start]){
            cout<<s[start]<<"  "<<s[end]<<"    "<<s[start]-s[end]<<endl;
            return "No";
        }
        start++;
        end--;
    }
    return "Yes";
}

int main()
{

    // cout << "hello world" << endl;
    // string s= checkPalindrome("c1 O$d@eeD o1c");
    string fuplicate = makeThestring("?d?8 &t#%i+EZ?+aB-CUCbAzeIT8d");
    cout<<fuplicate<<endl;
    cout<<checkPalindrome(fuplicate);
    // cout<<s<<endl;
    return 0;
}