/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    // Write your code here.
    if (head == nullptr || k <= 0) return head;
    Node* kthnode = head;
    Node* temp=head;
    for(int i=0;i<k-1;i++){
        if (temp->next == nullptr) {
            return head;
        }
        temp=temp->next;
    }
    while(temp->next){
        temp=temp->next;
        kthnode=kthnode->next;
    }
    if (kthnode == head && kthnode->next == nullptr) {
        delete head;  
        return new Node(-1); 
    }
    Node* nxt=kthnode->next;
    if (nxt != nullptr) {
        kthnode->data = nxt->data;
        kthnode->next = nxt->next;
        delete nxt;
    }
    else{
        temp=head;
        while(temp->next!=kthnode){
            temp=temp->next;
        }
        temp->next=nullptr;
        delete kthnode;
    }
    return head;
}
