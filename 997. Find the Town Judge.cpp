class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trusted(n+1, 0);
        vector<int> trusting(n+1, 0);

        int tsz = trust.size();

        for(int i=0; i<tsz; i++){
            trusting[trust[i][0]]++;
            trusted[trust[i][1]]++;
        }

        int res =-1;
        
        for(int i=1; i<=n; i++){
            if(trusting[i]==0 && trusted[i]==n-1){
                res = i;
            }
        }
        return res;
    }
};
