class Solution {
public:
    double average(vector<int>& salary) {
        double ans=0;
        int n=salary.size();
        sort(salary.begin(), salary.end());

        for(int i=1; i<n-1; i++){
            ans = ans + salary[i];
        }
        ans = ans/(n-2);
        return ans;
    }
};

      
