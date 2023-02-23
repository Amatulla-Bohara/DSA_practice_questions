class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int> ans;
        unordered_map<int, int> mp;
        int n=nums.size();

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>(n/3)){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
