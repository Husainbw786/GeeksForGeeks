//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	void solve(int i, int target, vector<int>num, set<vector<int>>&ans, vector<int>temp)
	{
	    if(i == num.size())
	    {
	        if(target == 0)
	        {
	            ans.insert(temp);
	        }
	        return;
	    }
	    
	    if(num[i] <= target)
	    {
	        temp.push_back(num[i]);
	        solve(i,target-num[i],num,ans,temp);
	        temp.pop_back();
	    }
	    solve(i+1,target,num,ans,temp);
	}
	
    vector<vector<int>> UniquePartitions(int n) {
        // Code here
        vector<int>num;
        int i;
        set<vector<int>>st;
        for(i=n;i>=1;i--)
        {
            num.push_back(i);
        }
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,n,num,st,temp);
        for(auto x : st)
        {
            ans.push_back(x);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends