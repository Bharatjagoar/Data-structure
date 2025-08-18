#include <bits/stdc++.h> 

void Insert(int *arr,int pos ,int lastindex ){
    int index = pos+1 ; 
    while(index!= lastindex+1){
        arr[index] = arr[index-1];
        index++;
    }
}

void popout(int * arr , int pos , int lastindex){
    //pop me top index hai jisko remove karna hai 
    int index = pos;
    while(index!= lastindex){
        arr[index] = arr[index+1];
        index++;
    }
    arr[index] = 0;
}




class NStack
{
public:
    // Initialize your data structure.
    int size; 
    int *Mainarr=nullptr;
    int *topIndexes, *bottomIndexes;
    int capacity=-1;
    int numberOfStacks;
    NStack(int N, int S)
    {
        // Write your code here.
        size = S;
        Mainarr = new int[S];
        topIndexes = new int[N];
        bottomIndexes = new int[N];
        numberOfStacks=N;
        for(int i = 0; i < N ; i++){
            topIndexes[i]=-1;
            bottomIndexes[i] = -1;
        }
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        if(capacity == size-1) return false;
        capacity++;
        // ham bottomIndexes ko check karenge agar vo -1 hai ot hame capacity ki jo position hai vahi se
        // uss stack ko initialize karna hai 
        // otherwise taja top index hai usme +1 karke vaha element ko insert kr wana hai
        if(bottomIndexes[m-1]==-1){
            Mainarr[capacity] = x;
            topIndexes[m-1]=capacity;
            bottomIndexes[m-1]=capacity;
        }else{
            Insert(Mainarr , topIndexes[m-1]+1,capacity);
            Mainarr[topIndexes[m-1]+1]= x;
            topIndexes[m-1]++;
        }
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        if(bottomIndexes[m-1]==-1) return -1;
        int top = Mainarr[topIndexes[m-1]];
        popout(Mainarr , topIndexes[m-1],capacity);
        for(int i = 0 ; i < numberOfStacks ; i++){
            if(bottomIndexes[i]>topIndexes[m-1]){
                bottomIndexes[i]--;
                topIndexes[i]--;
            }
        }
        topIndexes[m-1]--;
        if(topIndexes[m-1]<bottomIndexes[m-1]){
            bottomIndexes[m-1]=-1;
            topIndexes[m-1] = -1;
        }
        return top;
    }
};