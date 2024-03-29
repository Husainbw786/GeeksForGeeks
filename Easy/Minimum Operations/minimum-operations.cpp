//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int ans = 1;
        if(n == 0 || n == 1)
        {
            return n;
        }
        while(n>1)
        {
            if(n % 2 == 0)
            {
                n = n / 2;
                ans++;
            }
            else
            {
                n = n-1;
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends