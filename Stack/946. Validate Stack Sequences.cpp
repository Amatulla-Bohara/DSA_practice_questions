class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        
        int n = pushed.size();
        
       for(int i=0, j=0; i<n; i++){
           st.push(pushed[i]);
           while(!st.empty() && st.top()==popped[j]){
               st.pop();
               j++;
           }
       }
        return st.empty();
    }
};

/*
Example 1:
Input: pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
Output: true
Explanation: We might do the following sequence:
push(1), push(2), push(3), push(4),
pop() -> 4,
push(5),
pop() -> 5, pop() -> 3, pop() -> 2, pop() -> 1

Example 2:
Input: pushed = [1,2,3,4,5], popped = [4,3,5,1,2]
Output: false
Explanation: 1 cannot be popped before 2.
*/
