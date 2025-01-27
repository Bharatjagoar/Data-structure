#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector <int >arr,int key){
    cout<<arr.size();
    int high=  arr.size()-1,low = 0 ;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }else{
            low = mid + 1;
        }
        mid = (low+high)/2;
    }
    return -1;
}


int main(){
    vector<int>arr={1,2,3,4,5,6};

    int index = BinarySearch(arr,2);
    index>=0? cout<<"at ::"<<index<<endl:cout<<"not found"<<endl;
    return 0;
}
