//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    int n = s.size();
	    int i;
	    map<char,int>mp;
	    for(i=0;i<n;i++)
	    {
	         mp[s[i]]++;
	    }
	    map<int,int>mp2;
	    int mini = INT_MAX;
	    for(auto x : mp)
	    {
	        mini = min(x.second,mini);
	        mp2[x.second]++;
	    }
	    if(mp2.size() == 1)
	    {
	        return true;
	    }
	    if(mp2.size() == 2)
	    {
	        for(auto x : mp2)
	        {
	            int count = x.second;
	            int a = x.first;
	            if(count == 1)
	            {
	                if(a == 1)
	                {
	                    return true;
	                }
	                if(a == mini + 1)
	                {
	                    return true;
	                }
	            }
	        }
	    }
	  return false; 
	    
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends