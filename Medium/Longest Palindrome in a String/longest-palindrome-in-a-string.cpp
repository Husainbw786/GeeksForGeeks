//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        int start = 0;
        int maxi = 1;
        int i,j;
       
       for(int k=1;k<s.size();k++)
       {
           int i = k-1;
           int j = k;
           
           while(i >= 0 && j < s.size() && s[i] == s[j])
           {
               if(j-i+1 > maxi)
               {
                   maxi = j-i+1;
                   start = i;
               }
               i--;
               j++;
           }
           
           i = k-1;
           j = k+1;
            while(i >= 0 && j < s.size() && s[i] == s[j])
           {
               if(j-i+1 > maxi)
               {
                   maxi = j-i+1;
                   start = i;
               }
               i--;
               j++;
           }
           
       }
       
       return s.substr(start,maxi);
       
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends