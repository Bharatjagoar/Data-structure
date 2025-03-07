#include<iostream>
using namespace std;

#include<set>

// iterator in c++ stl means the address , and if you want to use that value at that address you can use 
// derefferencing operator



int main(){
     set<int> arr;
    arr.insert(5);
    arr.insert(6);
    arr.insert(4);
    arr.insert(100);
    arr.insert(1450);
    arr.insert(16);
    arr.insert(1020);

    for(auto x:arr){
        cout<<x<<"\t";
    }cout<<endl;
    arr.erase(arr.begin());
    for(auto x:arr){
        cout<<x<<"\t";
    }cout<<endl;

    // lets say we wanna print the 4th value in set
    set <int>::iterator it = ++arr.begin();
    // it=it+1;
    cout<<*it<<endl;


    // if you wanna print 4 value of the set you can use advance(it,4), 0 index based !!


    
    auto hell =arr.insert(60);
    cout<<hell.second<<endl;
    return 0;
}