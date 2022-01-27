#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int num;
        node* next;
        node(int a) {
            num = a;
            next = NULL;
        }
};
//utility function to insert node in the list
void insertNode(node* &head,int val) {
    node* newNode = new node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}
//utility function to find length of the list
int lengthOfLinkedList(node* head) {
    int length = 0;
    while(head != NULL) {
        ++length;
        head = head->next;
    }
    return length;
}
//utility function to reverse k nodes in the list
node* reverseKNodes(node* head,int k) {
    if(head == NULL||head->next == NULL) return head;
    
    int length = lengthOfLinkedList(head);
    
    node* dummyHead = new node(0);
    dummyHead->next = head;
    
    node* pre = dummyHead;
    node* cur;
    node* nex;
    
    while(length >= k) {
        cur = pre->next;
        nex = cur->next;
        for(int i=1;i<k;i++) {
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = cur->next;
        }
        pre = cur;
        length -= k;
    }
    return dummyHead->next;
}
//utility function to print the list
void printLinkedList(node* head) {
    while(head->next != NULL) {
        cout<<head->num<<"->";
        head = head->next;
    }
    cout<<head->num<<"\n";
}

int main() {
    node* head = NULL;
    int k = 3;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,6);
    insertNode(head,7);
    insertNode(head,8);
    
    cout<<"Original Linked List: "; printLinkedList(head);
    cout<<"After Reversal of k nodes: "; 
    node* newHead = reverseKNodes(head,k);
    printLinkedList(newHead);
    
    return 0;
}
//Qlink :- https://leetcode.com/problems/reverse-nodes-in-k-group/
//Approach :- The following steps are needed to arrive at the desired output. 

// Create a dummy node. Point next to this node to head of the linked list provided.
// Iterate through the given linked list to get the length of the list.
// Create three pointer pre,cur and nex to reverse each group. Why? If we observe output, we can see that we have to reverse each group, apart from modifying links of group.
// Iterate through the linked list until the length of list to be processed is greater than and equal to given k.
// For each iteration, point cur to pre->next and nex to nex->next.
// Start nested iteration for length of k.
// For each iteration, modify links as following steps:-
// cur->next = nex->next
// nex->next = pre->next
// pre->next = nex
// nex = cur->next
// Move pre to cur and reduce length by k.

//Time Complexity: O(N)

// Reason: Nested iteration with O((N/k)*k) which makes it equal to O(N).

// Space Complexity: O(1)

// Reason: No extra data structures are used for computation.





