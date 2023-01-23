class Solution {
public:
    int longestPalindrome(string s) {

        int n = s.length();

        int len=0;
        int maxi = 0;
        int flag=0;

        unordered_map<char, int> mp;

        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        for(auto it = mp.begin(); it!=mp.end(); ++it){
            if(it->second % 2 == 0){
                len = len + it->second;
            }
            else{
                len = len + (it->second-1);
                flag++;
            }
        }

        if(flag>0){
            len++;
        }
        
        return len;
    }
};
