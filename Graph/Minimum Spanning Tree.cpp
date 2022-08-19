class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int>key(V,INT_MAX);
        vector<bool>mst(V,false);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
     key[0] = 0;
     pq.push({0,0});
     while(!pq.empty())
     {
         int u = pq.top().second;
         pq.pop();
         mst[u] = true;
         for(auto x: adj[u])
         {
             int vertex = x[0];
             int weight = x[1];
             if(mst[vertex] == false && weight < key[vertex])
             {
                 key[vertex] = weight;
                 pq.push({key[vertex],vertex});
             }
         }
     }
     int sum = 0;
     for( auto x : key)
     {
         sum = sum + x;
     }
     return sum;
     
    }
};
