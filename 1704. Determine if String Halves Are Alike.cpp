class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size()/2;
        int l = s.size();
        int c1=0;
        int c2=0;
        for(int i=0; i<n; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                c1++;
            }
        }
        for(int i=n; i<l; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                c2++;
            }
        }
        return c1==c2;
    }
};
