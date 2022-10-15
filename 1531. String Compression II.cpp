class Solution {
public:
    int dp[101][101];
    int dfs(string &s, int left, int K) {
        int k = K;
        if(s.size() - left <= k) return 0;
        if(dp[left][k] >= 0) return dp[left][k];
        int res = k ? dfs(s, left + 1, k - 1) : 10000, c = 1;
        for(int i = left + 1; i <= s.size(); ++i) {
            res = min(res, dfs(s, i, k) + 1 + (c >= 100 ? 3 : (c >= 10 ? 2 : (c > 1 ? 1 :0))));
            if(i == s.size()) break;
            if(s[i] == s[left]) ++c;
            else if(--k < 0) break;
        }
        return dp[left][K] = res;
    }
    
    int getLengthOfOptimalCompression(string s, int k) {
        memset(dp, -1, sizeof(dp));
        return dfs(s, 0, k);
    }
};



/*
Example 1:
Input: s = "aaabcccd", k = 2
Output: 4
Explanation: Compressing s without deleting anything will give us "a3bc3d" of length 6. Deleting any of the characters 'a' or 'c' would at most decrease the length of the compressed string to 5, for instance delete 2 'a' then we will have s = "abcccd" which compressed is abc3d. Therefore, the optimal way is to delete 'b' and 'd', then the compressed version of s will be "a3c3" of length 4.

Example 2:
Input: s = "aabbaa", k = 2
Output: 2
Explanation: If we delete both 'b' characters, the resulting compressed string would be "a4" of length 2.

Example 3:
Input: s = "aaaaaaaaaaa", k = 0
Output: 3
Explanation: Since k is zero, we cannot delete anything. The compressed string is "a11" of length 3.
*/
