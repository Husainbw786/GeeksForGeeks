//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string num, int k) {
        
        int n = num.size();
        int i;
        stack<char>st;
        for(i=0;i<n;i++)
        {
            while(!st.empty() && k>0 && st.top() > num[i])
            {
                st.pop();
                k--;
            }
            if(!st.empty() || num[i] != '0')
            {
                st.push(num[i]);
            }
            
        }
        while(!st.empty() && k > 0)
        {
            st.pop();
            k--;
        }
        if(st.empty())
        {
            return "0";
        }
        string ans = "";
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends