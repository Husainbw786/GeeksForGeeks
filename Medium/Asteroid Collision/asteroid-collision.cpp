//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &asteroids) {
        // code here
        
        stack<int>st;
        int i;
        vector<int>ans;
        for(i=0;i<n;i++)
        {
            if(asteroids[i] > 0)
            {
                st.push(asteroids[i]);
            }
            else
            {
                if(st.empty())
                {
                    ans.push_back(asteroids[i]);
                    continue;
                }
                while(!st.empty() && st.top() < abs(asteroids[i]))
                {
                    st.pop();
                }
                if(!st.empty() && st.top() == abs(asteroids[i]))
                {
                    st.pop();
                    continue;
                }
                if(st.empty() && asteroids[i] < 0)
                {
                    ans.push_back(asteroids[i]);
                }
            }
        }
        vector<int>a;
        while(!st.empty())
        {
            a.push_back(st.top());
            st.pop();
        }
        reverse(a.begin(),a.end());
        for(i=0;i<a.size();i++)
        {
            ans.push_back(a[i]);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends