//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
        // code here
        int n = s.size();
        stack<int>st;
        int i;
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
                if(maxi < st.size())
                {
                    maxi = st.size();
                }
            }
            else if(s[i] == ')')
            {
                st.pop();
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends