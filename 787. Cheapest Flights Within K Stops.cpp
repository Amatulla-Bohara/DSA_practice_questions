#define pi pair<int, pair<int,int>>
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector<pair<int, int>> adj[n];
        for(auto l : flights){
            adj[l[0]].push_back({l[1], l[2]});
        }

        queue<pi> q;
        vector<int> dist(n, 1e9);
        q.push({0, {src, 0}});
        dist[src] = 0;

        while(!q.empty()){

            int stop = q.front().first;
            int node = q.front().second.first, price = q.front().second.second;
            q.pop();

            if(stop > k) continue;

            for(auto it:adj[node]){
                int adjN = it.first;
                int Nprice = it.second;
                if(dist[adjN] > price + Nprice && stop<=k){
                    dist[adjN] = price + Nprice;
                    q.push({stop+1, {adjN, dist[adjN]}});
                }
            }
        }

        if(dist[dst]==1e9) return -1;
        return dist[dst];
    }
};
