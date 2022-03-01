//question link: https://leetcode.com/problems/counting-bits/


class Solution {
public:
    
    int counter(int n){
        int count=0;
        while(n!=0){
            int rmsb = n & -n;
            n = n - rmsb;
            count++;
        }
        return count;
    }
    
    
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            ans.push_back(counter(i));
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
