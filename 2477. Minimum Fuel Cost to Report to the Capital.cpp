class Solution {
public:
#define ll long long int
pair<ll, ll> solve(vector<vector<int>> &arr, int se, int i, ll &ans, int pr)
{
    if (arr[i].size() == 0)
    {
        ans++;
        return {1, 1};
    }
    pair<ll, ll> temp;
    temp.first = 0;
    temp.second = 0;
    for (int j = 0; j < arr[i].size(); j++)
    {
        if (arr[i][j] != pr)
        {

            pair<ll, ll> p = solve(arr, se, arr[i][j], ans, i);
            temp.first += p.first;
            temp.second += p.second;
        }
    }

    ll maxi = temp.second * se;
    if (temp.first < maxi)
    {
        while (((temp.second - 1) * se) > temp.first)
        {
            temp.second--;
        }

        temp.first++;
        ans += temp.second;
        return temp;
    }
    temp.second++;
    temp.first++;
    ans += temp.second;
    return temp;
}
long long minimumFuelCost(vector<vector<int>> &a, int se)
{
    int n = a.size();
    vector<vector<int>> arr(n + 1);
    for (int i = 0; i < n; i++)
    {
        arr[a[i][0]].push_back(a[i][1]);
        arr[a[i][1]].push_back(a[i][0]);
    }
    ll ans = 0;
    for (int i = 0; i < arr[0].size(); i++)
    {
        pair<ll, ll> x = solve(arr, se, arr[0][i], ans, 0);
    }
    return ans;
}
};
