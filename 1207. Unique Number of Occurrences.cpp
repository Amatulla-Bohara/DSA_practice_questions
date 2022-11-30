class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        int n = arr.size();
        unordered_map<int, int> mp;
        unordered_set<int> unqst;

        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto& m:mp){
            unqst.insert(m.second);
        }
        return mp.size()==unqst.size();
        
    }
};
