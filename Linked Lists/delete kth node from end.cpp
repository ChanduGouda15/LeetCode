#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class node
{
	public:
	int data;
    node * next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
*/

node *findKthFromLast(node *head, int k)
{
	//Write your Code Here
	node *kthNode = head;
	node *temp=head;
	for(int i=0;i<k-1;i++){
		temp=temp->next;
	}
	while(temp->next){
		temp=temp->next;
		kthNode=kthNode->next;
	}
	return kthNode;
}
