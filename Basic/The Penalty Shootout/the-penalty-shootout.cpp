// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int penaltyScore(string s)
	{
	    // Your code goes here
	    int i,count=0;
	    for(i=0;i<s.length();i++)
	    {
	        if(s[i] == '2' && s[i+1] == '1')
	        count++;
	    }
	    return count;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string S;
   		cin >> S;

   	    Solution ob;

   		cout << ob.penaltyScore(S) << "\n";
   	}

    return 0;
}  // } Driver Code Ends