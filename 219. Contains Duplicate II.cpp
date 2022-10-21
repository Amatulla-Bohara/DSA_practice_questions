class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
           if(mp.count(arr[i])){
               if(abs(i-mp[arr[i]])<=k){
                   return true;
               }
           }
            mp[arr[i]]=i;
        }
        return false;
    }
};


/*
Example 1:
Input: nums = [1,2,3,1], k = 3
Output: true

Example 2:
Input: nums = [1,0,1,1], k = 1
Output: true

Example 3:
Input: nums = [1,2,3,1,2,3], k = 2
Output: false
*/
