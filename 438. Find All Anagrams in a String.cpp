class Solution {
public:
    
    vector<int> findAnagrams(string s, string p) {
       vector <int> answer;
        vector<int> pmapping(26,0);
        vector<int> mapping(26,0);
        
        if(p.length()>s.length()){
            return answer;
        }
        int l = 0 , r = 0;
        
        while(r<p.length()){
            pmapping[p[r] - 'a']++;
            mapping[s[r] - 'a']++;
            r++;
        }
        r--;
        while(r<s.length()){
            if(mapping == pmapping){
                answer.push_back(l);
            }
            r++;
            if(r!=s.length()){
                mapping[s[l] - 'a']--;
                mapping[s[r] - 'a']++;
                l++;
            }
            
        }
        return answer;
        
    }
};
