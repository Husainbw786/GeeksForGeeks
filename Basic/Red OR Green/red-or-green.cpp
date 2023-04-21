// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int n,string s) {
           //code here
           int G=0,R=0;
           for (int i=0;i<n;i++)
           {
               if(s[i] == 'G')
               {
                   G++;
               }
               else if(s[i]== 'R')
               {
                   R++;
               }
           }
           if(R > G)
           {
               return G;
           }
           else if(G > R)
           {
               return R;
           }
           
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}  // } Driver Code Ends