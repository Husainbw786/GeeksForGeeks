//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string num) {
        // your code here
       int n = num.size();
        string ans = "";
        int maxi = 0;
        string temp = "";
        for(int i=0;i<n;i++)
        {
            temp += num[i];
            int x = num[i] - '0';
            if(x % 2 != 0)
            {
                ans = temp;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends