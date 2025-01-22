#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getArea(int a,int b){
    return a*b;
}
int main(){
    vector<int> height={1,2,3,1000,9};
    int area=0,prevArea=0,i=0,j=height.size()-1;
    // cout<<j<<endl;
    if(height.size()==1) return 1;

    while (i<j){
        if(height[i]>height[j]){
            area = getArea(height[j],j-i);
        }else{
            area = getArea(height[i],j-i);
        }

        if(area>prevArea){
            prevArea=area;
            if(height[i]>height[j]){
                j--;
            }else if(height[i]==height[j]){
                i++;
                j--;
            }
            else{
                i++;
            }
        }else if(prevArea==area){
            if(height[i]>height[j]){
                j--;
            }else if(height[i]==height[j]){
                i++;
                j--;
            }
            else{
                i++;
            }
        }else{
            if(height[i]>height[j]){
                j--;
            }else if(height[i]==height[j]){
                i++;
                j--;
            }
            else{
                i++;
            }
        }
    }
    



    cout<<prevArea<<endl;
    // cout<<"hello world "<<endl;
    return 0;
}