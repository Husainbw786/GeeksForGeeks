//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
		
	int isSame(string s)
	{
	    // Your code goes here
	   int n = s.size();
	   int i;
	   int count = 0;
	   int ans = 0;
	   for(i=0;i<n;i++)
	   {
	       if(s[i] >= 'a' && s[i] <= 'z')
	       {
	           count++;
	       }
	       else
	       {
	           ans = ans * 10 + (s[i] - '0');
	       }
	   }

	   if(ans == count)
	   {
	       return 1;
	   }
	   return 0;
	   
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isSame(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends