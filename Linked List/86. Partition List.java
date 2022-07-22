class Solution {
    public ListNode partition(ListNode head, int x) {
        if (head==null) return null;
        
        ListNode small = new ListNode(0);
        small.next = head;
        ListNode smallhead = small;
        ListNode large = new ListNode(0);
        large.next = head;
        ListNode largehead = large;
        
        while(head!=null){
            if(head.val<x){
                small.next = head;
                small = small.next;
            }
            
            else{
                large.next = head;
                large = large.next;
            }
            head = head.next;
        }
        large.next = null;
        small.next = largehead.next;
        return smallhead.next;
        
    }
}
