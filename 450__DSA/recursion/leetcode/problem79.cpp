#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//Approach 
// string traverse karonnga word by word 
// jaha unmatch hua vhi return false krdunga
// mujhe yha check krna pdega ki ye tile visite to nhi hai 




// ek edge case mere dimag me aya like , Rat and maze ki trh 
// yha given hi nhi hai ki wheather the word will start from 0,0 


vector<vector<int>> getIndecies(vector<vector<char>>board,char ch){
    vector<vector<int>>indecies;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if(ch == board[i][j]){
                indecies.push_back({i,j});
            }
        }
    }
    return indecies;
}


bool searchWord(vector<vector<char>>&board,string word,int index , int Yaxis, int Xaxis ){
    cout<<Yaxis<<"  "<<Xaxis<<endl;

    if(Yaxis>=board.size() || Yaxis<0 || Xaxis<0 || Xaxis>=board[0].size() || board[Yaxis][Xaxis]!=word[index]){
        cout<<Yaxis<<"  "<<Xaxis<<endl;
        cout<<board[Yaxis][Xaxis]<<endl;
        return false;
    }
    if(word.length()-1==index){
        // cout<<board[Yaxis][Xaxis] << "  " << word[index]<<endl;
        return true;
    }
    char ch = board[Yaxis][Xaxis];
    board[Yaxis][Xaxis] = true;
    
    bool a,b,c,d;
    a = searchWord(board,word,index+1,Xaxis+1,Yaxis);//for right value
    b = searchWord(board,word,index+1,Xaxis-1,Yaxis);//for left value
    c = searchWord(board,word,index+1,Xaxis,Yaxis+1);//for down value
    d = searchWord(board,word,index+1,Xaxis,Yaxis-1);//for up value


    board[Yaxis][Xaxis] = ch;
    // cout<<(a||c||b||d)<<endl;
    return (a||c||b||d);

}


int main(){
 
    vector<vector<char>>board={
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    vector<vector<int>>indieces;
    string word = "ABCCED";
    indieces = getIndecies(board,word[0]);
    // cout<<board.size()<<"    "<<board[0].size()<<endl;
    //printing the indecies :::::------>
    for(auto x : indieces){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    // cout<<searchWord(board,word,0,0,0)<<endl;

    for(auto x : indieces){
        cout<<searchWord(board,word,0,x[0],x[1])<<endl;
        if(searchWord(board,word,0,x[0],x[1])){
            return true;
        }
    }
    return 0;
}
