class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
       int n = s.length();
        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                if(count==0){
                    s[i]='#';
                }
                else{
                    count--;
                }
            }
        }
        
        count = 0;
        
        for(int i = n-1; i>=0; i--){
            if(s[i]==')'){
                count++;
            }
            else if(s[i]=='('){
                if(count==0){
                    s[i]='#';
                }
                else{
                    count--;
                }
            }
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
