class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1, nums2);
        }
        vector<int> ans;
        
        unordered_map<int, int> mp;
        
        for(auto i:nums1){
            ++mp[i++];
        }
        for(auto j:nums2){
            if(mp[j]>0){
                ans.push_back(j);
                --mp[j];
            }
        }
        return ans;
    }
};






Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.
