#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> Merge(vector<vector<int>>arr1,vector<vector<int>>arr2){
    int size1 = arr1.size();
    int size2 = arr2.size();
    vector<vector<int>>sol;
    int i = 0 ,j = 0;
    while (i<size1 && j < size2)
    {
        if(arr1[i][0]<arr2[j][0]){
            int key = arr1[i][0];
            int sum = arr1[i][1];
            for(auto x : arr2){
                if(x[0]==key){
                    if(x[1]>-1){
                        sum+=x[1];
                        x[1]=-1;
                    }
                    break;
                }
            }
            sol.push_back({key,sum});
            i++;
        }
        else if(arr1[i][0]>arr2[j][0]){
            int key = arr2[j][0];
            int sum = arr2[j][1];
            cout<<"key :: "<<key <<" value :: "<<sum<<endl;
            for(auto x : arr1){
                if(x[0]==key){
                    if(x[1]>-1){
                        sum+=x[1];
                        x[1]=-1;
                    }
                    break;
                }
            }
            cout<<"sum :: "<<sum<<endl;
            sol.push_back({key,sum});
            j++;
        }
        else{
            int sum = arr2[j][1] + arr1[i][1];
            int key = arr2[j][0];
            arr2[j][1] = -1;
            arr1[i][1] = -1;
            sol.push_back({key,sum});
            i++;
            j++;
        }
    
    }
    while (i<size1)
    {
        sol.push_back({arr1[i][0],arr1[i][1]});
        i++;
    }
    while (j<size2)
    {
        sol.push_back({arr2[j][0],arr2[j][1]});
        j++;
    }
    for(auto x : sol){
        cout<<x[0]<<" : "<<x[1]<<endl;
    }
    return sol;
}
int main(){
 
    cout<<"hello world "<<endl;
    vector<vector<int>>nums1 ={{1, 2}, {2, 3}, {4, 5}},
    nums2={{1, 4}, {3, 2}, {4, 1}};
    vector<vector<int>> arr = Merge(nums1,nums2);

    return 0 ;
}