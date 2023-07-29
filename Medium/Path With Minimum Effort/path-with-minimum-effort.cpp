//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int MinimumEffort(vector<vector<int>>& heights) {
        // Code here
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>>dis(n,vector<int>(m,1e9));
        dis[0][0] = 0;
        priority_queue<pair<int,pair<int,int>>, 
        vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq;
        pq.push({0,{0,0}});
        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,1,-1};
        while(!pq.empty())
        {
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            int distance = pq.top().first;
            pq.pop();
            if(row == n-1 && col == m-1)
            {
                return dis[n-1][m-1];
            }
            for(int i=0;i<4;i++)
            {
                int newr = row + dr[i];
                int newc = col+ dc[i];
                
                if(newr >= 0 && newc >= 0 && newr < n && newc < m)
                {
                    int newEffort = max(abs(heights[row][col] - heights[newr][newc]),distance);
                    if(newEffort < dis[newr][newc])
                    {
                        dis[newr][newc] = newEffort;
                        pq.push({newEffort,{newr,newc}});
                    }
                }
                
            }
            
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> heights;
       
        for(int i=0; i<n; ++i){
            vector<int> temp;
            for(int j=0; j<m; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
       
        Solution obj;
        cout<<obj.MinimumEffort(heights)<<"\n";
    }
    return 0;
}
// } Driver Code Ends