//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    void pos(int N, vector<int>&ans)
    {
        if(N <= 0)
        {
            return;
        }
        ans.push_back(N);
        pos(N-5,ans);
    }
    void neg(int N, vector<int>&ans, int org)
    {
        if(N == org)
        {
            ans.push_back(N);
            return;
        }
        ans.push_back(N);
        neg(N+5,ans,org);
    }
    
    vector<int> pattern(int N){
        // code here
        vector<int>ans;
        pos(N,ans);
        neg(ans[ans.size()-1]-5,ans,N);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends