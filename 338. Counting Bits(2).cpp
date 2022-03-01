//question link : https://leetcode.com/problems/counting-bits/

class Solution {
    public:
    
    vector<int> countBits(int n){
        vector<int> ans;
        
        ans.push_back(0);
        
        for(int i=1; i<=n; i++){
            if(i%2==0){
                ans.push_back(ans[i/2]);
            }
            else{
                ans.push_back(ans[i/2]+1);
            }
        }
        return ans;
    }
};

/*
Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
*/
