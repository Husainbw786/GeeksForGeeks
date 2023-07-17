//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		 
		    queue<char>q;
		    unordered_map<char,int>mp;
		    int i;
		    string ans = "";
		    for(i=0;i<A.size();i++)
		    {
		        mp[A[i]]++;
		        if(mp[A[i]] <= 1)
		        {
		            q.push(A[i]);
		        }
		        else
		        {
		            while(!q.empty() && mp[q.front()] != 1)
		            {
		                q.pop();
		            }
		        }
		        if(q.empty())
		        {
		            ans.push_back('#');
		        }
		        else
		        {
		            ans.push_back(q.front());
		        }
		    }
		    return ans;
		    
		}

};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends