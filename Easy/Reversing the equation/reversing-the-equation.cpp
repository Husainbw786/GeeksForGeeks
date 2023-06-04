//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            int n = s.size();
            int i;
            stack<string>st;
            for(i=0;i<n;i++)
            {
                if(s[i] >= '0' && s[i] <= '9')
                {
                    string temp = "";
                    while(i<n && s[i] >= '0' && s[i] <= '9')
                    {
                        temp += s[i];
                        i++;
                    }
                    i--;
                    st.push(temp);
                }
                else
                {
                    string temp = "";
                    temp = s[i];
                    st.push(temp);
                }
            }
            string ans = "";
            while(!st.empty())
            {
                ans += st.top();
                st.pop();
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends