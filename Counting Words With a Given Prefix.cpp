class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;

        for(int i=0; i<words.size(); i++){
            int j=0;
            string check = words[i];
            for(int k=0; k<pref.size(); k++){
                if(check[j]==pref[k]){
                    if(j==pref.size()-1){
                        ans++;
                    }
                }
                else{
                    break;
                }
                j++;
            }
        }
        return ans;
    }
};
