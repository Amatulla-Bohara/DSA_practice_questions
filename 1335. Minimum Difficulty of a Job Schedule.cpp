class Solution {
public:
    int t[301][11];
    int solve(vector<int>& mat, int n, int idx, int d) {
        if(d == 1)
            return *max_element(begin(mat)+idx, end(mat));
        
        if(t[idx][d] != -1)
            return t[idx][d];
    
        
        int Max = INT_MIN;
        int result = INT_MAX;
        
        for(int i = idx; i<=n-d; i++) {
            Max = max(Max, mat[i]);
            result = min(result, Max + solve(mat, n, i+1, d-1));
        }
        return t[idx][d] = result;
    }
    
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if(n < d)
            return -1;
        memset(t, -1, sizeof(t));
        return solve(jobDifficulty, n, 0, d);
    }
};

/*
Example 1:
Input: jobDifficulty = [6,5,4,3,2,1], d = 2
Output: 7
Explanation: First day you can finish the first 5 jobs, total difficulty = 6.
Second day you can finish the last job, total difficulty = 1.
The difficulty of the schedule = 6 + 1 = 7 

Example 2:
Input: jobDifficulty = [9,9,9], d = 4
Output: -1
Explanation: If you finish a job per day you will still have a free day. you cannot find a schedule for the given jobs.

Example 3:
Input: jobDifficulty = [1,1,1], d = 3
Output: 3
Explanation: The schedule is one job per day. total difficulty will be 3.
*/
