class Solution {
public:
    int fillCups(vector<int>& amount) {
        
        priority_queue<int> q;
        for(auto x:amount){
            if(x>0){
                q.push(x);
            }
        }
        int ans=0;
        int cupx=0;
        int cupy=0;
        
        while(q.size()>1){
            cupx=q.top();
            q.pop();
            cupy=q.top();
            q.pop();
            cupx = cupx-1;
            cupy = cupy-1;
            ans=ans+1;
            if(cupx>0){
                q.push(cupx);
            }
            if(cupy>0){
                q.push(cupy);
            }
        }
        if(q.size()==1){
            ans = ans + q.top();
        }
        return ans;
    }
};
