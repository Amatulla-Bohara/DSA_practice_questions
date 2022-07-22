//question link - https://leetcode.com/problems/partition-list/


class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (head==NULL) return NULL;
        
        ListNode* small = new ListNode(-1);
        ListNode* large = new ListNode(-1);
        small->next = head;
        large->next = head;
        ListNode* smallhead = small;
        ListNode* largehead = large;
        
        while(head!=NULL){
            if(head->val<x){
                small->next = head;
                small = small->next;
            }
            else{
                large->next = head;
                large = large->next;
            }
            head = head->next;
        }
        large->next= NULL;
        small->next = largehead->next;
        return smallhead->next;
    }
};
/*
Example 1:
Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]

Example 2:
Input: head = [2,1], x = 2
Output: [1,2]
*/
