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
    int pairSum(ListNode* head) {
        vector<int> v;
        int maxi = INT_MIN;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int n = v.size();

        for(int i=0; i<n/2; i++){
            maxi = max(v[i]+v[n-i-1], maxi);
        }
        return maxi;
    }
};
