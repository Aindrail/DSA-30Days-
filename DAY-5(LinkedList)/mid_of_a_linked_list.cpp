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
    ListNode* middleNode(ListNode* head) {
        ListNode * fast = head;
        ListNode * slow = head;
        while(fast !=NULL && fast->next !=NULL){
fast = fast->next->next;
            slow = slow->next;
            

}
        return slow;
    }
};

//Qlink :- https://leetcode.com/problems/middle-of-the-linked-list/submissions/
// Approach :- Take two node fast and slow and check if fast !=NULL && fast->next!=NULL
// SC :- O(1) TC :- O(n) 