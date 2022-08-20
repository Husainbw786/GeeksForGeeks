class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>vis(V,0);
        vector<int>dis(V,INT_MAX);
        dis[S] = 0;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       pq.push({0,S});
       while(!pq.empty())
       {
           auto temp = pq.top();
           pq.pop();
           if(!vis[temp.second])
           {
               for(auto x : adj[temp.second])
               {
                   if(dis[x[0]] > x[1] + temp.first)
                   {
                       dis[x[0]] = x[1] + temp.first;
                       pq.push({dis[x[0]],x[0]});
                   }
               }
           }
           vis[temp.second] = 1;
       }
       return dis;
    }
};
