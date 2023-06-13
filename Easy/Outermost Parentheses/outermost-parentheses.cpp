//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        int n = s.size();
        int count = 1;
        string temp = "";
        for(int i=1;i<n;i++)
        {
            if(s[i] == '(')
            {
                temp += s[i];
                count++;
            }
            else
            {
                count--;
                temp += s[i];
                
            }
            if(s[i] == ')' && count == 0)
            {
                i+= 1;
                temp.pop_back();
                count = 1;
                continue;
            }
        }
        return temp;
        
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

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends