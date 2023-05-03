class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<vector<int>> res;
        set<int> mp1;
        set<int> mp2;
        int n1 = nums1.size();
        int n2 = nums2.size();

        for(int i=0; i<n1; i++){
            mp1.insert(nums1[i]);
        }
        for(int i=0; i<n2; i++){
            mp2.insert(nums2[i]);
        }
        for(auto x1:mp1){
            if(mp2.find(x1)==mp2.end()){
                ans.push_back(x1);
            }
        }
        res.push_back(ans);
        ans.clear();
        for(auto x2:mp2){
            if(mp1.find(x2)==mp1.end()){
                ans.push_back(x2);
            }
        }
        res.push_back(ans);
        ans.clear();
        return res;
    }
};
