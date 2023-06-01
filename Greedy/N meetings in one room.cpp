int maxMeetings(int start[], int end[], int n)
    {
        int ans=0;
        vector<pair<int, int> > v;
        
        for(int i=0; i<n; i++){
            v.push_back(make_pair(end[i], start[i]));
        }
        sort(v.begin(), v.end());
        int check = v[0].first;
        int i=0;
        
        for(auto x:v){
            if(i==0) {
                i++;
                ans++;
                continue;
            }
            else{
                if(check < x.second){
                    ans++;
                    check = x.first;
                }
            }
        }
        
        return ans;
    }
