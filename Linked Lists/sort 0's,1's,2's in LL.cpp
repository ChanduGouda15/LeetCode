/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Add code here
    Node *temp=head;
    int count_0=0;
    int count_1=0;
    int count_2=0;
    while(temp!=NULL){
        if(temp->data==0) count_0++;
        if(temp->data==1) count_1++;
        if(temp->data==2) count_2++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL && count_0!=0){
        if(temp->data==0) count_0--;
        else{
            temp->data=0;
            count_0--;
        }
        temp=temp->next;
    }
    Node* temp_1=temp;
    while(temp_1!=NULL && count_1!=0 ){
        if(temp_1->data==1) count_1--;
        else{
            temp_1->data=1;
            count_1--;
        }
        temp_1=temp_1->next;
    }
    Node* temp_2=temp_1;
    while(temp_2!=NULL && count_2!=0){
        if(temp_2->data==2) count_2--;
        else{
            temp_2->data=2;
            count_2--;
        }
        temp_2=temp_2->next;
    }
    return head;
    }
};