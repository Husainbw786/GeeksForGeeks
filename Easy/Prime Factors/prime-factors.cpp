//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int n) {
	    // Code here
	    set<int>ans;
	    vector<int>v;
	    int i;
	    for(i=2;i<=n;i++)
	    {
	        while(n % i == 0)
	        {
	            ans.insert(i);
	            n = n /i;
	        }
	    }
	    for(auto x : ans)
	    {
	        v.push_back(x);
	    }
	    return v;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends