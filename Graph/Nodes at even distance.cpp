class Solution{
    public:
    int countOfNodes(vector<int> graph[], int n)
    {
        // code here
        queue<int>q;
        vector<int>dist(n+1,0);
        vector<bool>vis(n+1,false);
        q.push(1);
        vis[1] = true;
        while(!q.empty())
        {
            int temp = q.front();
            int distance = dist[temp];
            q.pop();
            for(auto x : graph[temp])
            {
                if(!vis[x])
                {
                    q.push(x);
                    dist[x] = distance+1;
                    vis[x] = true;
                }
            }
        }
        int i;
        int even = 0;
        int odd = 0;
        for(i=1;i<=n;i++)
        {
            if(dist[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int ans = 0;
        if(odd > 1)
        {
            ans += ((odd) * (odd-1))/2;
        }
        if(even > 1)
        {
            ans += ((even) * (even-1)) / 2;
        }
        return ans;
        
    }
};
