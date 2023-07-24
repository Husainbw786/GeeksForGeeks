//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>mat)
	{
	    // Code here
	    int n = mat.size();
	    int m = mat[0].size();
	    vector<vector<int>>vis(n,vector<int>(m,0));
	    vector<vector<int>>dis(n,vector<int>(m,0));
	    queue<pair<pair<int,int>,int>>q;
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            if(mat[i][j] == 1)
	            {
	                q.push({{i,j},0});
	            }
	        }
	    }
	    
	    while(!q.empty())
	    {
	        int size = q.size();
	        while(size--)
	        {
	            int x = q.front().first.first;
	            int y = q.front().first.second;
	            int z = q.front().second;
	            q.pop();
	            if(x+1 < n && vis[x+1][y] == 0 && mat[x+1][y] == 0)
	            {
	                dis[x+1][y] = z+1;
	                vis[x+1][y] = 1;
	                q.push({{x+1,y},z+1});
	            }
	            if(y+1 < m && vis[x][y+1] == 0 && mat[x][y+1] == 0)
	            {
	                dis[x][y+1] = z+1;
	                vis[x][y+1] = 1;
	                q.push({{x,y+1},z+1});
	            }
	            if(x-1 >= 0 && vis[x-1][y] == 0 && mat[x-1][y] == 0)
	            {
	                dis[x-1][y] = z+1;
	                vis[x-1][y] = 1;
	                q.push({{x-1,y},z+1});
	            }
	            if(y-1 >= 0 && vis[x][y-1] == 0 && mat[x][y-1] == 0)
	            {
	                dis[x][y-1] = z+1;
	                vis[x][y-1] = 1;
	                q.push({{x,y-1},z+1});
	            }
	        }
	    }
	    return dis;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends