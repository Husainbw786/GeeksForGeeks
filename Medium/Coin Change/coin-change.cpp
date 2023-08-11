//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        // code here.
        long long dp[N+1][sum+1];
        int i,j;
        for(i=0;i<N+1;i++)
        {
            dp[i][0] = true;
        }
        for(i=1;i<sum+1;i++)
        {
            dp[0][i] = false;
        }  
             
              for(i=1;i<N+1;i++)
                {
                   for(j=1;j<sum+1;j++)
                    {  
                           if(coins[i-1] <= j)
                            {
                                dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
                            }
                            else
                            {
                                dp[i][j] = dp[i-1][j];
                            }
                    }
               }
        return dp[N][sum];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends