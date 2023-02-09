class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> q;
        if(a>0){
            q.push(a);
        }
        if(b>0){
            q.push(b);
        }
        if(c>0){
            q.push(c);
        }
        int ans=0;
        int piles1;
        int piles2;
        while(q.size()>1){
            piles1 = q.top();
            q.pop();
            piles2 = q.top();
            q.pop();
            piles1 = piles1-1;
            piles2 = piles2-1;
            ans = ans+1;
            if(piles1>0){
                q.push(piles1);
            }
            if(piles2>0){
                q.push(piles2);
            }
        }
        if(q.size()==1){
            return ans;
        }

        return ans;
    }
};
