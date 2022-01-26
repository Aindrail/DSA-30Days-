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
    ListNode* reverseList(ListNode* head) {
        ListNode * node =NULL;
        while(head !=NULL){
ListNode* next = head->next;
            head->next = node;
            node = head;
            head = next;
}
        return node;
    }
};

// Qlink :- https://leetcode.com/problems/reverse-linked-list/
// Approach :This approach is very similar to the above 3 pointer approach. In the process of reversing, the base operation is manipulating the pointers of each node and at the end, the original head should be pointing towards NULL and the original last node should be ‘head’ of the reversed Linked List. 
// TC :- O(n) SC :- O(1)
