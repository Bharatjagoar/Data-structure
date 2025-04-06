#include <bits/stdc++.h> 
#include<vector>
using namespace std;
class TwoStack {

public:
    vector<int > arr;
    int size ;
    int pos1,pos2;

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        arr.resize(s,-1);
        this->size = s;
        this->pos1=-1;
        this->pos2=this->size;
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(this->pos1+1==this->pos2 ){
            return;
        }
        this->pos1++;
        arr[this->pos1] = num;

    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(this->pos2-1==this->pos1){
            return ;
        }
        this->pos2--;
        arr[this->pos2]=num;
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(this->pos1==-1){
            return -1;
        }
        int data = arr[this->pos1];
        arr[this->pos1]=-1;
        this->pos1--;
        return data;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // cout<<pos2<<endl;
        // Write your code here.
        if(this->pos2==size){
            return -1;
        }
        int data = arr[this->pos2];
        arr[this->pos2]=-1;
        this->pos2++;
        return data;
    }
};

int main(){
    return 0;
}