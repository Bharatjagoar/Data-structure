#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void read (int **ptr,int rows ,int cols){
    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> *(*(ptr+i)+j) ;
        }
        
    }
    
}

void print(int **ptr,int rows , int cols){
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0 ; cols > j; j++){
            cout<<*(*(ptr+i)+j)<<" ";
        }
        cout<<endl;
    }
    
}

void releaseMemory(int **ptr,int row , int col){
    for(int i = 0 ; i < row ; i++ ){
        delete [] (*(ptr+i));
    }
    delete[] ptr;
}

int main(){
 
    int rows , cols;
    cin>>rows>>cols;
    int ** ptr = new int*[rows];
    for (int i = 0;i < rows ; i++){
        ptr[i] = new int[cols];
    }
    read(ptr,rows,cols);
    print(ptr,rows,cols);
    cout<<*(*ptr)<<endl;
    releaseMemory(ptr,rows,cols);
    cout<<*(*ptr)<<endl;
    return 0 ;
}