#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// i need I variable to so that i can count the distance or total number count of that GRP
// i need a variable named pos so that we can enter new charter info there




int GetTheLength(vector<char>& chars) {
    for (int i = 0; i < chars.size(); i++)
    {
        /* code */
        cout<<chars[i]<< " ";
    }
    cout<<endl;
    int i = 0, j = 1,size = chars.size(), InsertionPos = 0 , count = 1;
    char ch = chars[0];
    for(int j = 1 ; j < size ; j++){

        if(chars[j]!=ch){
            // cout<<"j :: "<<j<<endl;
            count = j-i;
            cout<<"count is :: "<<count<<endl;
            chars[InsertionPos] = chars[j-1];
            ch = chars[j];
            if(count>1){
                // cout<<"yes"<<InsertionPos<<endl;
                string countString = to_string(count);
                // cout<<countString<<endl;
                
                cout<<InsertionPos <<endl;
                InsertionPos++;
                int k = 0;
                // problem yha hai
                cout<<InsertionPos<<endl;
                while (countString.length()>k)
                {
                    // cout<<k+InsertionPos<<endl;

                    chars[InsertionPos]=countString[k];
                    InsertionPos++;
                    k++;
                }
                // cout<<InsertionPos+ k + 1<<endl;
                // InsertionPos = InsertionPos+ k ;
                i=j;
                // cout<<count<<endl;
            }else{
                //if count is 1 the there is no need to append the count in front
                // cout<<"hfdlsa"<<InsertionPos<< chars[j-1]<<endl;
                
                InsertionPos++;
                i=j;
            }
            count = 1;
        }else{
            count++;
        }
        cout<<ch<< " ";
    }
    cout<<endl<<chars.size()<<" "<<j;
    cout<<endl<<i<<endl<<InsertionPos<<endl;
    count = chars.size() - i;
    cout<<ch<<"   " << "bharat"<<endl;
    chars[InsertionPos]=ch;
    if(count == 1 ){
        chars.resize(InsertionPos+1);
    }
    else if(count<10){
        chars[++InsertionPos] = to_string(count)[0];
        chars.resize(InsertionPos+1);
    }else{
        int k = 0 ;
        string countString = to_string(count);
        cout<<"count string :: "<<countString[1]<<"    "<< InsertionPos<<endl; 
        while (k<countString.length())
        {
            chars[++InsertionPos] = countString[k];
            k++;
        }
        chars.resize(InsertionPos+1);
    }
    for (int i = 0; i < chars.size(); i++)
    {
        /* code */

        cout<<chars[i]<< " ";
    }
    cout<<endl<<InsertionPos<<endl;

    return (int) chars.size();
}

int main()
{

    vector<char> chars = {'a'};

    cout<<endl<<GetTheLength(chars)<<endl;
    return 0;
}