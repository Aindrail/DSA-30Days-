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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        if(list1->val > list2->val){
swap(list1,list2);
        }
        ListNode* res = list1;
        
        while(list1 !=NULL && list2 !=NULL){
ListNode * temp = NULL;
            while(list1 !=NULL && list1->val<=list2->val){
    temp = list1;
                list1= list1->next;
}
            temp->next = list2;
            swap(list1,list2);
}
        return res;
        
    }
};

// Qlink :- https://leetcode.com/problems/merge-two-sorted-lists/submissions/
// Approach :-Step 1: Create two pointers, say l1 and l2. Compare the first node of both lists and find the small among the two. Assign pointer l1 to the smaller value node.

// Step 2: Create a pointer, say res, to l1. An iteration is basically iterating through both lists till the value pointed by l1 is less than or equal to the value pointed by l2.

// Step 3: Start iteration. Create a variable, say, temp. It will keep track of the last node sorted list in an iteration. 

// Step 4: Once an iteration is complete, link node pointed by temp to node pointed by l2. Swap l1 and l2.

// Step 5: If any one of the pointers among l1 and l2 is NULL, then move the node pointed by temp to the next higher value node.

// TC :- O(n+m) SC :- O(1)