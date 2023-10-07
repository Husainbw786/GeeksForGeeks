//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    bool check(string temp)
    {
        int n = temp.size();
        if((temp[0] == 'a' || temp[0] == 'e' || temp[0] == 'i' || temp[0] == 'o' || temp[0] == 'u') && (temp[n-1] != 'a' && temp[n-1] != 'e' && temp[n-1] != 'i' && temp[n-1] != 'o' && temp[n-1] != 'u') )
        {
            return true;
        }
        
        return false;
    }
    
    void solve(int i, string s, set<string>&st, string temp)
    {
        if(i == s.size())
        {
            if(temp.size()  > 0  && check(temp))
            {
                st.insert(temp);
            }
            return;
        }
        temp += s[i];
        solve(i+1,s,st,temp);
        temp.pop_back();
        solve(i+1,s,st,temp);
        
    }
  
    set<string> allPossibleSubsequences(string S) {
        // code here
         set<string>st;
         solve(0,S,st,"");
         return st;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends