#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *child;

    Node() : data(0), next(nullptr), child(nullptr) {}
    Node(int x) : data(x), next(nullptr), child(nullptr) {}
    Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
};

// Function to create the multilevel linked list
Node *createMultilevelList(vector<vector<int>> &arr)
{
    Node *head = nullptr;
    Node *prevRowTail = nullptr;

    for (const auto &row : arr)
    {
        if (row.empty())
            continue;

        Node *rowHead = new Node(row[0]);
        Node *current = rowHead;

        // Populate the current row
        for (size_t i = 1; i < row.size(); i++)
        {
            current->child = new Node(row[i]);
            current = current->child;
        }

        // Link the previous row's tail (if exists) to the current row's head
        if (prevRowTail)
            prevRowTail->next = rowHead;

        // Move the row's head to the main list
        if (!head)
            head = rowHead;

        // Update the tail for this row
        prevRowTail = rowHead;
    }

    return head;
}

// Function to print the multilevel linked list
void printMultilevelList(Node *head)
{
    Node *currentRow = head;

    while (currentRow)
    {
        Node *currentNode = currentRow;

        // Print the current row
        while (currentNode)
        {
            cout << currentNode->data << " ";
            currentNode = currentNode->child;
        }
        cout << endl;

        // Move to the next row
        currentRow = currentRow->next;
    }
}

void PrintLL(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->child;
    }
}

Node *flatten(Node *head)
{
    Node *RowHead = head, *temp = nullptr, *previous = nullptr;
		
		while(RowHead!=nullptr){
            temp=RowHead->next;
		
            RowHead->next = nullptr;    
			Node*child = RowHead->child;
			if(child!=nullptr){
				while(child!=nullptr){

					previous=child;
					child=child->child;
                    // cout<<child->data<<endl;
				}
				previous->child=temp;
			}else{
				RowHead->child = temp;
			}
		
        RowHead = temp;
		}
		
    
    return head;
}

Node* MergeSort(Node*head){
    // cout<<"fdsa"<<endl;
    if(head->child==nullptr) return head;
    Node*slow = head;
    Node*fast = head,*previous=nullptr;

    while (fast!=nullptr && fast->child!=nullptr)
    {
        /* code */
        fast=fast->child->child;
        previous=slow;
        slow = slow->child;
    }
    if(fast==nullptr){
        previous->child=nullptr;
        fast=slow;
        slow=head;
    }else{
        fast=slow->child;
        slow->child=nullptr;
        slow=head;
    }
    // PrintLL(fast);
    Node*listOne = MergeSort(slow);
    Node*listTwo = MergeSort(fast);
    
    Node*sorted = nullptr;

    if(listOne->data>listTwo->data){
        sorted=listTwo;
        listTwo=listTwo->child;
    }else{
        sorted=listOne;
        listOne=listOne->child;
    }
    Node*store=sorted;
    while (listOne!=nullptr &&  listTwo!=nullptr)
    {
        /* code */
        if(listOne->data>listTwo->data){
            sorted->child=listTwo;
            sorted=sorted->child;
            listTwo=listTwo->child;
        }else if(listOne->data<listTwo->data){
            sorted->child = listOne;
            sorted=sorted->child;
            listOne=listOne->child;
        }else{
            sorted->child=listTwo;
            sorted=sorted->child;
            listTwo=listTwo->child;


            sorted->child = listOne;
            sorted=sorted->child;
            listOne=listOne->child;
        }
    }

    if(listOne!=nullptr){
        sorted->child=listOne;
    }else if(listTwo!=nullptr){
        sorted->child = listTwo;
    }
    
    return store;
}




int main()
{
    // 2D array (each row sorted and elements within each row sorted)
    vector<vector<int>> arr = {
        {1,2,3},
        {8,10,15},
        {18,22},
        {29}};

    // Create the multilevel linked list
    Node *head = createMultilevelList(arr);
    // cout<<head->next->next->data<<endl;
    // Print the multilevel linked list
    // printMultilevelList(head);
    head = flatten(head);
    PrintLL(head);
    head = MergeSort(head);
    cout<<endl;
    PrintLL(head);

    return 0;
}