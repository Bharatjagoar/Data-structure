#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    // Constructor with data
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Constructor with data and next pointer
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

void printLinkedList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

Node *generateLinkedList(int arr[], int size)
{
    if (size == 0)
        return nullptr;

    Node *head = new Node(arr[0]);
    Node *current = head;

    for (int i = 1; i < size; i++)
    {
        current->next = new Node(arr[i]);
        current = current->next;
    }

    return head;
}

Node *MergeLL(Node *first, Node *second)
{
    Node *copyOne = first, *copyTwo = second, *previous = nullptr;
    if (first->data > second->data)
    {
        previous = second;
        second = second->next;
        while (first != NULL && second != NULL)
        {
            if (first->data > second->data)
            {
                previous->next = second;
                second = second->next;
            }
            else if (first->data < second->data)
            {
                previous->next = first;
                first = first->next;
            }
            else
            {
                previous->next = first;
                first = first->next;
                previous = previous->next;
                previous->next = second;
                second = second->next;
            }
            previous = previous->next;
        }
        if (second == NULL)
        {
            previous->next = first;
        }
        else if (first == NULL)
        {
            previous->next = second;
        }
        return copyTwo;
    }
    else if (first->data < second->data)
    {
        previous = first;
        first = first->next;
        while (first != NULL && second != NULL)
        {
            if (first->data > second->data)
            {
                previous->next = second;
                second = second->next;
            }
            else if (first->data < second->data)
            {
                previous->next = first;
                first = first->next;
            }
            else
            {
                previous->next = first;
                first = first->next;
                previous = previous->next;
                previous->next = second;
                second = second->next;
            }
            previous = previous->next;
        }
        if (second == NULL)
        {
            previous->next = first;
        }
        else if (first == NULL)
        {
            previous->next = second;
        }
        return copyOne;
    }
    else
    {
        previous = first;
        first = first->next;
        while (first != NULL && second != NULL)
        {
            if (first->data > second->data)
            {
                previous->next = second;
                second = second->next;
            }
            else if (first->data < second->data)
            {
                previous->next = first;
                first = first->next;
            }
            else
            {
                previous->next = first;
                first = first->next;
                previous = previous->next;
                previous->next = second;
                second = second->next;
            }
            previous = previous->next;
        }
        if (second == NULL)
        {
            previous->next = first;
        }
        else if (first == NULL)
        {
            previous->next = second;
        }
        return copyOne;
    }
}

int main()
{
    int arr[] = {-1};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node *first = generateLinkedList(arr, size);
    int arr2[] = {1, 4, 8, 9};
    size = sizeof(arr2) / sizeof(arr[0]);
    Node *second = generateLinkedList(arr2, size);
    Node *head = MergeLL(first,second);
    printLinkedList(head);
    // printLinkedList(second);

    return 0;
}