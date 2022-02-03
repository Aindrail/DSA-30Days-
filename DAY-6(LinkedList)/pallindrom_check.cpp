class Solution {
public:
    ListNode* reverseLL(ListNode* ptr){
      ListNode* pre=NULL;
    ListNode* nex=NULL;
    while(ptr!=NULL) {
        nex = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=nex;
    }
    return pre;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
fast= fast->next->next;
            slow=slow->next;
        }
       slow->next= reverseLL(slow->next);
        slow = slow->next;
        
        while(slow!=NULL){
        if(head->val!=slow->val)
            return false;
            head=head->next;
            slow=slow->next;
        } return true;
        
    }
};

//Qlink :- https://leetcode.com/problems/palindrome-linked-list/submissions/
//Time Complexity: O(N/2)+O(N/2)+O(N/2)

// Reason: O(N/2) for finding the middle element, reversing the list from the middle element, and traversing again to find palindrome respectively.

// Space Complexity: O(1)

//Approach :- find mid and then reverse ll from mid and check head from mid