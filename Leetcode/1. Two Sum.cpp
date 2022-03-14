//Question link - https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        
        for(int i=0; i<n; i++){
            if(mp.find(target-nums[i]) !=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                break;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};

/*
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/
