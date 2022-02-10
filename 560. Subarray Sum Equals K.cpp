
question link: https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    
        unordered_map<int,int> mp;
        int sum=0;
        int count=0;
        
        for(int i=0; i<nums.size(); i++){
            sum=sum+nums[i];
            if(sum==k){
                count++;
            }
            
            if(mp.find(sum-k)!=mp.end()){
                count=count+mp[sum-k];
            }
            if(mp.find(sum)!=mp.end()){
                mp[sum]++;
            }
            else{
                mp[sum]=1;
            }
        }
        return count;
    }
};


/*
Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
*/
