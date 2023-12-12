//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        int i,j;
        for(j=m-2;j>=0;j--)
        {
            for(i=0;i<n;i++)
            {
                int a = (i-1 >= 0 ? M[i-1][j+1] : 0);
                
                int b = M[i][j+1];
                
                int c = (i+1 < n ? M[i+1][j+1] : 0);
                M[i][j] += max({a,b,c}); 
            }
        }
        int ans = 0;
        for(i=0;i<n;i++)
        {
            ans = max(ans, M[i][0]);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends