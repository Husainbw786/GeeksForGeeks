//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<int> arrayForm(int a, int b, int c) {
        // code here
        vector<int>v{a,b,c};
        return v;
    }

    string stringForm(int a, int b, int c) {
        // code here
        string x = "";
        x += to_string(a);
        x += to_string(b);
        x += to_string(c);
        return x;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution obj;
        vector<int> res = obj.arrayForm(a, b, c);
        for (auto x : res) cout << x << " ";
        cout << "\n";
        cout << obj.stringForm(a, b, c) << "\n";
    }
    return 0;
}
// } Driver Code Ends