//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  bool can_eat_bananas(vector<int>piles,int H, int mid)
  {
      int count = 0;
      for(auto x : piles)
      {
          int divi = x / mid;
          count += divi;
          if(x % mid != 0)
          {
              count++;
          }
      }
      if(count > H)
      {
          return false;
      }
      return true;
  }
  
  
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int low = 1;
        int high = 1000000000;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(can_eat_bananas(piles,H,mid))
            {
                high = mid -1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends