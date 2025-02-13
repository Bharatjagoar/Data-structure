#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 4, b = 7,ans=1;
    if(b%2==0){
        int temp =a*a;
        for (int i = 0; i < b/2; i++)
        {
            ans*=temp;
        }
        cout<<ans;
    }else{
        int temp =a*a;
        for (int i = 0; i < b/2; i++)
        {
            ans*=temp;
        }
        ans=ans*a;
        cout<<ans<<endl;
    }

    return 0;
}