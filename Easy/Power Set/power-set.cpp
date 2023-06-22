//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int n = s.size();
		    int i,j;
		   
		    vector<string>v;
		    for(i=1;i<pow(2,n);i++)
		    {
		        string temp = "";
		        for(j=0;j<n;j++)
		        {
		            if(i & (1 << j))
		            {
		                temp += s[j];
		            }
		        }
		        v.push_back(temp);
		    }
		    sort(v.begin(),v.end());
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