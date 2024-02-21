//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    
    void solve(int i,vector<string>temp,  vector<vector<string>>list, vector<vector<string>>&ans)
    {
        if(i == list.size())
        {
            ans.push_back(temp);
            return;
        }
        
        for(auto x : list[i])
        {
            temp.push_back(x);
            solve(i+1,temp,list,ans);
            temp.pop_back();
        }
    }
    
    
    vector<vector<string>> sentences(vector<vector<string>>&list){
        //Write your code here
        vector<vector<string>>ans;
        vector<string>temp;
        solve(0,temp,list,ans);
        return ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
	int t = 1;
	//cin>>t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    vector<vector<string>>list(m, vector<string>(n));
	    for(int i = 0 ; i < m; i++){
	        for(int j = 0; j < n; j++){
	            cin >> list[i][j];
	        }
	    }
	    Solution ob;
	    vector<vector<string>>ans = ob.sentences(list);
	    for(auto it : ans){
	        for(auto it1 : it){
	            cout << it1 << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}

// } Driver Code Ends