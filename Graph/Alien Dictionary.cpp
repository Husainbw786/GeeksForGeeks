class Solution{
    public:
    
    void dfs(int source,vector<vector<int>> &graph,vector<int> &vis,string & ans)
    {
        vis[source] = 1;
        for(auto x : graph[source])
        {
            if(!vis[x])
            {
                dfs(x,graph,vis,ans);
            }
        }
        char ch = source + 'a';
        ans += ch;
    }
    
    string findOrder(string dict[], int n, int K) {
        //code here
        vector<vector<int>> graph(K);
        int i,j;
        for(i=0;i<n-1;i++)
        {
            string s1 = dict[i];
            string s2 = dict[i+1];
            for(j=0;j<min( s1.length(),s2.length() );j++)
            {
                if(s1[j] != s2[j])
                {
                    graph[s1[j] - 'a'].push_back(s2[j] - 'a');
                    break;
                }
              
            }
        }
        
        vector<int>vis(K,0);
        string ans = "";
        for(i=0;i<K;i++)
        {
            if(!vis[i])
            {
                dfs(i,graph,vis,ans);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
