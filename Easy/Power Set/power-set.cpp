//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	    
	    void solve(int i, string temp, string s, vector<string>&ans)
	    {
	        if(i == s.size())
	        {
	            ans.push_back(temp);
	            return;
	        }
	          temp += s[i];
        	  solve(i+1,temp,s, ans);
        	  temp.pop_back();
        	  solve(i+1,temp,s,ans);
	    }


		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans,v;
		    solve(0,"",s,ans);
		    sort(ans.begin(),ans.end());
		    for(int i=1;i<ans.size();i++)
		    {
		        v.push_back(ans[i]);
		    }
		    return v;
		}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends