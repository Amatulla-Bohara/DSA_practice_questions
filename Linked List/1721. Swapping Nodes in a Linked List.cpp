class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        
        while(--k){
            ptr1=ptr1->next;
        }
        ListNode* dummy = NULL;
        
        dummy = ptr1;
        
        ptr1 = ptr1->next;
        
        while(ptr1){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        swap(ptr2->val, dummy->val);
        return head;
    }
};

/*
Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]

Example 2:
Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]
*/
