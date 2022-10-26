class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int sum=nums[0];
        m[nums[0]%k]=0;
        for(int i=1;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum%k==0)
                return true;
            if(m.find(sum%k)!=m.end()&&i-m[sum%k]>=2)
                return true;
            if(m.find(sum%k)==m.end())
            {
                m[sum%k]=i;
            }
        }
        return false;
    }
	//TC:O(n)
};


/*
Example 1:
Input: nums = [23,2,4,6,7], k = 6
Output: true
Explanation: [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.

Example 2:
Input: nums = [23,2,6,4,7], k = 6
Output: true
Explanation: [23, 2, 6, 4, 7] is an continuous subarray of size 5 whose elements sum up to 42.
42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.

Example 3:
Input: nums = [23,2,6,4,7], k = 13
Output: false
*/
