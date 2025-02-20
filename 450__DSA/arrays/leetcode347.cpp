#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector <int> TopKElements(vector<int>&arr,int k){
    vector<int>sol;
    map<int, int> Hashmaps;
    cout<<"ehlfdas " << arr.size() <<endl;
    if(arr.size()==0) return sol;
    for (int i = 0; i < arr.size(); i++)
    {
        if (Hashmaps.count(arr[i]) > 0)
        {
            Hashmaps[arr[i]]++;
        }
        else
        {
            Hashmaps[arr[i]] = 1;
        }
    }
    


    for(pair<int ,int> it : Hashmaps){
        cout<<it.second<<endl;
    }



    cout<<"Fdsafdsa   "<<arr.size()<<endl;
    for (int i = 0; i < k; i++)
    {
        int max = INT32_MIN;
        int key,value;
        for(auto it = Hashmaps.begin(); it !=Hashmaps.end();++it ){
            if((*it).second>max){
               value =  (*it).second;
               key = (*it).first;
               max = (*it).second;
            }
        }    
        cout<<"key :: "<<key<<"  "<<value<<endl;
        sol.push_back(key);
        Hashmaps.erase(key);
    }
    
    
    return sol;
}



int main()
{
    vector<int> arr = {1,1,1,2,2,3},sol;
    int k=2;
    cout<<arr.size()<<endl;
    sol = TopKElements(arr,k);
    for(auto x : sol){
        cout<<"x :: "<<x<<endl;
    }
    // if()
    return 0;
}