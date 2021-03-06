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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* temp = head;
        
        if(head==NULL) return NULL;
        if(head->next==NULL || k==0)  return head;
        
        int counter = 1;
        
        while(temp->next){
            temp = temp->next;
            counter++;
        }
        temp->next = head;
        k = k % counter;
        k = counter - k;
        
        while(k--){
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        
        return head;
    }
};



/*
Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]

Example 2:
Input: head = [0,1,2], k = 4
Output: [2,0,1]
*/
