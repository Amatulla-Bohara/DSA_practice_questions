class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        stack<int> st;
        int n = s.length();
        
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }
                else{
                    s[i]='#';
                }
            }
        }
        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }
        for(int i=0; i<n; i++){
            if(s[i]!='#'){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

/*
Example 1:
Input: s = "lee(t(c)o)de)"
Output: "lee(t(c)o)de"
Explanation: "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.

Example 2:
Input: s = "a)b(c)d"
Output: "ab(c)d"

Example 3:
Input: s = "))(("
Output: ""
Explanation: An empty string is also valid.
*/
