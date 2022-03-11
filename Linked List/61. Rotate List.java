/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        ListNode temp = head;
        
        if(head==null) return null;
        if(head.next==null || k==0)  return head;
        
        int counter = 1;
        
        while(temp.next!=null){
            temp = temp.next;
            counter++;
        }
        temp.next = head;
        k = k % counter;
        k = counter - k;
        
        while(k!=0){
            temp = temp.next;
            k--;
        }
        head = temp.next;
        temp.next = null;
        
        return head;
    }
}

/*
Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]

Example 2:
Input: head = [0,1,2], k = 4
Output: [2,0,1]
*/
