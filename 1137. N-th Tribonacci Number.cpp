class Solution {
public:
    int tribonacci(int n) {
        vector<int> v={0,1,1};

        int x=0;

        for(int i=3; i<=n; i++){
            x = v[i-1] + v[i-2] + v[i-3];
            v.push_back(x);
        }
        return v[n];
    }
};

