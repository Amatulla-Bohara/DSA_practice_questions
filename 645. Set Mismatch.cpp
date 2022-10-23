class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n= nums.size();
        int original_sum = (n*(n+1))/2;
        int sum=0;
        int x=0;
        unordered_map<int, int> mp;
        
        for(auto p:nums){
            mp[p]++;
            if(mp[p]==2){
                x=p;
            }
            sum= sum+p;
        }
        return {x, original_sum-sum+x};
    }
};


/*
Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]

Example 2:
Input: nums = [1,1]
Output: [1,2]
*/
