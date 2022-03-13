class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
             else{
                 if(st.size()==0) return false;
                 char c = st.top();
                 st.pop();
                 
                 if((c=='(' && s[i]==')') || (c=='{' && s[i]=='}') || (c=='[' && s[i]==']')){
                     continue;
                 }
                 else{
                       return false;
                 }
            }
      }
         return st.empty();
        
    }
};


/*
Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
*/
