class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *begin=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
  fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
while(begin!=slow){
    slow=slow->next;
    begin=begin->next;
}
                return slow;
}
}
        return NULL;
        
    }
};

//Qlink :- https://leetcode.com/problems/linked-list-cycle-ii/submissions/
//TC ;- O(n)
// Approach :- first find the cycle. then take a head pointer and move slow pounter the node that they meet is the staring node.
//Reason(intuition)
//Let’s say a slow pointer covers the L2 distance from the starting node of the cycle until it collides with a fast pointer. L1 be the distance traveled by the entry pointer to the starting node of the cycle. So, in total, the slow pointer covers the L1+L2 distance. We know that a fast pointer covers some steps more than a slow pointer. Therefore, we can say that a fast pointer will surely cover the L1+L2 distance. Plus, a fast pointer will cover more steps which will accumulate to nC length where cC is the length of the cycle and n is the number of turns. Thus, the fast pointer covers the total length of L1+L2+nC. 

// We know that the slow pointer travels twice the fast pointer. So this makes equation to

// 2(L1+L2) = L1+L2+nC. This makes equation to

// L1+L2 = nC. Moving L2 to the right side

// L1 = nC-L2 and this shows why the entry pointer and the slow pointer would collide.