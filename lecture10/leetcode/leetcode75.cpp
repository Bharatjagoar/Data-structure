#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> number = {2,0,2,1,1,0,2,2,2,2,2,2,2,2};
    int arr[3]={0};
    for(auto x: number){
        cout<<"hello world"<<endl;
        arr[x]++;
    }
    for(int i=0 ; i<3;i++){
        cout<<arr[i]<<endl;
    }

    cout<<endl;
    int count=0;
    for(int i = 0; i<3;i++){
        cout<<i<<endl;
        while(arr[i]>0){
            number[count]=i;
            arr[i]--;
            count++;
        }
    }
    
    for (auto x : number)
    {
        cout << x << " ";
    }
    return 0;
}