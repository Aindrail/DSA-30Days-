class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
};
//Qlink :- https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/
//Approach :- take a fast pointer and take it to n place and then move slow and fast simultaneously until fast is null
//Time Complexity: O(N)

//Space Complexity: O(1)