class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto x:stones){
            pq.push(x);
        }
        int n=stones.size();

        while(pq.size()>1){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            if(first!=second){
                int add = abs(first-second);
                pq.push(add);
            }
            else{
                pq.push(0);
            }
        }
        return pq.top();
    }
};
