//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char,int>mp{ {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};
        int i;
        int n = s.size();
        int sum = 0;
        for(i=0;i<n;i++)
        {
            if(i == n-1 || mp[s[i]] >= mp[s[i+1]] )
            {
                sum += mp[s[i]];
            }
            else
            {
                sum += mp[s[i+1]] - mp[s[i]];
                i++;
            }
            
        }
        return sum;
        
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
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends