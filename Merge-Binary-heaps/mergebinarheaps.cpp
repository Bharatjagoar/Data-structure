#include <bits/stdc++.h> 
vector<int> mergeHeap(int n, int m, vector<int> &arr1, vector<int> &arr2) {
    // Write your code here
    for(int i : arr2){
        arr1.push_back(i);
        int lastindex = arr1.size() - 1;
        while(lastindex > 0 ){
            int parent = (lastindex-1)/2;
            if(arr1[parent]<arr1[lastindex]){
                swap(arr1[parent],arr1[lastindex]);
                lastindex = parent;
            }else 
            break;
        }

    }
    return arr1;
}