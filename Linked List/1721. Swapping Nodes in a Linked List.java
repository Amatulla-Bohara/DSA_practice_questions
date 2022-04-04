class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        ListNode P1 = head;
        ListNode P2 = head;
        ListNode current = head;
        int count = 1;
        
        while(current!=null){
            if(count < k){
                P1 = P1.next;
            }
            if(count > k){
                P2 = P2.next;
            }
            current = current.next;
            count=count+1;
        }
        int temp = P1.val;
        P1.val = P2.val;
        P2.val = temp;
        return head;
    }
}

/*
Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]

Example 2:
Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]
*/
