class Solution {
public:
    char findTheDifference(string s, string t) {
        int S = s.length();
        int T = t.length();

        int s_sum=0;
        int t_sum=0;

        for(int i=0; i<S; i++){
            s_sum = s_sum + int(s[i]);
        }
        for(int j=0; j<T; j++){
            t_sum = t_sum + int(t[j]);
        }

        int alpha = t_sum - s_sum;
        return char(alpha);
    }
};
