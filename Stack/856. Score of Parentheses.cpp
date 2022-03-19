class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        stack<char> st;
        int count = 0;
        
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                st.push(count);
                count=0;
            }
            else{
                if(!st.empty()){
                    count = st.top() + max(2*count, 1);
                    st.pop();
                    
                }
             }
        }
        return count;
    }
};

/*
Example 1:

Input: s = "()"
Output: 1
Example 2:

Input: s = "(())"
Output: 2
Example 3:

Input: s = "()()"
Output: 2

*/
