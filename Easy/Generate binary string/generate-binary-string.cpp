//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	
	    void solve(int i,string s, vector<string>&ans,vector<int>v)
	    {
	        if(i == v.size())
	        {
	            ans.push_back(s);
	            return;
	        }
	        s[v[i]] = '0';
	        solve(i+1,s,ans,v);
	        s[v[i]] = '1';
	        solve(i+1,s,ans,v);
	    }
	
		vector<string> generate_binary_string(string s)
		{
		    // Code here
		    vector<int>v;
		    vector<string>ans;
		    int i;
		    for(i=0;i<s.size();i++)
		    {
		        if(s[i] == '?')
		        {
		            v.push_back(i);
		        }
		    }
		    solve(0,s,ans,v);
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string s;
	    cin >> s;
	    Solution ob;
	    vector<string> ans = ob.generate_binary_string(s);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}
// } Driver Code Ends