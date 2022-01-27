class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * fast = head;
        ListNode * slow = head;
        if(head==NULL)
            return false;
        
        if(fast->next !=NULL){
             do{
            
                fast = fast->next->next;
            slow = slow->next;

   
} while( fast != NULL &&fast->next !=NULL && fast!=slow);
}
        
      
        if(fast==NULL || fast->next ==NULL){
return false;
}
        return true;
    }
};
//Qlink :- https://leetcode.com/problems/linked-list-cycle/submissions/
//Approach :- fast and slow ptr. if match true if fast is null then false.
// TC :- O(N) SC :- O(1)