#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// steps
// 1> break it into one item
// the merge the array in sorted form

void Merge(int arr[], int low, int high)
{
    cout<<endl;
    // cout<<low << high <<endl;
    int mid = low + (high - low) / 2;
    int length1 = mid - low + 1;
    int length2 = high - mid;

    int *leftarr = new int[length1];
    int *rightarr = new int[length2];
    // copy kar rha hu left array
    cout<<length1<<"  "<<length2<<"   "<<low<<"  "<< high <<"   " << mid<<endl;

    int k = low;
    for(int i = 0 ; i< length1 ;  i++ ){
        leftarr[i] = arr[k];
        k++;
    }
    
    k=mid+1;
    for(int i = 0; i < length2 ; i++){
        rightarr[i] = arr[k];
        k++;
    }
    
    int i = 0 , j = 0 ;
    k = low;
    while(i < length1 && j<length2){
        if(leftarr[i]<rightarr[j]){
            arr[k++]=leftarr[i++];
        }else{
            arr[k++]=rightarr[j++];
        }
    }
    while(i<length1)
    {
        arr[k++]=leftarr[i++];
    }
    while (j<length2)
    {
        arr[k++]=rightarr[j++];
    }
}

void mergeSort(int arr[], int low, int high)
{
    // step 1
    if (low >= high) return;
    
    int mid = low + (high - low) / 2;
    cout<<"mid :: "<<mid<<endl;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    Merge(arr, low, high);
}

int main()
{

    int arr[] = {5, 41, 7, 2, 31, 8};
    int size = sizeof(arr) / sizeof(int);
    // sort(&arr[0],&arr[3]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    mergeSort(arr, 0, size -1);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}