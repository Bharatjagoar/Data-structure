#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Altertnating(vector<int> tiles, int k)
{
    // ppore array ko ek baar traverse karlo
    // or dekho kha ban rha hai grp
    // jaha ban rha hai vhi se shuru kro sliding window
    int group=0;
    int size = tiles.size();
    int startIndex = -1, lastindex = -1;
    int required = k-2;
    int state=tiles[0] , change = 0;
    for(int i = 1 ; i< size ; i ++ ){
        if(state!=tiles[i]) {
            change++;
        }
        else change = 0;
        state = tiles[i];
        if(change == k-1){
            group++;
            startIndex = i-(k-1);
            lastindex = i;
            break;
        }
    }
    cout<<group<<startIndex<<"  "<<lastindex<<endl;
    int endstate = tiles[lastindex];
    int startstate = tiles[startIndex];
    while (lastindex%size!=k-1){
        
        startIndex++;
    }
    
    
    
    return 0;
}

int main()
{

    vector<int> tiles = {0,1,0,0,1,0,1};
    int k = 3;
    int ans = Altertnating(tiles, k);

    return 0;
}
