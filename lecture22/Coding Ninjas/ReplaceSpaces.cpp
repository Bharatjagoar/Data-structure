#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string inplaceSolution(string s,string substring){
    int i = 0,countspaces=0 ;
    int k =s.length();
    while (s[i]!='\0')
    {
        if(s[i]==' '){
            countspaces++;
        }
        i++;
    }
    // cout<<"k :: "<<k<<endl;
    int newLength = k + ((substring.length()-1)*countspaces);
    cout<<"newlength :: "<<newLength<<endl;
    s.resize(newLength);
    for(int i = k-1 , j = newLength-1; i>0;i--){
        // cout<<"inside the space thing ::"<<endl;
        if(s[i]==' '){
            
            s[j]=substring[substring.length()-1];
            s[j-1]=substring[substring.length()-2];
            s[j-2]=substring[substring.length()-3];

            j = j - 3 ;
        }else{
            s[j]=s[i];
            j--;
        }
    }
    // cout<<s<<endl;
    return s;
}


int main()
{

    string str = "Coding Ninjas Is A Coding Platform", temp = "!!!";
    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     if (str[i] == ' ')
    //     {
    //         temp += "@40";
    //     }
    //     else
    //     {
    //         temp += str[i];
    //     }
    //     i++;
    // }
    // cout<<temp<<endl;
    temp=inplaceSolution(str,temp);
    cout<<temp;
    return 0;
}