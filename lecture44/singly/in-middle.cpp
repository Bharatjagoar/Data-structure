#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next = nullptr;
    node(int data) : data(data) {};
};

void ReadLL(node *ptr, int freq)
{
    int data;
    for (int i = 0; i < freq; i++)
    {
        cout << "enter the number  :: " << "";
        cin >> data;
        node *temp = new node(data);
        ptr->next = temp;
        ptr = temp;
    }
}

void print(node *ptr)
{
    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

node* insert(node *ptr, int position,int data,int size)
{
    node* copy=ptr;
    if(position>=size+1){
        cout<<"irrelevent position"<<endl;
        return ptr;
    }

    // traverse the position

    int finalPos = position - 1;
    if(finalPos==0){
        node* temp = new node(data);
        temp->next = ptr;
        return temp;
    }
    node* last;
    int i = 0;
    while (i < finalPos)
    {
        if(i!=0){
            last=ptr;
        }
        ptr = ptr->next;
        i++;
    }

    node* temp = new node(data);
    last->next=temp;
    temp->next = ptr;
    return copy;
}

int main()
{

    node *head = new node(12);
    node *temp = head;
    int size;
    cout << head->data << endl;
    cout << "enter the size :: " << endl;
    cin >> size;
    ReadLL(head, size);
    // cout<<head->data<<endl;
    print(head);
    int pos, data;
    cout << endl
         << "enter the position :: " << "";
    cin >> pos;
    cout << "enter the data :: " << "";
    cin >> data;
    head = insert(head,pos,data,size);
    print(head);

    return 0;
}