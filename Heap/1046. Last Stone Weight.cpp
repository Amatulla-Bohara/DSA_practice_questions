class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> pq;
        for(int i=0 ; i<stones.size(); i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x>y){
                pq.push(x-y);
            }
        }
        return(pq.empty() ? 0 : pq.top());
    }
}; 


/*
Example 1:

Input: stones = [2,7,4,1,8,1]
Output: 1
Explanation: 
We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of the last stone.
Example 2:

Input: stones = [1]
Output: 1
*/
