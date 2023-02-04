class Solution {
public:
    string convert(string s, int numRows) {
        
        vector<string> ans(numRows);

        if(numRows==1){
            return s;
        }
        bool flag = false;
        int i=0;

        for(auto k:s){
            ans[i]=ans[i]+k;
            if(i==0 || i==numRows-1){
                flag = !flag;
            }
            if(flag){
                i++;
            }
            else{
                i--;
            }
        }

        string zigzag="";
        for(int i=0; i<numRows; i++){
            zigzag = zigzag + ans[i];
        }
        return zigzag;
    }
};
