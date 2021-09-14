class Solution {
public:
    int lengthOfLastWord(string s) {
       
        int last= s.length()-1;
        int ans=0;
        while(s[last]==' '){
            last--;
        }
        for(; last>=0 && s[last]!=' '; last--){
            ans++;
        }
        return ans;
    }
};
