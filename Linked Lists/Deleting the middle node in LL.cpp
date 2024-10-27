/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
    ListNode *slow = head;
    ListNode *fast=head;
    if(head->next==nullptr) return nullptr;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode *nxt=slow->next;
    if(nxt!=nullptr){
        slow->val=nxt->val;
        slow->next=nxt->next;
        nxt->next=nullptr;
    }
    else{
        ListNode *temp=head;
        while(temp->next!=slow){
            temp=temp->next;
        }
        temp->next=nullptr;
        delete slow;
    }
    return head;
    }
}; 