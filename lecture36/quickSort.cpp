#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    cout<<low<<"   "<<high<<endl;
    int key = arr[low],count = 0;
    for(int i = low+1 ; i <= high ; i++){
        if(arr[i]<key){
            count++;
        }
    }
    int correctIndex = low+count;
    swap(arr[correctIndex],arr[low]);
    for(int i = low ; i <= high ; i++){
        cout<<arr[i]<<" ";
    }
    // cout<<endl<<low+count<<endl;
    int i = low ,j=high;
    while((i<correctIndex) && (j>correctIndex)){
        // cout<<arr[i]<<"  "<<key<< "   "<<arr[j]  <<endl;
        while(arr[i]<key){
            i++; 
        }
        while(arr[j]>key){
            j--;
        }
        if(i<correctIndex && correctIndex< j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }
    return low + count;
}

void quicksort(int arr[], int index, int size)
{
    if (index >= size )
        return;
    // cout<<size<<endl;
    int partitionIndex = partition(arr, index, size);
    cout << partitionIndex << endl;
    quicksort(arr, index, partitionIndex - 1);
    quicksort(arr, partitionIndex + 1, size);
}

int main()
{

    int arr[] = {6, 5, 8, 9, 1, 2, 4};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << size << endl;
    quicksort(arr, 0, size -1);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}