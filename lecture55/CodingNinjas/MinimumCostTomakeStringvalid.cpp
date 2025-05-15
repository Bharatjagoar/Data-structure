#include <iostream>
#include <bits/stdc++.h>
using namespace std;
stack<char> validParanthesis(string str)
{
    stack<char>word;
    for (auto i : str)
    {

        if (i == '{')
        {
            word.push(i);
        }

        if (i == '}')
        {
            if (word.empty() || word.top() == '}')
            {
                word.push(i);
                continue;
            }

            if (word.top() == '{')
            {
                word.pop();
            }
        }
    }
    return word;
}
void MutateStack(stack<char>&word, bool state,int& count, int& numberOfOperatoins){
    if(word.empty()){
        return ;
    }
    char top = word.top();
    cout<<top<<endl;
    if(state && top=='{'){
        
        numberOfOperatoins++;
    }
    if(!state && top=='}'){
        numberOfOperatoins++;
    }
    count++;
    state = !state;
    word.pop();
    MutateStack(word,state,count,numberOfOperatoins);
}
int main()
{

    string str = "}{}{}}{}{}";
    stack<char> word = validParanthesis(str);
    // cout << str << endl;

    // cout << "hellowr" << endl;
    // while (!word.empty())
    // {
    //     /* code */
    //     cout << word.top();
    //     word.pop();
    // }
    int count = 0 ;
    int numberOfoperations=0;
    MutateStack(word,true,count,numberOfoperations);
    cout<<numberOfoperations<<"\t"<<count<<endl;
    return 0;
}