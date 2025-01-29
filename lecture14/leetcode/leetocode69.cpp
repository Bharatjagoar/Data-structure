#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int findsqrt(int number){
    int high = number,low=0;
    int mid = low+((high-low)/2);
    int square = mid*mid;
    while (low<=high){
        cout<<"hello world"<<endl;
        if(square==number){
            return mid;
        }else if(square>number){
            high= mid-1;
        }else if(square<number){
            low=mid+1;
        }
        mid = low+((high-low)/2);
        square = mid*mid;    
    }
    return high;
        
}

double getFloat(int sqrt){
    // float nua = (float) sqrt+0.1;
    // cout<<nua<<endl;
    double high = sqrt+1 , low = sqrt;
    double mid = low + (high - low)/2;
    cout<<mid<<endl;
    double sqr = mid*mid;
    while (mid)
    {
        /* code */
    }
    

    
    return 0.2;
}


int main(){
    int number=10;
    int sqrt=findsqrt(number);
    cout<<sqrt<<endl;
    // now the float part   
    double num=getFloat(sqrt);

    return 0;
}