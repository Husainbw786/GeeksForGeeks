//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        
        int n = s.size();
        int i;
        int a_index = -1;
        int b_index = -1;
        int c_index = -1;
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == 'a')
            {
                a_index = i;
            }
            else if(s[i] == 'b')
            {
                b_index = i;
            }
            else if(s[i] == 'c')
            {
                c_index = i;
            }
            if(i > 1)
            {
                count += min(a_index,min(b_index,c_index)) + 1;
            }
        }
        return count;
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
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends