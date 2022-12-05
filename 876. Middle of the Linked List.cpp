class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head==nullptr) return head;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }
};
