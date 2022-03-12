class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *current = head, *next;

          //  make copy of each node,
          // and link them together side-by-side in a single list.
          while (current != NULL) {
            next = current->next;

            Node* copy=new Node(current->val);
            current->next = copy;
            copy->next = next;

            current = next;
          }

          
          current = head;
          while (current != NULL) {
            if (current->random != NULL) {
              current->next->random = current->random->next;
            }
            current = current->next->next;
          }

          // Third round: restore the original list, and extract the copy list.
          current = head;
          Node* dummy = new Node(0);
          Node* copy, *copyTail = dummy;

          while (current != NULL) {
            next = current->next->next;

            // extract the copy
            copy = current->next;
            copyTail->next = copy;
            copyTail = copy;

            // restore the original list
            current->next = next;

            current = next;
          }

          return dummy->next;
    }
};


/*
Example 1:
Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]

Example 2:
Input: head = [[1,1],[2,1]]
Output: [[1,1],[2,1]]

Example 3:
Input: head = [[3,null],[3,0],[3,null]]
Output: [[3,null],[3,0],[3,null]]
*/
