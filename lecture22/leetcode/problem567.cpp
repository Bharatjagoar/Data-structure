#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// mujhe jo cheej samjh a rhi thi ki jab ham sliding window bnate hai to uske ander sare elements k permutation ko map ya array me update krna 
// hai , ye code ko in efficient bna rha tha , and TC would be O(n^2) 
// which was not the case , you had include one from the front side and exclude , simultaneuosly jisko add kr rhe ho uski frequncy update kro 
// jise remove kr rhe ho use bhi update 
// ek jo case jaha me lste me fas rha tha ki jb 
// k++ i++ kr ha tha usme me ye check nhi kr rha tha ,ki kahi mere i ki value out of bound to nhi ja rhi 
// ye problem create kr rha tha , iske lie ,
// the moment hmne i and k ko update kra turant hi check kra ki i out out bound to nhi ja rha 


bool CheckTheArrays(int arr1[], int arr2[])
{
    cout<<endl<<endl<<endl<<endl;
    for(int i = 0 ; i <26 ; i++){
        cout<<arr1[i]<<endl;
    }
    cout<<endl<<endl<<endl<<endl;
    for (int i = 0; i < 26; i++)
    {
        cout <<i << " :::::::" << arr1[i] << "     " << arr2[i] << endl;
        if (arr1[i] != arr2[i])
            return false;
    }
    return true;
}

bool solve(string main, string subPart)
{
    int n = main.length();
    int m = subPart.length();

    if(n<m){
        return false;
    }


    int mainHash[26] = {0};
    int subHash[26] = {0};
    
    
    int i = 0 ;
    while ( i<m)
    {
        int index = subPart[i]-'a';
        subHash[index]++;
        i++;
    }
    
    // for(int i = 0 ; i <26 ; i++){
    //     cout<<subHash[i]<<endl;
    // }
    
    i = 0 ;
    while (i<subPart.length())
    {
        int index = main[i]-'a';
        mainHash[index]++;
        i++;
    }
    
    cout<<endl<<endl<<endl<<endl<<endl;
    for(int i = 0 ; i <26 ; i++){
        cout<<mainHash[i]<<endl;
    }

    int k = 0;
    i = subPart.length()-1;
    cout<<"******************************"<<i<<endl;
    while (k <= n - m)
    {
        cout<<" k :: "<<k<<" i :: "<<i<<endl;
        if(CheckTheArrays(mainHash,subHash)){
            return true;
        }else{
            k++;
            i++;
            if(i==main.length()){
                cout<<i<<"enldfdsafdsafdsa"<<endl;
                return false;}
            if(k > 0){
                int index = main[k-1]-'a';
                mainHash[index]--;
                
            }
            // if(i-k+1==subPart.length())
            int index = main[i] - 'a';
            cout<<"index :: "<< index <<" i :: "<< i <<endl;
            mainHash[index]++;
            
            
        }
    }
    



    return false;
}

int main()
{
    string s1 = "adc", s2 = "dcda";
    cout << "result :: " << solve(s2, s1) << endl;
    return 0;
}