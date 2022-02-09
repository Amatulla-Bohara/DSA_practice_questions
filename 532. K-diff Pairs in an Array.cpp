//question link : https://leetcode.com/problems/k-diff-pairs-in-an-array/
//O(n2)

class Solution {
public:
    
   int findPairs(vector<int>& nums, int k) {
       map<pair<int, int>, int> m;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k and m.find({nums[j], nums[i]})==m.end())
                    m[{nums[i], nums[j]}]++;
            }
        }
        return m.size();
    }
};





/*
Example 1:

Input: nums = [3,1,4,1,5], k = 2
Output: 2
Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
Although we have two 1s in the input, we should only return the number of unique pairs.
Example 2:

Input: nums = [1,2,3,4,5], k = 1
Output: 4
Explanation: There are four 1-diff pairs in the array, (1, 2), (2, 3), (3, 4) and (4, 5).
*/
