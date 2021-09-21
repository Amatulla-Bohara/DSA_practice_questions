class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones = 0;
        int consicutive_ones=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                consicutive_ones++;
                if(nums[i+1]==0 || (i+1)==nums.size()){
                    max_ones = max(max_ones, consicutive_ones);
                    consicutive_ones=0;
                }
            }
        }
        return max_ones;
    }
};






Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
