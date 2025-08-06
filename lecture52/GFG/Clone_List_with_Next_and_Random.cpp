
class Node {
    public:
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = nullptr;
        random = nullptr;
    }
};

class Solution {
    private : 
    Node* copyll(Node*head){
        Node*temphead = head;
        while(head){
            Node*temp = new Node(head->data);
            Node*tempnext = head->next;
            head->next = temp ;
            temp->next= tempnext;
            head = tempnext;
        }
        head = temphead;
        // cout<<endl;
        while(head){
            head->next->random = head->random!=nullptr? head->random->next:nullptr;
            // 
            // cout<<head->data<<endl;
            head=head->next->next;
        }
        head = temphead;
        // cout<<"original random :: "<<temphead->data<<endl;
        // cout<<"copy random :: "<<temphead->next->data<<endl;
        
        Node*copiedList = head->next;
        while(head){
            Node*copyelement = head->next;
            head->next = copyelement->next;
            if(copyelement->next == nullptr){
                copyelement->next=nullptr;
            }else{
                copyelement->next = copyelement->next->next;    
            }
            
            head= head->next;
        }
        
        
        
        return copiedList;
    }
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        // cout<<head->random->data<<endl;
        
        return copyll(head);
    }
};