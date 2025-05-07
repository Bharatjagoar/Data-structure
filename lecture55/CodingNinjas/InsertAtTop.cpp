#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void InsertAttheEnd(stack<int>&st,int num){
    // cout<<st.top()<<endl;
    if(st.empty()){
        st.push(num);
        return;
    }
    int data = st.top();
    st.pop();
    InsertAttheEnd(st,num);
    st.push(data);

}

void ReadStack(stack<int>word ){
    cout<<endl;
    while (!word.empty())
    {
        cout<<word.top()<<" ";
        word.pop();
    }    
}

int main(){
 
    stack <int>s1;
    int num=89;
    s1.push(1);
    s1.push(10);
    s1.push(88);
    s1.push(451);
    ReadStack(s1);
    InsertAttheEnd(s1,num);
    ReadStack(s1);
    return 0 ;
}