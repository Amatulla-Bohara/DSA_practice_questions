class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int n = path.size();
        string ans="";
        for(int i=0; i<n; i++){
            
            if(path[i]=='/'){
                continue;
            }
            else{
                string str= "";
                while(i<n && path[i]!='/'){
                    str = str + path[i];
                    i++;
                }
                if(str==".."){
                    if(!st.empty()){
                        st.pop();
                    }
                }
                else if(str=="."){
                    continue;
                }
                else{
                    st.push(str);
                }
            }
            
        }
        while(!st.empty()){
                ans = '/' +  st.top() + ans;
                st.pop();
            }
        return ans.size()>0?ans:"/";
    }
};

/*
Example 1:

Input: path = "/home/"
Output: "/home"
Explanation: Note that there is no trailing slash after the last directory name.
Example 2:

Input: path = "/../"
Output: "/"
Explanation: Going one level up from the root directory is a no-op, as the root level is the highest level you can go.
Example 3:

Input: path = "/home//foo/"
Output: "/home/foo"
Explanation: In the canonical path, multiple consecutive slashes are replaced by a single one.
*/
