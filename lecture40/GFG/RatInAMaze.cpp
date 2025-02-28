#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void path(vector<string>&paths,string currentPath,vector<vector<int>>&maze,int xAxis,int yAxis){
    if(xAxis<0 || yAxis<0 || xAxis>=maze[0].size() || yAxis >= maze.size() || maze[yAxis][xAxis]==0){
        return;
    }

    if(yAxis==maze.size()-1 && xAxis == maze[0].size()-1){
        paths.push_back(currentPath);
        return;
    }

    maze[yAxis][xAxis]=0;

    path(paths,currentPath+'R',maze,xAxis+1,yAxis);
    path(paths,currentPath+'L',maze,xAxis-1,yAxis);
    path(paths,currentPath+'D',maze,xAxis,yAxis+1);
    path(paths,currentPath+'U',maze,xAxis,yAxis-1);

    maze[yAxis][xAxis]=1;

}



int main(){
 
    vector<vector<int>>maze= {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    vector<string>paths;
    string currentPath="";
    int count = 0 ;
    int cachedCount = 0;
    path(paths,currentPath,maze,0,0);
    // cout<<"hello fdsafdsafdswrold"<<endl;
    for(auto x : paths){
        cout<<x<<endl;
    }
 
    return 0 ;
}