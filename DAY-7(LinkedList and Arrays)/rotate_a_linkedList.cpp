class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)return head;
        int  length =1;
        ListNode *temp = head;
        while(temp->next!=NULL && ++length)
temp= temp->next;
        temp->next=head;
        k=k%length;
        k=length-k;
        while(k--){
temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};
//Qlink :- https://leetcode.com/problems/rotate-list/description/
//Approach :- convert to circular lll and find the length then iterate len-k+1 and make next as head and ->next as head.
//TC :- O(n)+O(n-(n%k))  SC :- O(n)