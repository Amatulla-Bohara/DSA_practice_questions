//question link - https://leetcode.com/problems/summary-ranges/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int size_nums= nums.size();
        vector<string> ans;
        if(0==nums.size()) return ans;
        for(int i=0; i<size_nums;){
            int start = i, end =i;
            //keep end+1<size 1st this will take less run time!!
            while(end+1<size_nums && nums[end] + 1 == nums[end+1]){
                end++;
            }
            if(end>start){
                ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
                
            }
            else{
                    ans.push_back(to_string(nums[start]));
                }
            i = end+1;
        }
        return ans;
    }
};


/*
Example 1:

Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"
Example 2:

Input: nums = [0,2,3,4,6,8,9]
Output: ["0","2->4","6","8->9"]
Explanation: The ranges are:
[0,0] --> "0"
[2,4] --> "2->4"
[6,6] --> "6"
[8,9] --> "8->9"
*/
